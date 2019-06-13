/*This is a function problem.You only need to complete the function given below*/
/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/




//my code
void pairWiseSwap(struct node *head){
    node *p=head,*q;
    while(p!=NULL && p->next!=NULL){
        q=p;
        swap(q->data,q->next->data);
        p=p->next->next;
    }
}
