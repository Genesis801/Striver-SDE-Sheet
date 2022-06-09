#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return true;
    stack<int> s;
    LinkedListNode<int> *fast=head;
    LinkedListNode<int> *slow=head;
    
    while(fast != NULL){
        if(fast->next==NULL){
            slow=slow->next;
            break;
        }
        fast=fast->next->next;
        s.push(slow->data);
        slow=slow->next;
    }
    while(slow!=NULL){
        if(slow->data == s.top()){
            s.pop();
            slow=slow->next;
        }
        else
            return false;
    }
    return true;
}
