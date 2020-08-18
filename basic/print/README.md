#### print的format标签属性

格式：

```c
%[flags][width][.precision][length]specifier
```

```c
%[标志] [宽度] [.精度] [长度]说明符
```



#### 小数的输出

> 小数的长度是固定的，float 始终占用4个字节，double 始终占用8个字节。

- %f 以十进制形式输出 float 类型；
- %lf 以十进制形式输出 double 类型；
- %e 以指数形式输出 float 类型，输出结果中的 e 小写；
- %E 以指数形式输出 float 类型，输出结果中的 E 大写；
- %le 以指数形式输出 double 类型，输出结果中的 e 小写；
- %lE 以指数形式输出 double 类型，输出结果中的 E 大写。