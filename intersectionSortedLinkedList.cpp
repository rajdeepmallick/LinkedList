/*This is a function problem.You only need to complete the function given below*/
/* The structure of the Linked list Node is as follows:
struct Node {
    int val;
    struct Node* next;
}; */




//my code
Node* pushnode(Node *head,int key){
    Node *temp=new Node;
    temp->val=key;
    temp->next=NULL;
    
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
void intersection(Node **head1, Node **head2,Node **head3){
    Node *p=*head1,*q=*head2;
    unordered_set<int>s;
    while(p!=NULL){
        if(s.find(p->val)==s.end())
            s.insert(p->val);
        p=p->next;    
    }
    while(q!=NULL){
        if(s.find(q->val)!=s.end())
            *head3=pushnode(*head3,q->val);
        q=q->next;    
    }
}


/*
//this is working
void intersection(Node **head1, Node **head2,Node **head3){
    Node *p=*head1,*q=*head2;
    while(p!=NULL && q!=NULL){
        if(p->val==q->val){
            *head3=pushnode(*head3,p->val);
            p=p->next;
            q=q->next;
        }
        else if(p->val<q->val)
            p=p->next;
        else if(p->val>q->val)
            q=q->next;
    }
}

*/
