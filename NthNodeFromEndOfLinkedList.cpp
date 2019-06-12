/*This is a function problem.You only need to complete the function given below*/
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
    Node *ptr=head,*prev=NULL,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
    }
    int c=1;
    Node *p=prev;
    while(p!=NULL){
        if(c==n){
            return (p->data);
        }
        p=p->next;
        c++;
    }
    return -1;
}
