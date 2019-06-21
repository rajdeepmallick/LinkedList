/*This is a function problem.You only need to complete the function given below*/
/* Node structure
struct Node
{
    int data;
    Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.








//important
//my code
Node *rev(Node *head){
    Node *prev=NULL,*ptr=head,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
    }
    return prev;
}
Node *addOne(Node *head){
    head=rev(head);
    Node *p=head;
    int carry=1;
    while(p!=NULL){
        if(p->data==9){
            if(carry==1){
                p->data=0;
                carry=1;
            }
            else{
                carry=0;
            }
        }
        else{
            if(carry==1){
                (p->data)++;
                carry=0;
            }    
            else{
                carry=0;
            }    
        }
        p=p->next;
    }
    head=rev(head);
    return head;
}
