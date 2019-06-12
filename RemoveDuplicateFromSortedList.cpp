/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/
// root: head node





//my code
Node *removeDuplicates(Node *root)
{
    if(root==NULL || root->next==NULL)
        return root;
    
    int val=root->data,prevVal;prevVal=val;
    Node *p=root;
    
    while(p->next!=NULL){
        prevVal=val;
        if(val==(p->next->data)){
            p->next=p->next->next;
        }
        if(p->next!=NULL)
            val=p->next->data;
        if(prevVal!=val)    
            p=p->next;
    }
    return root;
}
//we should consider 1 1 1 1 1 2 2 2 2 2 3 3 3 3 4 4 4 4 this type of tast case
