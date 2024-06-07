// inserting at nth position
// 3 possible checks
// if list is empty
// if node to be inserted at last position
// if node to be inserted at first position
//handle the error when position is invalid


#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};
struct node* head; //declaring head globally

void InsertAtPos(int value, int loc){
  // struct node* newNode=(struct node*) malloc(sizeof(struct node));    //in c we declare node as this
// node* newNode=new node();      //in C++ we declare node as this
struct node* newNode=(struct node*) malloc(sizeof(struct node));
newNode->data=value;
newNode->next=NULL;

  if(loc==1){      //insert at first position loc=1
  newNode->next=head;
  head=newNode;
  return;
  }
struct node* temp=head;
for(int i=1;i<=loc-2;i++){
  temp=temp->next;
}
  newNode->next=temp->next;
  temp->next=newNode;
}

void PrintList(){
struct node* temp=head;
while(temp!=NULL){
  printf("%d  ",temp->data);
  temp=temp->next;
}
  printf("\n");
}

int main(){
head=NULL;
InsertAtPos(22,1);
InsertAtPos(25,2);
InsertAtPos(27,3);
InsertAtPos(20,1);
InsertAtPos(30,5);
InsertAtPos(21,2);
PrintList();
}