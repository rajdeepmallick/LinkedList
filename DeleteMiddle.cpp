/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
}; */
// Deletes middle of linked list and returns head of the modified list



//my code
Node* deleteMid(Node *head)
{
    
    if(head==NULL)
        return head;
    if(head->next==NULL){
        head==NULL;
        return head;
    }    
    Node *slow=head,*fast=head,*prev,*ptr=head;
    
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    while(ptr!=NULL){
        if(ptr==prev){
            ptr->next=ptr->next->next;
            return head;
        }
        ptr=ptr->next;
    }
    
    return head;
    
}
