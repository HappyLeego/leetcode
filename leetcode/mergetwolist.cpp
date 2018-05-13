//Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
#include<stdio.h>
#include<stdlib.h>
 struct ListNode {
     int val;
     struct ListNode *next;
};
typedef struct ListNode node;
typedef node *list;
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//	list p1,p2,r1,r2,temp;
//	p1 = l1->next;
//	r1 = l1;
//	r2 = l2;
//	p2 = l2->next;
//	while(p1&&p2){
//		if(p1->val >= p2->val){
//			temp = p2;
//			
//			r1->next = temp;
//			temp->next = p1;
//			p2 = p2->next;
//			r2 = r2->next;
//		
//		}
//		if(p1->val < p2->val){
//			temp = p1;
//			r2->next = temp;
//			temp->next = p2;
//			p1 = p1->next;
//			r1 = r1->next;
//		
//		}
//	}
//	if(p1==NULL){
//		return l2;
//	}
//	else{
//		return l1;
//	}
//	
////	if(p1==NULL){
////		
////	}
//}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1 == NULL && l2 == NULL) return NULL;
    
    struct ListNode *head;
    if(l1->val > l2->val)
    {
        head = l2;
        l2 = l2->next;
    }
    else
    {
        head = l1;
        l1 = l1->next;
    }
    struct ListNode *cur = head;
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val > l2->val)
        {
            cur->next = l2;
            l2 = l2->next;
        }
        else
        {
            cur->next = l1;
            l1 = l1->next;
        }
        cur = cur->next;
    }
    
    if(l1 != NULL)
    {
        cur->next = l1;
    }
    else
    {
        cur->next = l2;
    }
    
    return head;
     
}

int main(){
	list l1,l2,l,p;
	int num1[10],num2[10]; int i = 0; int j = 0;
	l1 = (list)malloc(sizeof(node));
	l2 = (list)malloc(sizeof(node));
	list p1,p2;
	l2->next=NULL;
	l1->next=NULL;

	
	printf("please input l1:\n");
	for(i = 0; i < 3;i++){
		scanf("%d",&num1[i]);
		p1 = (list)malloc(sizeof(node));
		p1->val = num1[i];
		p1->next = l1->next;
		l1->next = p1;
	}
	
	printf("please input l2:\n");
	for(j = 0; j < 3;j++){
		scanf("%d",&num2[j]);
		p2 = (list)malloc(sizeof(node));
		p2->val = num2[j];
		p2->next = l2->next;
		l2->next = p2;
	}
	
	l = mergeTwoLists(l1,l2);
	p = l->next;
	while(p!=NULL){
		printf("%d ",p->val);
		p = p->next;
	}
	return 0;
}
