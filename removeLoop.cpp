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
/*The function removes the loop from the linked list if present
You are required to complete this method*/






//no accepted
void removeTheLoop(Node *head){
    Node *f=head,*s=head;
    while(s!=NULL && f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f)
            break;
    }
    if(f==NULL || f->next==NULL)
        return;
    //Node *prev;
    while(s->next!=f){
        //prev=s;
        s=s->next;
    }
    s->next=NULL;
}
