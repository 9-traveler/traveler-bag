#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}












//
//int main()
//{
//	int i = 1;
//	while(i<=199)
//	{
//		if (5 == i)
//			continue;
//	printf("%d ", i);
//	i++;
//    }
//	return 0;
//}










//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//			switch (n)
//			{
//			case 1:n++;
//			case 2:m++; n++;
//				break;
//			}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


















//
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1: 
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	
//	
//	}
//	return 0;
//}











//
//int main()
//{
//	int i = 0;
//	int i[2000];
//	while (i = 1)
//	{
//		printf("����ѧУ");
//	}
//	while (i <= 2000)
//	{
//		printf("дһ����\n");
//		i++;
//	}
//	if (i = 2000)
//	{
//		printf("�óɼ�\n");
//	}
//	return 0;
//}













//
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//		i++;
//			
//	}
//	return 0;
//}





//
//int main()
//{
//	
//	char a = 0;
//	
//
//	while (a<=100 )
//	{
//		if(a%2!=1)
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//
//






//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a <= 100)
//	{
//		if (0 == a % 2)
//			printf("ż��\n");
//		else
//			printf("����\n");
//		int b = ++a;
//	}
//	return 0;
//}





//
//
//int main()
//{
//	int a = 55;
//	
//	if ( 0==a%2 )
//		printf("ż��\n");
//	else
//		printf("����\n");
//		return 0;
//}
//
//
//




//
//int main()
//{
//	int num = 4;
//	if ( 5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}






//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else 
//			printf("haha\n");
//
//
//	return 0;
//
//}





//
//int main()
//{
//	int age = 5;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����");
//	}
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//	printf("׳��\n");
//	else if (age >= 50 && age < 90)
//	printf("����\n");
//	else
//		printf("�ϲ�ʲ\n");
//
//
//	return 0;
//}