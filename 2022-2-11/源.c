//����
//1.���泣��
//
//int main()
//{
//	3.14;
//	"kjk";
//
//
//	return 0;
//}


//2.const���εĳ�����
//#include <stdio.h>
//int main()
//{
	//int num = 10;//����
	//const int num = 10;//num���ǳ�����-���г����ԣ����ܱ��ı�����ԣ�
	//num = 20;
	//printf("num=%d\n", num);//20

//#define MAX 1000
//	//3.#define ����ı�ʶ����
//	int n = MAX;
//	printf("n=%d\n", n);

	//4.ö�ٳ���
	//����һһ�оٵĳ���
	//�Ա�
//	enum  sex
//	{
//		//����ö�����͵ı�����δ������ȡֵ
//		male,
//		female,
//		secret,
//	};
//	enum sex s = male;//ֻ���������е�һ��
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//
//	return 0;
//}


//�ַ�������һ���ַ�--��""˫������������һ���ַ�
//int main()
//{
//	"abcdefg";
//	"hello ";
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	//�ַ�����-������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	//char arr[]="hello";
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};

	//���ַ����ĳ���
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ

//int len = strlen("abc");//string length
	//printf("%d\n", len);

	//��ӡ�ַ���
	///*printf("%s\n", arr1);
	//printf("%s\n", arr2);*/

	return 0;
}

















