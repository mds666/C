//常量
//1.字面常量
//
//int main()
//{
//	3.14;
//	"kjk";
//
//
//	return 0;
//}


//2.const修饰的常变量
//#include <stdio.h>
//int main()
//{
	//int num = 10;//变量
	//const int num = 10;//num就是常变量-具有常属性（不能被改变的属性）
	//num = 20;
	//printf("num=%d\n", num);//20

//#define MAX 1000
//	//3.#define 定义的标识常量
//	int n = MAX;
//	printf("n=%d\n", n);

	//4.枚举常量
	//可以一一列举的常量
	//性别
//	enum  sex
//	{
//		//这种枚举类型的变量的未来可能取值
//		male,
//		female,
//		secret,
//	};
//	enum sex s = male;//只能是三个中的一个
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//
//	return 0;
//}


//字符串就是一串字符--用""双引号括起来的一串字符
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
	//字符数组-数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	//char arr[]="hello";
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};

	//求字符串的长度
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值

//int len = strlen("abc");//string length
	//printf("%d\n", len);

	//打印字符串
	///*printf("%s\n", arr1);
	//printf("%s\n", arr2);*/

	return 0;
}

















