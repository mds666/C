//写代码 
//写主函数数（main函数）
//c语言是从主函数的第一行开始执行的
//所以c语言代码中得有main函数-入口

#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//int函数的返回类型，main函数名，{}里的是函数体，int是整型的意思
//{
//
//	printf("hello word\n");//printf-库函数-在屏幕上打印信息的,\n是换行的意思
//	//printf的使用，也要打招呼（引用头文件 stdio.h）
//
//	return 0;
//}
//一个工程可以有多个.c文件
//但多个.c文件只能有一个main函数


//数据类型 
//计算机系统-写程序-解决生活问题
//char-字符数据类型
//short-短整型
//int-整型
//long-长整型
//long long-更长整型
//float-单精度浮点数
//double-双精度浮点数

//a
//int main()
//{
//	char ch = 'a';//字符类型
//
//	int age = 20;//整型
//
//	short num = 10;//短整型
//
//	float weight = 55.5;//单精度浮点型
//
//	double d = 6.6;//双精度浮点型
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n",100);//打印一个整数-%d
//	//sizeof-关键字-操作符-计算类型或者变量所占空间的大小
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
//	//创建一个变量
//	//int-类型   age-变量的名字=0；
//	int age = 20;
//	double weight = 60;
//	age = age + 1;
//	weight = weight + 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//%d-整型   %f-float   %lf-double
//变量分为全局变量和局部变量



//int a = 100;//全局变量 -{}外部定义的
//int main()
//{
//
//	int a = 10;//局部变量-{}内部定义的
//
//
//	printf("%d\n", a);//当局部变量和全局变量名字冲突的情况下，局部优先
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




















