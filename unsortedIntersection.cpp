/*This is a function problem.You only need to complete the function given below*/
/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/



//my code
node *pushnode(node *head,int x){
    node *temp=new node;
    temp->next=NULL;
    temp->data=x;
    
    if(head==NULL)
        head=temp;
    else{
        node *p=head;
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;    
    }    
    return head;
}

node *middle(node *head){
    node *p=head,*q=head,*prev=NULL;
    while(q!=NULL && q->next!=NULL){
        prev=p;
        p=p->next;
        q=q->next->next;
    }
    prev->next=NULL;
    return p;
}

node *merge(node *p,node *q){
    node *h1=p,*h2=q,*m=NULL;
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

node *mergeSort(node *head){
    if(head==NULL || head->next==NULL)
        return head;
    
    node *first=head;
    node *second=middle(head);
    
    first=mergeSort(first);
    second=mergeSort(second);
    node *mergeNode=merge(first,second);
    return mergeNode;
}

struct node* findIntersection(struct node* head1, struct node* head2){
    head1=mergeSort(head1);
    head2=mergeSort(head2);
    unordered_set<int>s;
    unordered_set<int>dup;
    node *p=head1,*q=head2;
    
    while(p!=NULL){
        s.insert(p->data);
        p=p->next;
    }
    while(q!=NULL){
        if(s.find(q->data)!=s.end())
            dup.insert(q->data);
        q=q->next;    
    }
    p=head1;q=head2;
    node *result=NULL;
    
    while(p!=NULL && q!=NULL){
        if(p->data < q->data){
            if(dup.find(p->data)!=dup.end()){
                result=pushnode(result,p->data);
                dup.erase(p->data);
            }    
            p=p->next;
        }
        else{
            if(dup.find(q->data)!=dup.end()){
                result=pushnode(result,q->data);
                dup.erase(q->data);
            }    
            q=q->next;
        }
    }
    
    while(p!=NULL){
        if(dup.find(p->data)!=dup.end()){
            result=pushnode(result,p->data);
            dup.erase(p->data);
        }    
        p=p->next;
    }
    
    while(q!=NULL){
        if(dup.find(q->data)!=dup.end()){
            result=pushnode(result,q->data);
            dup.erase(q->data);
        }    
        q=q->next;
    }
    return result;
}
