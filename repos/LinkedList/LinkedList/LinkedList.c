#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef int LIST;
void ListData(SLIST** pphead, LIST x)
{
	SLIST* newnode = (SLIST*)malloc(sizeof(SLIST));//为新节点开辟空间
	newnode->data = x;
	newnode->next = NULL;//最后一个单链表的指针指向空
	if (*pphead == NULL)//判断链表是否为空
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
		replica->next = newnode;//存放下一节点的地址
	}
}
typedef  struct SList
{
	LIST data;
	struct SList* next;
}SLIST;
void Singlelist()
{
	SLIST* p = NULL;//定义一个标头
	ListData(&p, 1);
}


int main()
{
	Singlelist();
	return 0;
}