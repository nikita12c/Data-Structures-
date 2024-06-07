// By declaring head as global var
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
struct node* head; //we declare head globally

void InsertAtBeginning(int x){
struct node* newNode=(struct node*) malloc(sizeof(struct node));
newNode->data=x;
newNode->next=head;
head=newNode;
}
void PrintList(){
  struct node* temp=head;
  printf("The elements in the linked list are ");
  while(temp != NULL){
    printf(" %d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main(){
head = NULL;//empty list
printf("How many nos. u want to insert\n");
int n,x;
scanf("%d",&n);
for(int i=0;i<n;i++){
  printf("Enter the number\n");
  scanf(" %d",&x);
  InsertAtBeginning(x);
  PrintList();
}
}

//by declaring head as local var and use referencing
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
// int data;
// struct node *next;
// };

// void InsertAtBeginning(int x, struct node** pointeToHead){
// struct node* newNode=(struct node*) malloc(sizeof(struct node));
// newNode->data=x;
// newNode->next=*pointeToHead;
// *pointeToHead=newNode;
// }
// void PrintList(struct node** pointeToHead){
//   struct node* temp=*pointeToHead;
//   printf("The elements in the linked list are ");
//   while(temp != NULL){
//     printf(" %d",temp->data);
//     temp=temp->next;
//   }
//   printf("\n");
// }
// int main(){
// struct node* head=NULL; //we declare head locally
// printf("How many nos. u want to insert\n");
// int n,x;
// scanf("%d",&n);
// for(int i=0;i<n;i++){
//   printf("Enter the number\n");
//   scanf(" %d",&x);
//   InsertAtBeginning(x,&head);
//   PrintList(&head);
// }
// }