/*This is a function problem.You only need to complete the function given below*/
/* a Node of the doubly linked list */
/*struct Node
{
  int data;
  Node *next;
  Node *prev;    
};*/




//my code
void reverse(Node **head_ref){
    Node *curr=*head_ref,*temp=NULL;
    
    if(*head_ref==NULL || (*head_ref)->next==NULL)
        return;
    
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    
    if(temp!=NULL)
        *head_ref=temp->prev;
    
}
