LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    if(head==NULL || K==0)
        return head;
    LinkedListNode<int> *temp = head;
    LinkedListNode<int> *slow = head;
    
    while(K>0 && temp!=NULL){
        temp=temp->next;
        K--;
    }
    if(temp==NULL)
    {
        if(head->next != NULL)
            return head->next;
        else
            return NULL;
    }
        
    while(temp->next != NULL){
        temp=temp->next;
        slow=slow->next;
    }
    slow->next = slow->next->next;
    return head;
    
}
