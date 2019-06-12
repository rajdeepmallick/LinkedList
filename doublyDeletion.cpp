/*This is a function problem.You only need to complete the function given below*/
/*struct Node
{
  int data;
  Node *next;
  Node *prev;
};
 */
 
 



//my code
void deleteNode(Node **head_ref, int x){
    
    
    if(*head_ref==NULL){
        return;
    }
    
    else if(x==1){
        *head_ref=(*head_ref)->next;
        if(*head_ref!=NULL)
            (*head_ref)->prev=NULL;
        return;    
    }
    
    else{
        int c=2;
        Node *p=(*head_ref)->next;
        
        while(p->next!=NULL){
            if(c==x){
                p->prev->next=p->next;
                p->next->prev=p->prev;
                return;
            }
            c++;
            p=p->next;
        }
        
        if(c==x){
            p->prev->next=NULL;
            return;
        }
    }
}






//code has bug for deletion of last node

/*

void deleteNode(Node **head_ref, int x){
    
    
    if(*head_ref==NULL){
        return;
    }
    
    else if(x==1){
        *head_ref=(*head_ref)->next;
        if(*head_ref!=NULL)
            (*head_ref)->prev=NULL;
    }
    
    else{
        int c=2;
        Node *p=*head_ref;
        
        while(p->next!=NULL){
            if(c==x){
                p->next=p->next->next;
                if(p->next!=NULL){
                   p->next->prev=p;
                }   
            }
            c++;
            p=p->next;
        }
    }
}

*/
