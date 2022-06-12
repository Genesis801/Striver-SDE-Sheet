#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    Node *fast=head;
    Node *slow=head;
    int n = 0;
    Node *temp=head;
    while(temp){
        temp=temp->next;
        n++;
    }
    k = k%n;
    if(k==0)
        return head;
    while(k>0){
        fast=fast->next;
        k--;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next=head;
    slow=slow->next;
    //Node *t=slow->next;
    while(fast->next!=slow){
        fast = fast->next;
    }
    fast->next = NULL;
    head = slow;
    return head;
}
