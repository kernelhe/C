#### 函数声明

函数声明会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

函数声明可以包括以下几个部分：

```c
return_type function_name (parameter list);
```

比如max()的函数定义如下：

```c
int max(int num1, int num2) 
{
   /* 局部变量声明 */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```

针对上面定义的函数max()，以下是函数声明：

```c
int max(int num1, int num2);//num1, num2是形参
```

**形式参数**就像函数内的其他局部变量，在**进入函数**时被**创建**，**退出函数**时被**销毁**。

在函数声明中，参数的名称并不重要，只有参数的类型是必须的，因此下面也是有效的声明：

```c
int max(int, int);
```

调用函数max()

```c
max(2, 6);//实参
```

