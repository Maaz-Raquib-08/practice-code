public class linkedlist3 {
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
    public void addfirst(int data){
        node newNode=new node(data);
        if(head==null){
            head=tail=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;


    }
    public void zigzag(){
        node slow=head;
        node fast=head.next;
        while(fast!=null&&fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;

        }
        node mid=slow;

        //reverse 2nd half
        node curr=mid.next;
        mid.next=null;
        node prev=null;
        node next;

        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        node left =head;
        node right=prev;
        node nextl, nextr;
        
        while(left!=null && right!=null){
            nextl=left.next;
            left.next=right;
            nextr=right.next;
            right.next=nextl;

            left=nextl;
            right=nextr;
        }

    }
    public void print() {
    node temp = head;
    while (temp != null) {
    System.out.print(temp.data + " -> ");
        temp = temp.next;
    }
        System.out.println("null");
    }
    public static void main(String[] args) {
        linkedlist3 ll=new linkedlist3();
        ll.addfirst(1);
        ll.addfirst(2);
        ll.addfirst(3);
        ll.print();
        ll.zigzag();
        ll.print();
    }
}
