#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char a[20] = { 0 };
//	printf("getchar");
//	scanf("%s", &a);
//	getchar();
//	printf("Y/N");
//	int e =0;
//	while ((e=getchar())!=EOF)
//	{
//		if (e == 'Y')
//		{
//			printf("****！！！！！！****");
//			break;
//		}
//		else
//		{
//			printf("remake");
//			continue;
//		}
//	}
//	return 0
//		;
//
//
//
int cc()
{   //1
	char a = 'e';
	int b = 2;
	putchar(a);
	putchar(b);	
	putchar(1);
	putchar('a');
	printf("\n\n\n\n\n\n");

	//2
	char j;
	j = getchar();
	putchar(j - 32);
	getchar();
	scanf("%c", &j);
	printf("%c", j - 32);
	printf("\n\n\n");
	getchar();
	//3
	char k;
	k = getchar();
	putchar(k - 1);
	putchar(k + 1);
	getchar();
	printf("\n");
	scanf("%c", &k);
	printf("%c,%c", k-1, k+1);

}