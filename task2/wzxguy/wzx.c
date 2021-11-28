#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode *next;
};
int i;
struct ListNode * convertArray(int a[],int n){
	if(n == 0){
		return NULL;
	}
	struct ListNode * list = NULL;
	struct ListNode * last = NULL;
	for(i=0;i<n;i++){
		if(list == NULL){
			last = list = (struct ListNode *)malloc(sizeof(struct ListNode));
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



void output(struct ListNode* head)
{
	printf("[");
	while(head!=NULL){
		if(head->next == NULL){
			printf("%d]",head->val);
			break;
		}
		printf("%d,",head->val);
		head = head->next;
	}
	printf("\n");
}

struct ListNode * addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	if(l1 == NULL && l2 == NULL){
		return NULL;
	}
	if(l1 == NULL && l2!=NULL){
		return l2;
	}
	if(l2 == NULL && l1!=NULL){
		return l1;
	}
	struct ListNode * add = NULL;
	struct ListNode * hh;
	int sum = 0;
	int b = 0 ;
	while(1){
		if(l1 == NULL && l2 == NULL){
			break;
		}
		sum = 0;
		if(l1!=NULL){
			sum += l1->val;
			l1 = l1->next;
		}
		if(l2!=NULL){
			sum += l2->val;
			l2 = l2->next;
		}
		if(add == NULL){
			hh = add = (struct ListNode *)malloc(sizeof(struct ListNode));
			hh->val = sum%10 + b;
			hh->next = NULL;
			continue;
		}

		struct ListNode * new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
		new_node->val = sum %10+b;
		new_node->next = NULL;
		hh->next = new_node;
		hh = new_node;
		b = sum / 10;
	}
	return add;
}



int main()
{
	int a[]={1,2,3,4};
	int b[]={5,6};
	
	struct ListNode * l1 = convertArray(a,4);
	struct ListNode * l2 = convertArray(b,2);
	output(l1);
	output(l2);
	struct ListNode * add = addTwoNumbers(l1,l2);

	output(add);


}














