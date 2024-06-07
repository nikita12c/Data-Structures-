// two methods to reverse LL:
// iterative and recursive
//We use here Iterative method (using for loop) :
//approach--> we are pointing the nodes to reverse so fist creating null and point first node to it and so on upto last node so after
//reversing the links we reach to last node and point head to that node .
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

void PrintList(struct node* head){
  printf("The elements in the linked list are ");
  while(head != NULL){
    printf(" %d",head->data);
    head=head->next;
  }
  printf("\n");
}

struct node* reverse_list(struct node* head){
  struct node *current,*next,*prev;
  current=head;
  prev=NULL;
  while(current!=0){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
  return head;
}

int main(){
  struct node* head=NULL; //head is locally declared
  head=insertAtEnd(head,2);
  head=insertAtEnd(head,3);
  head=insertAtEnd(head,4);
  head=insertAtEnd(head,5);
  head=insertAtEnd(head,6);
  printf("\nBefore Reverseing\n");
  PrintList(head);
  printf("\nAfter Reverseing\n");
  head=reverse_list(head);
  PrintList(head);
  return 0;
}
//two conditions to check further : if only one emment is present and 2nd if no elements