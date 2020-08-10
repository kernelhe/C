#### 整数常量

整数常量可以是十进制，八进制，或十六进制。前缀指定基数：`0x`或`0X`表示十六进制，0表示八进制，不带前缀则默认表示十进制。

整数常量也可以带一个后缀，后缀是U和L的组合，**U**表示**无符号整数**(unsigned)，**L**表示**长整数**(long)。**后缀可以是大写，也可以是小写，U和L的顺序任意**。

下面简单列举几个整数常量的例子：

```c
212		 /* 合法的 */
215u	/* 合法的 */
0xFeeL/* 合法的 */
078		  /* 非法的：8不是八进制的数字 */
032UU/* 非法的：不能重复后缀 */
```



#### 定义常量

在C中，有两种简单的定义常量的方式：

1. 使用`#define`预处理器
2. 使用`const`关键字

#### #define预处理器

```c
#define LENGTH 10
```

请注意，把**常量**定义为**大写字母**的形式，是一个很好的编程实践。

#### `const`关键字

可以使用`const`前缀声明指定类型的常量，如下所示：

```c
const type variable = value;
```



#### C存储类

存储类定义C程序变量/函数的范围(可见性)和生命周期。这些说明符放在它们所修饰的类型之前。下面列出C程序中可用的存储类：

- auto
- register
- static
- extern

##### register类

register存储类用于定义存储在寄存器中而不RAM中的局部变量。这意味着变量的最大尺寸等于寄存器的大小，且不能对它应用一元的'&'运算符(因为它没有内存位置)。

```c
{
    register int miles;
}
```

寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义'register'并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的机制。

#### static存储类

static修饰的变量存储在`.data`(初始化的静态变量或全局变量)中或者`.bss`(未初始化的静态变量或全局变量)。

static修饰全局变量时，会使变量的作用域限制在声明它的文件内。全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。

#### Linux内核代码中的static使用

> Linux内核代码十分庞大，代码量超过百万行。对于C语言的函数和全局变量的作用空间都是全局的，在另外一个文件中，使用extern关键字就可以实现对于其他文件中的全局变量和函数的访问。因此，一旦源码中函数名称定义相同，就会出现编译错误。因此，需要引入一些封装的特性，限制源码中函数和变量作用的空间。在前面添加static关键字，其作用范围将缩小到仅仅为当前的文件，而不是整个系统。因此，在平时写驱动时，如果函数不需要被其他文件中引用，在前面添加static关键字是一个很好的习惯。



#### extern存储类

extern存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当使用extern时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。

当有多个文件但定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用extern来得到已定义的变量或函数的引用。可以这么理解，extern是用来在另一个文件中声明一个全局变量或函数。

#### static声明的变量或函数，还能用extern进行外部引用吗?

不可以。static修饰的全局变量或函数，只能在本文件中访问或调用，不能在其它文件中访问，即便是extern外部声明也不可以。