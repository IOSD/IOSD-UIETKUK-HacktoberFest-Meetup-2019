class Node:    
    def __init__(self,data):    
        self.data = data;    
        self.previous = None;    
        self.next = None;    
            
class SearchList:    
  
    def __init__(self):    
        self.head = None;    
        self.tail = None;    
            
       
    def addNode(self, data):    
       
        newNode = Node(data);    
            
       
        if(self.head == None):    
           
            self.head = self.tail = newNode;    
            
            self.head.previous = None;    
          
            self.tail.next = None;    
        else:    
          
            self.tail.next = newNode;    
             
            newNode.previous = self.tail;    
             
            self.tail = newNode;    
           
            self.tail.next = None;    
                
     
    def searchNode(self, value):    
        i = 1;    
        flag = False;    
        
        current = self.head;    
            
           
        if(self.head == None):    
            print("List is empty");    
            return;    
                
        while(current != None):    
          
            if(current.data == value):    
                flag = True;    
                break;    
            current = current.next;    
            i = i + 1;    
                
        if(flag):    
            print("Node is present in the list at the position : " + str(i));    
        else:    
            print("Node is not present in the list");    
            
dList = SearchList();    
  
dList.addNode(1);    
dList.addNode(5);    
dList.addNode(4);    
dList.addNode(2);    
dList.addNode(3);    
     
 
dList.searchNode(4);    
     
  
dList.searchNode(9);   
