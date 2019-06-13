/*This is a function problem.You only need to complete the function given below*/
 
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists

Node *createList(Node *head,int key){
    Node *temp=new Node(key);
    if(head==NULL)
        head=temp;
    else{
        Node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    } 
    return head;
}

Node* sortedMerge(Node* head1,   Node* head2){
    Node *p=head1,*q=head2;
    Node *h=NULL;
    while(p!=NULL && q!=NULL){
        if((p->data)<=(q->data)){
            h=createList(h,p->data);
            p=p->next;
        }
        else{
            h=createList(h,q->data);
            q=q->next;
        }
    }
    while(p!=NULL){
        h=createList(h,p->data);
        p=p->next;
    }
    while(q!=NULL){
        h=createList(h,q->data);
        q=q->next;
    }
    return h;
}
