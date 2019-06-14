/*This is a function problem.You only need to complete the function given below*/
/* Linked list node structure
struct Node
{
    int data;
    Node* next;
};*/
/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/
/*You are required to complete this method*/





//my code

long long  pow(long long  n){
    long long  res=1,i;
    for(i=1;i<=n;i++){
        res=(res*10)%1000000007;
    }
    return res;
}

Node* rev(Node *head){
    Node *prev=NULL,*ptr=head,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
    }
    return prev;
}

long long getNum(Node *head){
    head=rev(head);
    Node *p=head;
    long long num=0,power,c=0;
    while(p!=NULL){
        power=pow(c)%1000000007;
        num=(num+(p->data)*power)%1000000007;
        p=p->next;
        c++;
    }
    return num;
}


long long  multiplyTwoLists (Node* l1, Node* l2){
    long long result=(getNum(l1)*getNum(l2))%1000000007;
    return result;
}
