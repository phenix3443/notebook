// [[file:cpp-concurrency-in-action.org::*%E4%BD%A0%E5%A5%BD%EF%BC%8C%E5%B9%B6%E5%8F%91%E4%B8%96%E7%95%8C][你好，并发世界:1]]
#include <iostream>
#include <thread>

void Hello(void) {
	std::cout << "Hello,concurrency world" << std::endl;
}

int main(int argc, char *argv[])
{
	std::thread t(Hello);
	t.join();

    return 0;
}
// 你好，并发世界:1 ends here
