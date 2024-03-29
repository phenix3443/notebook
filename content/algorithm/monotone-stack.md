# 单调栈

单调栈（monotone-stack）是指栈内元素（栈底到栈顶）都是（严格）单调递增或者单调递减的。

如果有新的元素入栈，栈调整过程中 *会将所有破坏单调性的栈顶元素出栈，并且出栈的元素不会再次入栈* 。

由于每个元素只有一次入栈和出栈的操作，所以单调栈的维护时间复杂度是 O(n) 。

单调栈性质：

1. 单调栈里的元素具有单调性。
2. 递增（减）栈中可以找到元素左右两侧比自身小（大）的第一个元素。

我们主要使用第二条性质，该性质主要体现在栈调整过程中，下面以递增栈为例（假设所有元素都是唯一），当新元素入栈。

+ 对于将要出栈元素来说：
  + 新元素是右侧第一个比它小的元素。
  + 栈顶第二个元素是左侧第一个比它小的元素。
  + 栈底元素是递增趋势下，最后一个比它小的元素，也就是左侧递增的边界。
+ 对于新元素来说：
  + 栈顶元素是它左侧第一个比它大的数字。
  + 等待所有破坏递增顺序的元素出栈后，栈顶元素是左侧第一个比自身小的元素。

## 应用

+ [739 每日温度](https://leetcode-cn.com/problems/daily-temperatures/)

解法： <https://leetcode-cn.com/problems/daily-temperatures/solution/ke-neng-shi-dan-diao-zhan-zui-jian-dan-de-shuo-min/>

+ [496. 下一个更大元素 I](https://leetcode-cn.com/problems/next-greater-element-i/)

+ [503 下一个更大元素 II](https://leetcode-cn.com/problems/next-greater-element-ii/)

+ [84 柱状图形中最大的矩形](https://leetcode-cn.com/problems/largest-rectangle-in-histogram/)

解法：<https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/qing-chu-ming-bai-de-dan-diao-zhan-jie-fa-fu-xiang/>

+ [503 下一个更大元素 II](https://leetcode-cn.com/problems/maximal-rectangle/)

+ [42 接雨水](https://leetcode-cn.com/problems/trapping-rain-water/)

解法：<https://leetcode-cn.com/problems/trapping-rain-water/solution/xiang-jie-wei-shi-yao-hui-xiang-dao-shi-yong-dan-d/>
