class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        struct Node *temp=head;
        int m=M-1, n=N;
        while(temp!=NULL){
            while(m-- && temp->next)
                temp=temp->next;
            m=M-1;
            while(n-- && temp->next)
                temp->next=temp->next->next;
            n=N;
            temp=temp->next;
        }
    }
};