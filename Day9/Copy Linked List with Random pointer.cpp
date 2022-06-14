#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int> *temp = head;
    LinkedListNode<int> *front = head;
    while(temp != NULL){
        front = temp->next;
        LinkedListNode<int> *node = new LinkedListNode<int>(temp->data);
        temp->next = node;
        node->next = front;
        temp=front;
    }
    temp = head;
    while(temp != NULL){
        temp->next->random = temp->random;
        temp=temp->next->next;
    }
    temp=head;
    LinkedListNode<int> *newhead= new LinkedListNode<int>(0);
    LinkedListNode<int> *copy=newhead;
    while(temp!=NULL)
    {
         front=temp->next->next;
         copy->next=temp->next;
         temp->next=front;
         copy=copy->next;
         temp=front;
     }       
     return newhead->next; 
}
