public class linkedlist {
    public static class node{
        int data;
        node next;

        public node(int data){
            this.data=data;
            this.next= null;
        }
    }
    public static node head;
    public static node tail;
    public static int size;

    public void addfirst(int data){
        node newnode =new node (data);
        size++;
        if(head==null){
            head=tail=newnode;
            return ;
        }
        newnode.next =head;
        head=newnode;   
    }

    public void addlast(int data){
        node newnode= new node(data);
        size++;
        if(head==null){
            head=tail=newnode;
        }
        tail.next=newnode;
        tail=newnode;
    }
    public void print(){
        if (head==null){
            System.out.println("ll is empty");
            return;
        }
        node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"-->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public void add(int idx,int data){
        if(idx==0){
            addfirst(data);
            return;
        }
        node newNode= new node (data);
        size++;
        node temp=head;
        int i=0;
    
    while(i<idx-1){
        temp=temp.next;
        i++;
    }
    newNode.next=temp.next;
    temp.next=newNode;
}
public int remove(){
    if(size==0){
        System.out.println("ll is empty");
        return Integer.MIN_VALUE;
    }else if(size==1){
        int val=head.data;
        head=tail=null;
        size=0;
        return val;
    }  
    int val=head.data;
    head=head.next;
    size--;
    return val;
}
public int removelast(){
    if(size==0){
        System.out.println("ll is empty");
        return Integer.MIN_VALUE;
    }else if(size==1){
        int val=head.data;
        head=tail=null;
        size=0;
        return val;
    }
    node prev=head;
    for(int i=0;i<size-2;i++){
        prev=prev.next; 
    } 
    int val=prev.next.data; 
    prev.next=null;
    tail=prev;
    size--;
    return val;
}
public int search(int key){
    node temp=head;
    int i=0;
    while(temp!=null){
        if(temp.data==key){
            return i;
        }
        temp=temp.next;
        i++;
    }
    return -1;
}
public int helper(node head,int key){
    if(head==null){
        return -1;
    }
    if(head.data==key){
        return 0;
    }
    int  idx=helper(head.next,key);
    if(idx==-1){
        return -1;
    }
    return idx+1;
}
public int recsearch(int key){
    return helper(head,key);
}
private node findmid(node head){
    node slow=head;
    node fast=head;
    while(fast!=null&& fast.next!=null){
        slow=slow.next;
        fast=fast.next.next;
    }
    return slow;
}
public boolean iscycle(){
    node slow=head;
    node fast=head;
    while(fast!=null && fast.next!=null){
        slow=slow.next;
        fast=fast.next.next;
        if(slow==fast){
            return true;
        }
    }    
    return false;
}
public static void removecycle(){
    node slow=head;
    node fast=head;
    boolean cycle=false;
    while(fast!=null && fast.next!=null){
        slow=slow.next;
        fast=fast.next.next;
        if(slow==fast){
            cycle=true;
            break;
        }
    }    
    if(cycle==false){
        return ;
    }
    slow=head;
    node prev=null;
    while(slow!=fast){
        prev=fast;
        slow=slow.next;
        fast=fast.next;

    }
    prev.next=null;
}
    public static void main(String[] args) {
        linkedlist ll=new linkedlist();
        ll.addfirst(2);
        ll.addfirst(1);
        ll.addlast(4);
        ll.addlast(5);
        ll.add(2,3);
            
        ll.print();
        System.out.println(ll.size);
        ll.remove();
        ll.print();
        System.out.println(ll.size);
        ll.removelast();
        ll.print();
        System.out.println(ll.size);
        System.out.println(ll.recsearch(3));
        System.out.println(ll.search(10));
    }
}