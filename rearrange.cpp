/*This is a function problem.You only need to complete the function given below*/
/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.






//my code
Node* pushnode(Node *head,int x){
    Node *temp=new Node;
    temp->next=NULL;
    temp->data=x;
    
    if(head==NULL)
        head=temp;
    else{
        Node *p=head;
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;    
    } 
    return head;
}
Node* rearrangeEvenOdd(Node *head){
    if(head==NULL || head->next==NULL || head->next->next==NULL)
        return head;
    Node *p=head,*m=NULL;
    while(p!=NULL && p->next!=NULL){
        m=pushnode(m,p->data);
        p=p->next->next;
        if(p!=NULL && p->next==NULL)
            m=pushnode(m,p->data);
    }
    Node *q=head->next;
    while(q!=NULL && q->next!=NULL){
        m=pushnode(m,q->data);
        q=q->next->next;
        if(q!=NULL && q->next==NULL)
            m=pushnode(m,q->data);
    }
    return m;
}
