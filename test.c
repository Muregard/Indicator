#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//�����p����һ��Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ�
//
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i <= 10;i++)//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//aΪ�ֲ���������test���������٣��ڴ��ͷ�
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
//	//1.����֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;
//
//	//2.��ȷ֪����ʼ����ֵ
//	int a = 10;
//	int* ptr = &a;
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0];vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//ָ���һ��Ԫ��
//	int* pend = arr + 9;//ָ�����һ��Ԫ��
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
//	//ָ���ָ�������ǰ�᣺����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//err
//	printf("%d\n", &arr[9] - &arr[0]);//ָ��-ָ�룬�õ��м������Ԫ�ظ���
//	return 0;
//}

//1.�⺯������ - ���ַ�������
//#include<string.h>

//2.���������� - ���ַ�������
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

//3.�ݹ鷽�� - ���ַ�������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else						 
//		return 0;
//}

//4.ָ��-ָ�� - ���ַ�������	
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//ָ��-ָ�룬�õ��м�Ԫ�ظ���
//}
//int main()
//{
//	//strlen(); - ���ַ�������
//	//�ݹ�
//	//int len = strlen("abc");
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//ָ������ - ����

int main()
{
	int arr[10];//�������� - ��ŵ�������
	char ch[5];//�ַ����� - ��ŵ����ַ�
	int* parr[5];//ָ������ - ��ŵ���ָ��
	return 0;
}