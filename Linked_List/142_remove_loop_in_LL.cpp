void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    {
    if(!head) return;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow )
    {
        if( !fast || !fast->next ) return;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    int size = 1;
    fast = fast->next;
    while( fast != slow )
    {
        size++;
        fast = fast->next;
    }
    
    slow = head;
    fast = head;
    for(int i=0; i<size-1; i++)
        fast = fast->next;
    
    while( fast->next != slow )
    {
        fast = fast->next;
        slow = slow->next;
    }
    fast->next = NULL;
}
}
