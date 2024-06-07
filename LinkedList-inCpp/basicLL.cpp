#include<bits/stdc++.h>
using namespace std;

//structure of linked list

struct node{
  int data;  //4
  struct node *next; //4
};

struct node *head=NULL;

void insert(int data){
  struct node *newNode =(struct node*) malloc(sizeof(struct node)); //8
  newNode->data=data;
  newNode->next=head;
  head=newNode;
}

void display(){
  struct node *ptr;
  ptr=head;
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
}
int main(){
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  cout<<"Linked List is "<<endl;
  display();
  return 0;
}
