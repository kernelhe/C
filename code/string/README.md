#### 字符串

字符串在以如下输入进行初始化的时候需要对空字符'\0'特别注意：

```c
char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
```

如果没有在字符数组最后增加'\0'的话输出结果有误：

```c
//初始化字符串
char greeting[5] = {'h', 'e', 'l', 'l', 'o'};
printf("Greeting message...:%s\n", greeting);
```

输出结果：

```c
Greeting message: Hello烫烫烫?侵7(?╔?╚╔╔
```

在使用不定长数组初始化字符串时默认结尾为'\0'

```c
char greeting[] = "hello";
printf("Greeting message: %s, greeting[] Length: %d\n", greeting, sizeof(greeting));
```

输出结果：

```c
Greeting message: Hello, greeting[] Length: 6
```



#### 概念理解

1. `'a'`表示是一个字符，`"a"`表示一个字符串相当于`'a'+'\0'`
2. `' '`里面只能放一个字符。
3. " "里面表示的是字符串，编译器会自动在串末尾补一个0。
4. 字符串的本质含义是以`'\0'结束的字符数组。`
5. 字符串的字面量是常量，比如"hello world"。



#### 字符串的定义与初始化

1. 数组形式

   ```c
   char string[] = {'h', 'e', 'l', 'l', 'o', '\0'};
   ```

2. 直接赋首地址：

   ```c
   char string[] = "hello";
   ```

3. 省略长度

   ```c
   char string[] = "hello";
   char string[] = {"hello"};
   ```

4. 字符指针

   ```c
   char *ptr = "hello";
   ```

   输出：

   ```c
   printf(ptr);/* 字符串指针 */
   printf(string);/* 字符数组名 */
   ```

   字符串格式化输出：

   ```c
   printf("%s",  ptr);
   printf("%s", string);
   ```

   

