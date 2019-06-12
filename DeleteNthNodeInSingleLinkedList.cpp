/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x){
    Node *p=head;
    
    if(head==NULL)
        return head;
    else if(x==1){
        head=head->next;
        return head;
    }
    else{
        int c=2;
        while(p->next!=NULL){
            if(c==x){
                p->next=p->next->next;
                return head;
            }
            c++;
            p=p->next;
        }
        return head;
    }
}
