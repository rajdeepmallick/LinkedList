/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// function should insert node at the middle
// of the linked list





//my code
Node* insertInMiddle(Node* head, int x){
    Node *p=head,*q=head,*r;
    
    while(q!=NULL && q->next!=NULL){
        r=p;
        p=p->next;
        q=q->next->next;
    }
    
    
    Node *temp=new Node(x);
    
    if(q==NULL){
        temp->next=r->next;
        r->next=temp;
        return head;
    }
    if(q->next==NULL){
        temp->next=p->next;
        p->next=temp;
        return head;
    }
}
