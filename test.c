#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存
//
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i <= 10;i++)//当指针指向的范围超出数组arr的范围时，p就是野指针
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//a为局部变量，出test函数后销毁，内存释放
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

int main()
{
	//1.当不知道p应该初始化为什么地址的时候，直接初始化为NULL
	int* p = NULL;

	//2.明确知道初始化的值
	int a = 10;
	int* ptr = &a;
	return 0;
}