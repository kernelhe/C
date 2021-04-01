//extern可以声明一个变量在函数外部，也可以声明函数或变量在其他的源文件中
extern int x;//声明两个外部变量，告诉编译器这两变量是在别的源文件中定义的
extern int y;

int addtwonum(void) {
	return x + y;
}
