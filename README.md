# Exercises
###第 1 题
1、写一个自定义的宏或函数 LOG，实现如下功能：
如果在 main.cpp 文件的 test 函数中调用
LOG("i = %d, j = %d", 456, 789);
而该行语句在 main.cpp 的 123 行，则得到的输出结果是：
[main.cpp(123) in test] i = 456, j = 789
