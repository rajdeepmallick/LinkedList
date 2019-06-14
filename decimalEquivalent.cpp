/*This is a function problem.You only need to complete the function given below*/
/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */
/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
}; */
// Should return decimal equivalent modulo 1000000007 of binary linked list 







//my code
long long unsigned int power(long long unsigned int n){
    long long unsigned int res=1,i;
    for(i=1;i<=n;i++){
        res=(res*2)%MOD;
    }
    return res;
}
Node *rev(Node *head){
    Node *prev=NULL,*ptr=head,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
    }
    return prev;
}
long long unsigned int decimalValue(Node *head){
    long long unsigned int sum=0,c=0;
    Node *p=rev(head);
    while(p!=NULL){
        sum=(sum+((p->data)*power(c)))%MOD;
        c++;
        p=p->next;
    }
    return sum;
}

