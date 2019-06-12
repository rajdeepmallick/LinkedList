/*This is a function problem.You only need to complete the function given below*/
/*The structure of the node is
struct node
{
    int data;
    struct node *next;
};*/
int fractional_node(struct node *head, int k){
    node *p=head;
    int n=0;
    while(p!=NULL){
        n++;
        p=p->next;
    }
    p=head;
    n=ceil((float)n/k);
    while(n--){
        if(n==0)
            return (p->data);
        p=p->next;    
    }
}
