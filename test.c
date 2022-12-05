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

//int main()
//{
//	//1.当不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//
//	//2.明确知道初始化的值
//	int a = 10;
//	int* ptr = &a;
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0];vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指向第一个元素
//	int* pend = arr + 9;//指向最后一个元素
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提：两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//err
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针，得到中间包含的元素个数
//	return 0;
//}

//1.库函数方法 - 求字符串长度
//#include<string.h>

//2.计数器方法 - 求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//3.递归方法 - 求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else						 
//		return 0;
//}

//4.指针-指针 - 求字符串长度	
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//指针-指针，得到中间元素个数
//}
//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	//int len = strlen("abc");
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//指针数组 - 数组

int main()
{
	int arr[10];//整形数组 - 存放的是整形
	char ch[5];//字符数组 - 存放的是字符
	int* parr[5];//指针数组 - 存放的是指针
	return 0;
}