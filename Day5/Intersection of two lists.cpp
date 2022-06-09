#include <bits/stdc++.h> 
/****************************************************************
 
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

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int len1=0,len2=0;
    Node *temp1=firstHead,*temp2=secondHead;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        len1++;
    }
    while(temp2!=NULL)
    {
        temp2=temp2->next;
        len2++;
    }
    int diff = max(len1,len2) - min(len1,len2);
    Node*t1,*t2;
    if(len1>=len2){
        t1 = firstHead;
        t2 = secondHead;
    }
    else{
        t2 = firstHead;
        t1 = secondHead;
    }
    while(diff>0){
        t1 = t1->next;
        diff--;
    }
    while(t1!=NULL && t2!=NULL){
        if(t1==t2)
            return t1->data;
        else{
            t1=t1->next;
            t2=t2->next;
        }
    }
    return -1;
}
