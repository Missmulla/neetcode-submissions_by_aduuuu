class Node{
public:
int data;
Node* next;

Node(int val){
    data = val;
    next = nullptr;
}
};

class LinkedList {
public:
Node* head;

    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* curr = head;
        int idx = 0;

        while(curr){
            if(idx == index) return curr->data;
            curr = curr->next;
            idx++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    
    void insertTail(int val) {
        Node* newNode = new Node(val);

        if(!head){
            head = newNode;
            return;
        }

        Node* curr = head;

        while(curr->next){
            curr = curr->next;
        }
        curr->next = newNode;
    }

    bool remove(int index) {
        if(index < 0 || head == nullptr) return false;

        if(index == 0){
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
        }

        Node* prev = head;
        for(int j = 0; j < index - 1; ++j){
            if (!prev || !prev->next) return false;
            prev = prev->next;
        }

        if (!prev->next) return false;
        Node* todel = prev->next;
        prev->next = todel->next;

        delete todel;
        return true;
  
    }

    vector<int> getValues() {
        vector<int>result;
        Node* curr = head;

        while(curr){
            result.push_back(curr->data);
            curr = curr->next;
        }
        return result;  
    }
};
