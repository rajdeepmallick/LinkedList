/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/








//my code
int detectloop(Node *head) {
    Node *s=head,*f=head;
    
    while(s!=NULL && f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f)
            return 1;
    }
    return 0;
}


/*

int detectloop(Node *head) {
    unordered_set<Node*>s;
    Node *p=head;
    while(p!=NULL){
        if(s.find(p)!=s.end())
            return 1;
        s.insert(p);
        p=p->next;
    }
    return 0;
}

*/




//https://ide.geeksforgeeks.org/6jlMu8CiPM
//True
//False
