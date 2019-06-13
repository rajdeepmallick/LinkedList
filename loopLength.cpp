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
// Your task is to complete the function this function
// function should return the size of the loop





//my code
int countNodesinLoop(struct Node *head){
    Node *f=head,*s=head;
    while(s!=NULL && f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f)
            break;
    }
    if(s==NULL)
        return 0;
    int c=1;
    Node *p=f;
    while(p->next!=f){
        c++;
        p=p->next;
    }
    return c;
}
