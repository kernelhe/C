#### 64位编程模型

64位`Linux`系统采用`LP64`编程模型。

| Type               | size(Byte) |
| ------------------ | ---------- |
| char               | 1          |
| unsigned char      | 1          |
| short              | 2          |
| unsigned short     | 2          |
| int                | 4          |
| unsigned int       | 4          |
| long               | 8          |
| unsigned long      | 8          |
| float              | 4          |
| double             | 8          |
| long int           | 8          |
| long long          | 8          |
| long double        | 16         |
| size_t             | 8          |
| unsigned long long | 8          |



#### void 类型

void类型指定没有可用的值，它通常用于以下三种情况：

| 序号 | 类型与描述                                                   |
| ---- | ------------------------------------------------------------ |
| 1    | **函数返回为空**                                                                                                          C中有各种函数都不返回值，或者可以说它们返回空。不返回值的函数的返回类型为空。例如 `void exit(int status);` |
| 2    | **函数参数为空**                                                                                                                    C中有各种函数不接受任何参数。不带参数的函数可以接收一个void。例如`int rand(void)`; |
| 3    | **指针指向void**                                                                                                                              类型为**void ***的指针代表**对象的地址**，而不是类型。例如，内存分配函数`void *malloc(size_t size);`返回指向void的指针，可以转换为任何数据类型。 |



#### C中的左值(`Lvalues`)和右值(`Rvalues`)

C中有两种类型的表达式：

1. **左值**(`lvalue`)：指向内存位置的表达式被称为左值(`lvalue`)表达式。左值可以出现在赋值符号的左边或右边。
2. **右值**(`rvalue`)：术语右值(`rvalue`)指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。

变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。下面是一个有效的语句：

```c
int g = 20;
```

但是下面这个就不是一个有效的语句，会生成编译时错误：

```c
10 = 20；
```



#### C的判断

C语言把任何**非零**和**非空**的值假定为**true**，把**零**或**NULL**假定为**false**。

#### 判断语句

C语言提供了以下类型的判断语句：

| 语句           | 描述                                                         |
| -------------- | ------------------------------------------------------------ |
| if语句         | 一个if语句由一个布尔表达式后跟一个或多个语句组成             |
| if...else语句  | 一个if语句后可跟一个可选的else语句，else语句在布尔表达式为假时执行 |
| 嵌套if语句     | 可以在一个if语句或else if语句内使用另一个if或else if语句     |
| switch语句     | 一个switch语句允许测试一个变量等于多个值时的情况             |
| 嵌套switch语句 | 可以在一个switch语句内使用另一个switch语句                   |

switch语句

一个switch语句允许测试一个变量等于多个值时候的情况。每个值称为一个case，且被测试的变量会对每个switch case进行检查。

```c
switch(expression){
    	case constant-expression  :
       			statement(s);
      	 		break; /* 可选的 */
    	case constant-expression  :
       			statement(s);
       			break; /* 可选的 */
  
    /* 可以有任意数量的 case 语句 */
   		default : /* 可选的 */
      			 statement(s);
}
```

switch语句必须遵循下面的规则：

- switch语句中的expression是一个**常量表达式**，必须是一个**整型**或**枚举**类型。

- 在一个switch中可以有任意数量的case语句。每个case后跟一个比较的值和一个冒号。

- case的constant-expression**必须与switch中的变量具有相同的数据类型**，且必须是一个常量或字面量。

- 当被测试的变量等于case中的常量时，case后跟的语句将被执行，直到遇到break语句为止。

- 当**遇到break**语句时，**switch终止**，控制流将跳转到switch语句后的下一行。

- 不是每个case都需要包含break。如果case语句不包含break，控制流将会继续后续的case，直到遇到break为止。

- 一个switch语句可以有一个可选的default case，出现在switch的结尾。default case可用于在上面所有的case都不为真时执行一个任务。**default case中的break语句不是必需的**。

  ![switch_statement](/img/switch_statement.jpg)