//take care of
//Fix the links
//Free the space
//case to handle when deleting node at 1st position (deleting first node)
//handle the error when position is invalid

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};
struct node* head; //declaring head globally

void InsertAtEnd(int value){
struct node* newNode=(struct node*) malloc(sizeof(struct node));
newNode->data=value;
newNode->next=NULL;
if(head==NULL){
  head=newNode;
  return;
}
struct node* temp=head;
while(temp->next!=0){
temp=temp->next;
}
temp->next=newNode;
}

void InsertAtBeg(int value)
{
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head;
    head = temp;
}

void DeleteAtLoc(int loc){
struct node* temp_prev=head;

//special case to delete head node
if(loc==1){
  head=temp_prev->next;   //now head points to second node
  free(temp_prev);
  return;
}
//handle all nth positions including deleting end node position
for(int i=1;i<=loc-2;i++){
temp_prev=temp_prev->next;
}
struct node* temp_next=temp_prev->next; //points to nth loc
temp_prev->next=temp_next->next;  //points to n-1 th loc
free(temp_next);      //in C++ we use delete temp_next;

}

void PrintList(){
  struct node* temp=head;
  printf("The elements in the linked list are ");
  int count=0;
  while(temp != NULL){
    printf(" %d",temp->data);
    temp=temp->next;
    count++;
  }
  printf("\n");
  printf("Total elements are %d \n",count);
}

int main(){
head=NULL;
InsertAtEnd(21); //insert node at end of the list
InsertAtEnd(22);
InsertAtEnd(23);
InsertAtEnd(24);
InsertAtEnd(25);
InsertAtEnd(26);

// InsertAtBeg(11); //insert node at begginning of the list
// InsertAtBeg(12);
// InsertAtBeg(13);
// InsertAtBeg(14);
// InsertAtBeg(15);

PrintList();
int loc;
printf("Want to delete node at which loc \n");
scanf("%d",&loc);
DeleteAtLoc(loc); //delete at location
PrintList();
}