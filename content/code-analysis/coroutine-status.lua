-- [[file:lua-analysis.org::*%E5%8D%8F%E5%90%8C%E7%A8%8B%E5%BA%8F%E7%8A%B6%E6%80%81%E6%B5%8B%E8%AF%95][协同程序状态测试:1]]
local co
co = coroutine.create(  function()
        print("before yield status: " .. coroutine.status(co))
        coroutine.yield()
        print("after yield: " .. coroutine.status(co))
end)
print("before start status: ",coroutine.status(co))
coroutine.resume(co)
print("after yeild status: ",coroutine.status(co))
coroutine.resume(co)
print("after end status: ",coroutine.status(co))
-- 协同程序状态测试:1 ends here
