/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
    
    
    
    
    
    
//my code    
Node* rotate(Node* head, int k) {
    if(head==NULL || head->next==NULL)
        return head;
    int count=1;
    Node *p=head;
    while(count<k && p!=NULL){
        count++;
        p=p->next;
    }
    if(p==NULL)
        return head;
    Node *kth=p;
    
    while(p->next!=NULL)
        p=p->next;
    
    p->next=head;
    head=kth->next;
    kth->next=NULL;
    return head;
}

