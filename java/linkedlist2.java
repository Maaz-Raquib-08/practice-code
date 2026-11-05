public class linkedlist2 {
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
    public void addFirst(int data){
        node newNode=new node(data);
        if(head==null){
            head=tail=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;


    }
    public node getmid(node head){
        node slow=head;
        node fast=head.next;
        while(fast!=null&&fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
    }
    return slow;
}
public node merge(node left,node right){
    node mergedll=new node(-1);
    node temp = mergedll;
    while(left!=null&& right!=null){
        if(left.data<=right.data){
            temp.next=left;
            left=left.next;
            temp=temp.next;
        }else{
            temp.next=right;
            right=right.next;
            temp=temp.next;
        }
    }
    while(left!=null){
        temp.next=left;
        left=left.next;
        temp=temp.next;
    }
    while(right!=null){
        temp.next=right;
        right=right.next;
        temp=temp.next;
    }
    return mergedll.next ;
}
    public node mergeSort(node head){
        if(head==null||head.next==null){
            return head;
        }
        node mid=getmid(head);
        node righthead=mid.next;
        mid.next=null;
        node left= mergeSort(head);
        node right=mergeSort(righthead);
        return merge(left,right);
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
        linkedlist2 list=new linkedlist2();
        list.addFirst(4);
        list.addFirst(6);
        list.addFirst(8);
        list.addFirst(7);
        list.print();
        list.head=list.mergeSort(list.head);
        list.print();
    }
}