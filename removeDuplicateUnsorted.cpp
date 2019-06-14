/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list







//my code
Node *removeDuplicates(Node *root){
    unordered_set<int>s;
    Node *curr=root,*prev=NULL;
    
    while(curr!=NULL){
        if(s.find(curr->data)!=s.end()){
            prev->next=curr->next;
            delete curr;
        }
        else{
            s.insert(curr->data);
            prev=curr;
        }
        curr=prev->next;
    }
    return root;
}
