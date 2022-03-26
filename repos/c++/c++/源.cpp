#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int My_strlen(char *x)
{
	char* y = x;
	int count = 0;
	while (*y++ && ++count);
	return count;
}
int My_strcmp(char* x, char* y)
{
	char* l1 = x;
	char* l2 = y;
	while (*l1 == *l2 && *l1 && *l2)
		l1++, l2++;
	return (*l1) - (*l2);
	
}
void My_strcat(char* x, char* y)
{
	char* l1 = x;
	char* l2 = y;
	while (*l1++);
	l1--;
	while ( *l2)
		*l1++=*l2++;
	*l1 = *l2;
}
bool My_strstr(char* x, char* y)
{
	char* l1 = x;
	char* l2 = y;
	
	while (*l1)
	{
		while (*l1 != *l2)
			l1++;
		char* tmp = l2;
		while (*tmp == *l1 && *tmp && *l1)
		{
			tmp++, l1++;
		}
		if (!*tmp)
			return true;

		
	}
	return false;
}
int main()
{
	char a[100] = "hjajskdhk456123dia";
	char arr[]="123";
	if (My_strstr(a, arr))
		cout << "YES";
	else
		cout << "NO";
	



	/*if (My_strcmp(a, arr) > 0)
		cout << "a > arr";
	else if(My_strcmp(a, arr) <0)
		cout << "a < arr";
	else
		cout << "a == arr";*/

}
