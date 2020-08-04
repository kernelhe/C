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



