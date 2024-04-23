﻿// CMakePointProject.cpp: 定义应用程序的入口点。
//

#include "CMakePointProject.h"

using namespace std;


void g(void) {     //3
	cout << "g" << endl;
	int* a = new int;
	int b;
	*a = 1;
	b = 2;

	cout << *a << endl;
	cout << a << endl;

	delete a;//释放a指向的无名变量
	
	cout << *a << endl;
	cout << a << endl;

	a = nullptr;//地址变量初始化

	if (a == nullptr)//地址变量判断相等
	{
		cout << "pointed to nothing!" << endl;
	}

}                 //4
void f(void) {     //2
	cout << "f" << endl;
	int x;
	int y;
	g();
}                 //5

int nullptrDemo(void)
{
	int* ptr = nullptr;//地址变量初始化

	if (ptr == nullptr)//地址变量判断相等
	{
		cout << "pointed to nothing!" << endl;
	}

	//开辟一个堆变量交给 ptr 管理
	ptr = new int(5);

	if (ptr != nullptr)//地址变量判断不相等
	{
		cout << "pointed to " << *ptr << endl;
	}
	delete ptr;

	return 0;
}

int unRefDemo()
{
	int* a = new int{ 123 };//创建一个栈上的地址变量 a，a 存储了堆上一个无名变量的地址。


	//下面的 *a 叫做：解引用。
	//用 * 和地址变量结合得到无名变量本身。并给无名变量赋值为 2

	cout << "a = " << *a << endl;//输出无名变量的值

	*a = 2;

	cout << "a = " << *a << endl;//输出无名变量的值

	return 0;
}

int main()
{
	cout << "Hello CMake." << endl;

	int a { 123 };//定义整形变量 a 并初始化为 123。这种是C++11写法
	int b = 123;//定义整形变量 b 并初始化为 123。这种是C++11之前的写法。
	//以上两种写法效果一样的。

	int* p = new int{ 456 };

	cout << a << endl;
	cout << b << endl;
	cout << *p << endl;
	cout << p << endl;

	f();

	nullptrDemo();

	unRefDemo();

	return 0;
}
