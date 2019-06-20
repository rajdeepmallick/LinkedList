/*This is a function problem.You only need to complete the function given below*/
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */
/*Your method shouldn't print anything
 it should transform the passed linked list */
 
 

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

Node* middle(Node *head){
    Node *p=head,*q=head,*prev=NULL;
    while(q!=NULL && q->next!=NULL){
        prev=p;
        p=p->next;
        q=q->next->next;
    }
    prev->next=NULL;
    return p;
}

Node* merge(Node *p,Node *q){
    Node *h1=p,*h2=q,*m=NULL;
    while(h1!=NULL && h2!=NULL){
        if(h1->data < h2->data){
            m=pushnode(m,h1->data);
            h1=h1->next;
        }
        else{
            m=pushnode(m,h2->data);
            h2=h2->next;
        }
    }
    while(h1!=NULL){
        m=pushnode(m,h1->data);
        h1=h1->next;
    }
    while(h2!=NULL){
        m=pushnode(m,h2->data);
        h2=h2->next;
    }
    return m;
}

Node* mergeSort(Node *head){
    if(head==NULL || head->next==NULL)
        return head;
    Node *first=head,*second=middle(head),*mergeHead=NULL;
    first=mergeSort(first);
    second=mergeSort(second);
    mergeHead=merge(first,second);
    return mergeHead;
}
void sortList(Node** head)
{
    *head=mergeSort(*head);
}
