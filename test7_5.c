#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{
	
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", sizeof(p));
	return 0;
}









//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	
//	return 0;
//}




//
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 50;
//	int b = 60;
//	int max=MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}






//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 50;
//	int num2 = 65;
//	int sum = Add(num1,num2);
//	printf("sum=%d", sum);
//	return 0;
//}
//

//
//extern int Add(int ,int);
//int main()
//{
//	int num1 = 10;
//	int num2 = 89;
//	int b = Add(num1, num2);
//	printf("b=%d", b);
//	return 0;
//}
//
//
//
//
//
//
//








//
//int main()
//{
//	extern int g_val; 
//	printf("%d\n", g_val);
//	return 0;
//}
//
//
//



//
//void test()
//{
//	static int a = 1;
//	a++; 
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
// }






//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}


//
//int main()
//{
//	int a = 10;
//	int b = 65;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}
//
////
////int main()
////{
////	int a = (int)3.14;
//	return 0;
//}
//
//

//
//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("a=%d\n b=%d\n", a,b);
//	return 0;
//}
//

//
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("b=%d", b);
//	return 0;
//}
//
//



//
//int main()
//{
//	int num1 = 0;
//	printf("加入比特\n");
//	while (num1 < 2000)
//	{
//		printf("敲一行代码：%d\n", num1);
//		num1++;
//
//	}
//	if (num1 >= 2000)
//		printf("好offer\n");
//	return 0;
//}








//int Max(int x, int y)
//{
//	if (x > y)
//	return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 30;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("Max=%d\n", max);
//	return 0;
//}