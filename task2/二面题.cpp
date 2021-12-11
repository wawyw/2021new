#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

void log_list(struct ListNode *ls)
{
    struct ListNode *p = ls;
    while (p)
    {
        printf("%d\t", p->val);
        p = p->next;
    }
    printf("\n");
}

struct ListNode *init_list(int arr[], int len) 
{
    struct ListNode *ls = NULL;   
    struct ListNode *curN = NULL; 
    int i; 
    for (i = 0; i < len; i++)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = arr[i]; 
        temp->next = NULL;
        if (ls == NULL) 
        {
            ls = curN = temp; 
        }
        else 
        {
            curN->next = temp; 
            curN = temp;       
        }
    }
    return ls;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *ans = NULL; 
    struct ListNode *p = NULL;   
    int carry = 0;
    while (l1 || l2) 
    {
        int sum = 0;
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->next = NULL;
        if (l1 && l2) 
        {
            sum = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1) 
        {
            sum = l1->val + carry;
            l1 = l1->next;
        }
        else if (l2) 
        {
            sum = l2->val + carry;
            l2 = l2->next;
        }
        carry = sum >= 10 ? 1 : 0;
        temp->val = sum % 10;
        temp->next = NULL;
        if (ans == NULL) 
        {
            ans = p = temp;
        }
        else 
        {
            p->next = temp;
            p = temp;
        }
    }
    if (carry == 1) 
    {
        struct ListNode *t = (struct ListNode *)malloc(sizeof(struct ListNode));
        t->val = 1;
        t->next = NULL;
        p->next = t;
    }
    return ans;
}

int main()
{
    int a[] = {1,3,3,8};
    int b[] = {5,2,2,9};
    struct ListNode *ls1 = init_list(a, 4);
    struct ListNode *ls2 = init_list(b, 4);
    struct ListNode *ans = addTwoNumbers(ls1, ls2);
    log_list(ans);
    free(ls1);
    free(ls2);
    free(ans);
    return 0;
}
