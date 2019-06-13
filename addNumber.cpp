/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list






//wrong solution

Node *createList(Node *head,int key){
    Node *temp=new Node(key);
    if(head==NULL)
        head=temp;
    else{
        Node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    } 
    return head;
}

int pow(int p,int n){
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*p;
    return res;    
}

int getNumber(Node *head){
    if(head==NULL)
        return 0;
    Node *p=head;
    int num=0,count=0;
    while(p!=NULL){
        num=num+((p->data)*pow(10,count));
        count++;
        p=p->next;
    }
    return num;
}
Node* addTwoLists(Node* first, Node* second) {
    int sum=getNumber(first)+getNumber(second);
    Node *head=NULL;
    while(sum>0){
        head=createList(head,sum%10);
        sum=sum/10;
    }
    return head;
}
