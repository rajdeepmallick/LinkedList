/*This is a function problem.You only need to complete the function given below*/
/* Linked list Node structure
struct Node
{
    char c;
    Node *next;
}; */
// Compare two strings represented as linked lists






//my code
int compare(Node *list1, Node *list2) {
    Node *p=list1,*q=list2;
    while(p!=NULL && q!=NULL){
        if(p->c > q->c){
            return 1;
        }
        else if(p->c < q->c){
            return -1;
        }
        p=p->next;
        q=q->next;
    }
    if(p==NULL && q==NULL)
        return 0;
    else if(p!=NULL && q==NULL)
        return 1;
    else if(p==NULL && q!=NULL)
        return -1;
}
