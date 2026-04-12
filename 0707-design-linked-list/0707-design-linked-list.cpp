class MyLinkedList {
    public:
     class node{
        public:
        int value;
        node*next;
         node(int value){
            this->value=value;
            this->next=NULL;
        }
    };
public:
   node*head=nullptr;
   node*tail=nullptr;
   int curr_size=0;   
   MyLinkedList() {

    }
    
    int get(int index) {
        if(index<0||index>=curr_size){
            return -1;
        }
        node*temp=head;
        int count=0;
        while(temp!=NULL&&count<index){
            temp=temp->next;
            count++;
        }
        return  temp->value;

    }
    
    void addAtHead(int val) {
        if(head==NULL&&tail==NULL){
            head=new node(val);
            tail=head;
        }
        else{
            node* newnode=new node(val);
            newnode->next=head;
            head=newnode;
        }
        curr_size++;
    }
    
    void addAtTail(int val) {
        if(tail==NULL){
            tail=new node(val);
            head=tail;
        }
        else{
            node* newnode=new node(val);
            tail->next=newnode;
            tail=newnode;
        }
        curr_size++;
    }
    
    void addAtIndex(int index, int val) {
      
        if(index>curr_size){
            return;
        }
        else if(index==0){
            addAtHead(val);
            return;
        }
        else if(index==curr_size){
            addAtTail(val);
            return ;
        }
        else{
            int count=0;
            node*temp=head;
            while(count!=index-1&&temp!=NULL){
                count++;
                temp=temp->next;
            }
            node*newnode=new node(val);
            newnode->next=temp->next;
            temp->next=newnode;
        }
         curr_size++;
        }
    
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= curr_size) return;

        if (index == 0) {
            node* temp = head;
            head = head->next;
            delete temp;

            if (curr_size == 1) {
                tail = NULL;
            }
        } else {
            node* temp = head;

            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }

            node* del = temp->next;
            temp->next = del->next;

            if (index == curr_size - 1) {
                tail = temp;
            }

            delete del;
        }

        curr_size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */