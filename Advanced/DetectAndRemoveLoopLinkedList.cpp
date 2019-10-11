void removeLoop(node loopNode, node head)
{
    node ptr1 = loopNode;
    node ptr2 = loopNode;
    int looplen = 1;
     
    // count the number of nodes in loop
    while(ptr1->next != ptr2)
    {
        ptr1 = ptr1->next;
        looplen++;
    }
     
    ptr1 = head;
    ptr2 = head;
    for(i=0; i < looplen; i++)
    {
        ptr2 = ptr2->next;
    }
     
    while(ptr2->next != ptr1->next)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
     
    ptr2->next = NULL; // breaking the loop
}
