#### C `enum`(枚举)

枚举语法定义格式为：

```c
enum 枚举名 {枚举元素1，枚举元素2，... 枚举元素n};
```

举例：

```c
enum DAY
{
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
};
```

> **注意：**第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。

可以在定义枚举类型时改变枚举元素的值：

```c
enum season {spring, summer = 3, autumn, winter};
```

> 没有指定值的枚举元素，其值为前一元素加 1。也就说 spring 的值为 0，summer 的值为 3，autumn 的值为 4，winter 的值为 5。



#### 枚举变量的定义

前面我们只是声明了枚举类型，接下来我们看看如何定义枚举变量。

我们可以通过以下三种方式来定义枚举变量：

1. 先定义枚举类型，再定义枚举变量

   ```c
   enum DAY 				//声明
   {
   		MON = 1, TUE, WED, THU, FRI, SAT, SUN
   };
   enum	DAY	day;  //定义
   ```

2. 定义枚举类型的同时定义枚举变量

   ```c
   enum DAY 
   {
   		MON = 1, TUE, WED, THU, FRI, SAT, SUN
   } day;
   ```

3. 省略枚举名称，直接定义枚举变量

   ```c
   enum 
   {
   		MON = 1, TUE, WED, THU, FRI, SAT, SUN
   } day;
   ```

   

