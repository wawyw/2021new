#include<stdio.h>
#include<stdlib.h>

struct ListNode
{	int val;
	struct ListNode *next;
}; 
int i;

void shuchu(struct ListNode *head)
{	printf("[");
	while(head!=NULL)
	{if(head->next == NULL)
		{printf("%d]",head->val);
			break;
		}
		printf("%d,",head->val);
		head = head->next;
	}
	printf("\n");
}

struct ListNode * addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	if(l1 == NULL && l2 == NULL)
	{return NULL;
	}
	if(l1 == NULL && l2!=NULL)
	{return l2;
	}
	if(l2 == NULL && l1!=NULL)
	{return l1;
	}
	struct ListNode * add = NULL;
	struct ListNode * x;
	int sum = 0;
	int j = 0 ;
	while(1)
	{if(l1 == NULL && l2 == NULL)
		{break;
		}
	sum = 0;
	if(l1!=NULL)
	{sum += l1->val;
	 l1 = l1->next;
	}
	if(l2!=NULL)
	{sum += l2->val;
	 l2 = l2->next;
	}
	if(add == NULL)
	{x = add = (struct ListNode *)malloc(sizeof(struct ListNode));
	x->val = sum%10 + j;
	x->next = NULL;
	continue;
	}
	struct ListNode * new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
	new_node->val = sum %10+j;
	new_node->next = NULL;
	x->next = new_node;
	x = new_node;
	j = sum / 10;
	}
	return add;
}

struct ListNode * zhuanhuan(int a[],int n){
	if(n == 0)
	{return NULL;
	}
	struct ListNode * list = NULL;
	struct ListNode * last = NULL;
	for(i=0;i<n;i++){
		if(list == NULL)
		{last = list = (struct ListNode *)malloc(sizeof(struct ListNode));
		 list->val = a[i];
		 list->next = NULL;
		 continue;
		}
		struct ListNode * new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
		new_node->val = a[i];
		new_node->next = NULL;
		last->next = new_node;
		last = new_node;
	}
	return list;
}


int main()
{	int a[]={3,2,5,4};
	int b[]={5,8};
	struct ListNode * l1 = zhuanhuan(a,4);
	struct ListNode * l2 = zhuanhuan(b,2);
	shuchu(l1);
	shuchu(l2);
	struct ListNode * add = addTwoNumbers(l1,l2);
	shuchu(add);
}














