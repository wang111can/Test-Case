#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef int LIST;
void ListData(SLIST** pphead, LIST x)
{
	SLIST* newnode = (SLIST*)malloc(sizeof(SLIST));//Ϊ�½ڵ㿪�ٿռ�
	newnode->data = x;
	newnode->next = NULL;//���һ���������ָ��ָ���
	if (*pphead == NULL)//�ж������Ƿ�Ϊ��
	{
		*pphead = newnode;
	}
	else
	{
		SLIST* replica = *pphead;
		while (replica->next != NULL)
		{
			replica = replica->next;
		}
		replica->next = newnode;//�����һ�ڵ�ĵ�ַ
	}
}
typedef  struct SList
{
	LIST data;
	struct SList* next;
}SLIST;
void Singlelist()
{
	SLIST* p = NULL;//����һ����ͷ
	ListData(&p, 1);
}


int main()
{
	Singlelist();
	return 0;
}