/*This is a function problem.You only need to complete the function given below*/
/* The structure of linked list is the following
struct Node
{
   int data;
   Node* next;
};   */
//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.





//my code
void splitList(Node *head, Node **head1_ref, Node **head2_ref){
    if(head==NULL)
        return;
    else if(head->next==head){
        *head1_ref=head;
        *head2_ref=NULL;
        return;
    }    
    else if(head->next->next==head){
        *head1_ref=head;
        *head2_ref=head->next;
        head->next=*head1_ref;
        (*head2_ref)->next=*head2_ref;
        return;
    }
    Node *p=head,*q=head,*prev1=NULL,*prev2=NULL;
    
    do{
        prev1=p;
        p=p->next;
        prev2=q;
        q=q->next->next;
    }while(q!=head && q!=head->next);
    
    // *head1_ref=head;
    // *head2_ref=p;
    // prev1->next=*head1_ref;
    // prev2->next=*head2_ref;
    
    
    //even no of nodes
    if(q==head){
        *head1_ref=head;
        *head2_ref=p;
        prev1->next=*head1_ref;
        prev2->next->next=*head2_ref;
        return;
    }
    //odd number of nodes
    else if(q==head->next){
        *head1_ref=head;
        *head2_ref=p;
        prev1->next=*head1_ref;
        prev2->next=*head2_ref;
        return;
    }
    
}
