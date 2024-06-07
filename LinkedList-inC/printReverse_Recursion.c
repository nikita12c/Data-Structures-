//We just print in reverse order by recursion
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};

struct node* insertAtEnd(struct node* head,int data){
  struct node* newNode=(struct node*) malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=NULL;
  struct node* temp;
  //in c use == for comparision
  if(head==NULL){
    head=newNode;
  }else{
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    //the temp will stop at last node
    }
     temp->next=newNode;
  }
  return head;
}
//printing elements in forward order using recursion
void PrintList(struct node* head){
  if(head==0){ //exit/base condition 
    return;
  }
  printf("%d ",head->data);
  PrintList(head->next);
}
//printing elements in reverse order using recursion
void PrintReverse(struct node* head){
  if(head==0){ //exit/base condition 
    return;
  }
  PrintReverse(head->next);
  printf("%d ",head->data);
}
int main(){
  struct node* head=NULL; //head is locally declared
  head=insertAtEnd(head,2);
  head=insertAtEnd(head,3);
  head=insertAtEnd(head,4);
  head=insertAtEnd(head,5);
  head=insertAtEnd(head,6);
  printf("\nBefore Reverseing\n");   //for normal printing (PrintList) using recursion is not efficient as using iterative approach we need only single pointer variable while in recusion we use space in the stack section of memory for so many function calls so there is implicit use of memory there 
  //for ReversePrint we need 3 pointers so using recusion for ReversePrint is okk.
  PrintList(head);
  printf("\nAfter Reverseing\n");
  PrintReverse(head);
  return 0;
}
