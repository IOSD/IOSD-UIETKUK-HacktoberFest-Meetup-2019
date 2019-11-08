#Detect and break the loop in Linked List
class ListNode:
    
    def __init__(self, data):
        self.data = data 
        self.next = None
        
class LinkedList:
    
    def __init__(self): 
        self.head = None
        
    def detectLoop(self): 
        slow_p = fast_p = self.head 
        
        while(slow_p and fast_p and fast_p.next):
            slow_p = slow_p.next
            fast_p = fast_p.next.next
            
            if slow_p == fast_p: 
                self.removeLoop(slow_p) 
                return 1
        return 0
    
    def removeLoop(self, loop_node): 
        ptr1 = loop_node 
        ptr2 = loop_node 
        k = 1
        
        while(ptr1.next != ptr2): 
            ptr1 = ptr1.next
            k += 1
            
        ptr1 = self.head 
        ptr2 = self.head 
        
        for i in range(k):
            ptr2 = ptr2.next
            
        while(ptr2 != ptr1):
            ptr1 = ptr1.next
            ptr2 = ptr2.next
            
        while(ptr2.next != ptr1):
            ptr2 = ptr2.next
            
        ptr2.next = None
        
    def push(self, new_data): 
        new_node = ListNode(new_data)
        new_node.next = self.head 
        self.head = new_node 
        
    def finalList(self): 
        temp = self.head 
        while(temp):
            print (temp.data)
            temp = temp.next
            
            
Nlist = LinkedList() 
Nlist.push(10) 
Nlist.push(4) 
Nlist.push(15) 
Nlist.push(20) 
Nlist.push(50)

Nlist.head.next.next.next.next.next = Nlist.head.next.next

Nlist.detectLoop() 

print ("Linked List after removing loop")
Nlist.finalList()  
    
