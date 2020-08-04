public class PriorityQueue 
{
    //Private fields
    private Node m_head;
    private Node m_tail;
    private int m_size;
    
    
    //Constructor
    public PriorityQueue() 
    {
        m_head = null;
        m_tail = null;
        m_size = 0;
    }
    
    //Insertion
    void insert(int data, int priority) 
    {
        //Create node to insert
        Node prev = null, next = m_head;
        
        //Increment size
        ++m_size;
        
        //Traverse while priority is >= and next is not null
        while(next != null && next.priority() >= priority)
        {
            prev = next;
            next = next.next();
        }
        
        //Insert element
        Node tmp = new Node(data, priority, next);
        if(prev == null)
        {
            m_head = tmp;
        } 
        else 
        {
            prev.setNext(tmp);
        }
        if(next == null)
        {
            m_tail = tmp;
        }
    }
    
    //Display
    void display()
    {
        Node cur = m_head;
        System.out.print("(data, priority): ");
        while(cur != null) 
        {
            System.out.printf("(%d, %d), ", cur.data(), cur.priority());
            cur = cur.next();
        }
    }
    
    Node remove_maximum() 
    {
        Node val = m_head;
        if(val != null) {
            Node cur = m_head;
            m_head = m_head.next();
            cur = null;
            --m_size;
        }
        return val;
    }
    
    void increase(int data, int delta) 
    {
        Node prev = null, cur = m_head;
        
        //Search for node to increase priority
        while(cur != null && cur.data() != data) 
        {
            prev = cur;
            cur = cur.next();
        }
        
        //If not found then return
        if(cur == null)
        {
            return;
        }
        
        //If element may need repositioned
        if(prev != null)
        {
            prev.setNext(cur.next());//Remove current from queue
            this.insert(data, cur.priority() + delta);//Insert into queue again
            cur = null;
        } 
        else//Element at front, just add delta to priority
        {
            cur.setPriority(cur.priority() + delta);
        }
    }
    
    void decrease(int data, int delta) 
    {
        Node prev = null, cur = m_head;
        
        //Search for node to decrease priority
        while(cur != null && cur.data() != data) 
        {
            prev = cur;
            cur = cur.next();
        }
        
        //If not found then return
        if(cur == null)
        {
            return;
        }
        
        //If element may need repositioned
        if(prev != null)
        {
            prev.setNext(cur.next());//Remove current from queue
            this.insert(data, cur.priority() - delta);//Insert into queue again
        } 
        else//Element at front, shift head, and re-add element with new priority
        {
            m_head = m_head.next();
            this.insert(data, cur.priority() - delta);
        }
        cur = null;
    }
    
    
    //Private inner class for nodes in queue
    public class Node 
    {
        //Private fields
        private Node m_next;
        private int m_data;
        private int m_priority;
        
        //Constructors
        public Node() 
        {
            m_next = null;
            m_data = -1;
            m_priority = -1;
        }
        
        public Node(int data, int priority) 
        {
            m_next = null;
            m_data = data;
            m_priority = priority;
        }
        
        public Node(int data, int priority, Node next) 
        {
            m_next = next;
            m_data = data;
            m_priority = priority;
        }
        
        //Getters
        int data() 
        {
            return m_data;
        }
        
        int priority() 
        {
            return m_priority;
        }
        
        Node next() 
        {
            return m_next;
        }
        
        //Setters
        void setData(int data) 
        {
            m_data = data;
        }
        
        void setPriority(int priority) 
        {
            m_priority = priority;
        }
        
        void setNext(Node next) 
        {
            m_next = next;
        }
    }
}
