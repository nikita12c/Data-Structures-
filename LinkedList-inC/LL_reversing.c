#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};
struct node* head=NULL;

void ReverseLL(struct node* headref){
if(headref->next==NULL){
  head=headref;
  return;
}
  ReverseLL(headref->next); //after travelling in forward direction headref will point to last second node and then travell reverse stack
  struct node* q=headref->next;
  q->next=headref;
  headref->next=NULL;
}

void PrintList(struct node* head){
  printf("The elements in the linked list are ");
  while(head != NULL){
    printf(" %d",head->data);
    head=head->next;
  }
  printf("\n");
}
void InsertAtBeg(int value)
{
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head;
    head = temp;
}

int main(){
InsertAtBeg(11);
InsertAtBeg(12);
InsertAtBeg(13);
InsertAtBeg(14);
InsertAtBeg(15);
PrintList(head);
ReverseLL(head);
PrintList(head);
  return 0;
}