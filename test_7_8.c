#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Book


{
	char name[20];
	short price;


};


int main()
{

	struct Book b1 = { "yaun shen book",60 };
	struct Book* pb = &b1;
	printf("书名：%s\n", pb->name);
	
	
	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 55;
	printf("修改后的价格：%d元", b1.price);*/
	return 0;
}








//
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;
//	*p
//	return 0;
//}