//д���� 
//д����������main������
//c�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����c���Դ����е���main����-���

#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//int�����ķ������ͣ�main��������{}����Ǻ����壬int�����͵���˼
//{
//
//	printf("hello word\n");//printf-�⺯��-����Ļ�ϴ�ӡ��Ϣ��,\n�ǻ��е���˼
//	//printf��ʹ�ã�ҲҪ���к�������ͷ�ļ� stdio.h��
//
//	return 0;
//}
//һ�����̿����ж��.c�ļ�
//�����.c�ļ�ֻ����һ��main����


//�������� 
//�����ϵͳ-д����-�����������
//char-�ַ���������
//short-������
//int-����
//long-������
//long long-��������
//float-�����ȸ�����
//double-˫���ȸ�����

//a
//int main()
//{
//	char ch = 'a';//�ַ�����
//
//	int age = 20;//����
//
//	short num = 10;//������
//
//	float weight = 55.5;//�����ȸ�����
//
//	double d = 6.6;//˫���ȸ�����
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n",100);//��ӡһ������-%d
//	//sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}


//int main()
//{
//	//����һ������
//	//int-����   age-����������=0��
//	int age = 20;
//	double weight = 60;
//	age = age + 1;
//	weight = weight + 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//%d-����   %f-float   %lf-double
//������Ϊȫ�ֱ����;ֲ�����



//int a = 100;//ȫ�ֱ��� -{}�ⲿ�����
//int main()
//{
//
//	int a = 10;//�ֲ�����-{}�ڲ������
//
//
//	printf("%d\n", a);//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);


	return 0;
}




















