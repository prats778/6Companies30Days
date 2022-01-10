class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        Node* curr=head;
        while(curr){
            for(int i=1;curr!=NULL && i<M;i++)
                curr=curr->next;
            if(!curr)
               return;
            Node* t=curr->next;
            for(int i=0;t!=NULL && i<N;i++)
                {
                    Node *temp=t;
                    t=t->next;
                    free(temp);
                }
            if(t)
                curr->next=t;
            else
                curr->next=NULL;
            curr=t;  
            // curr=curr->next;
        }
    }
};