/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/









//my code
Node *pushnode(Node *head,int x){
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
struct Node * mergeResult(Node *node1,Node *node2){
    node1=rev(node1);
    node2=rev(node2);
    Node *p=node1,*q=node2,*head=NULL;
    
    while(p!=NULL && q!=NULL){
        if((p->data)>(q->data)){
            head=pushnode(head,(p->data));
            p=p->next;
        }
        else{
            head=pushnode(head,(q->data));
            q=q->next;
        }
    }
    while(p!=NULL){
        head=pushnode(head,(p->data));
        p=p->next;
    }
    while(q!=NULL){
        head=pushnode(head,(q->data));
        q=q->next;
    }
    return head;
}

