class MyCircularDeque {
public:
class node{
    public:
    int val;
    node*next;
    node*prev;
    node(int x){
        val=x;
        next=NULL;
        prev=NULL;
    }
};
 node*front=nullptr;
 node*back=nullptr;
 int size=0;
 int capacity=0;
    MyCircularDeque(int k) {
        capacity=k;
    }
    bool insertFront(int value) {
        if(size==0){
            node*newnode=new node(value);
            front=newnode;
            newnode->next=front;
            back=front;
            newnode->prev=back;
            size++;
            return true;
        }
        if(size!=0&&size<capacity){
            node*newnode=new node(value);
            newnode->prev=back;
            back->next=newnode;
            front->prev=newnode;
            newnode->next=front;
            front=newnode;
            size++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(size==0){
            node*newnode=new node(value);
            front=newnode;
            back=newnode;
            newnode->next=front;
            newnode->prev=back;
            size++;
            return true;
        }
        if(size!=0&&size<capacity){
            node*newnode=new node(value);
            front->prev=newnode;
            newnode->next=front;
            back->next=newnode;
            newnode->prev=back;
            back=newnode;
            size++;
            return true;
        }
        return false;
    }
    bool deleteFront() {
        if(size==0){
            return false;
        }
        if(size==1){
            front=back=NULL;
            size--;
        }
        else{
            front=front->next;
            front->prev=back;
            back->next=front;
            size--;
        }
        return true;
    }
    
    bool deleteLast() {
        if(size==0){
            return false;
        }
        if(size==1){
            front=back=NULL;
            size--;
        }
        else{
            back=back->prev;
            back->next=front;
            front->prev=back;
            size--;
        }
        return true;
    }
    
    int getFront() {
        if(size!=0)
        return front->val;
        else
        return -1;
    }
    
    int getRear() {
         if(size!=0)
        return back->val;
        else
        return -1;
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(size==capacity){
            return true;
        } 
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */