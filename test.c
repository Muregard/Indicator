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

int main()
{
	//1.����֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
	int* p = NULL;

	//2.��ȷ֪����ʼ����ֵ
	int a = 10;
	int* ptr = &a;
	return 0;
}