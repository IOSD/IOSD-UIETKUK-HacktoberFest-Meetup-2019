class Node
{
	int data;
	Node next;
	Node(int d)
	{
		data = d;
		next = null;
	}
}

class Is_LinklIst_Circular
{
	Node head;
	void addToTheLast(Node node)
	{
		if(head == null)
		{
			head = node;
		}else
		{
			Node temp = head;
			while(temp.next != null)
			temp = temp.next;
		
			temp.next = node ;
		}
	}
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t>0)
		{
			int n = sc.nextInt();
			int l = sc.nextInt();
			Is_LinklIst_Circular list = new Is_LinklIst_Circular();
			int a1 = sc.nextInt();
			Node head = new Node(a1);
			list.addToTheLast(head);
			for(int i=1;i<n;i++)
			{
				int a = sc.nextInt();
				list.addToTheLast(new Node(a));
			}
			
			if(l==1 && n>=1)
			{
				Node temp = head;
				while(temp.next != null)
				{
					temp = temp.next; 
				}
				temp.next = head;
			}
			
			 CircularLL g = new  CircularLL();
			boolean b = g.isCircular(list.head);
			if(b==true)
			System.out.println(1);
			else 
			System.out.println(0);
		t--;
		}
	}
}

// } Driver Code Ends
/* Structure of LinkedList
class Node
{
	int data;
	Node next;
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class CircularLL
{
    boolean isCircular(Node head)
    {
	Node temp=head;
	
	while(temp.next!=null)
	{
	     if(temp.next==head)
	        return true;
	    
	    temp=temp.next;
	   
	}
	return false;
    }
}
