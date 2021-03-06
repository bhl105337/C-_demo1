#include "pch.h"
#include <iostream>

using namespace std;

/*
 * 结构体类型的引用
 * 定义结构体
 */
typedef struct
{
	int x;
	int y;
} Coor; //定义结构体名字

/*
 * 引用作为函数参数
 */
void fun(int& a, int& b) //传来的实参，会分别被a和b两个形参起别名
{
	int c = 0; //初始化
	c = a; //为a起别名c，同等于把c的值改变为a
	a = b; //把a的值变成b
	b = c; //此时a的值已改变成b，再把c的值改变成b
};

int main(void)
{
	//初始化引用
	// int a = 10; //初始化定义
	// int& b = a; //变量别名，引用必须初始化，否则会报错
	//
	// b = 20; //操纵别名
	//
	// cout << a << endl; // a =20,原因：b是a的别名，对别名做任何操作等于对着a本身做任何操作
	//
	// a = 30; //操纵本体；
	// cout << b << endl; // b =30,原因：直接操纵本体也会直接改变别名的值

	//结构类型引用
	// Coor c1; //定义结构体的变量,即实体
	// Coor& c = c1; //定义别名
	//
	// c.x = 10;
	// c.y = 20;
	// //对c里面的x和y操作
	//
	// cout << c1.x << c1.y;//最后会输出10和20


	//指针类型引用
	//类型 *&指针引用名(别名) = 指针
	// int a = 10;
	// int* p = &a;//指针变量p指向a
	// int*& q = p;//指针类型引用，给p起别名q（固定写法 ）
	// *q = 20;//对q做操作，把20赋值给*q，则等于20赋值给了p与a，最终a会输出20
	// //注：用q起得是p的别名，对q的操作是指针操作，最后实际也改变了a的值 
	// cout << a << endl; 


	//引用作为函数参数，需要注意的事项
	int x = 10, y = 20;
	cout << x << "," << y << endl;//尚未改变
	fun(x, y);//把x和y的值对调
	cout << x << "," << y << endl;//改变之后

	return 0;
}
