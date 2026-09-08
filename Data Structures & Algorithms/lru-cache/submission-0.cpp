class LRUCache {
private:
struct Node{
    int key, val;
    Node* prev;
    Node* next;
    Node(int k, int v) : key(k), val(v), prev(NULL), next(NULL) {}
};

int capacity;

unordered_map<int, Node*> m;


public:

Node* head;
Node* tail;

void insertToFront(Node* node){
    node->next = head->next;
    node->prev = head;

    head->next = node;
    node->next->prev = node;
}

void removeNode(Node* node){
    Node* nodeprev = node->prev;
    Node* nodenext = node->next;

    nodeprev->next = nodenext;
    nodenext->prev = nodeprev;
}


        LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(0, 0);
        tail = new Node(0,0);

        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(m.find(key) == m.end()) return -1;
        else{
            Node* getval = m[key];

            removeNode(getval);
            insertToFront(getval);

            return getval->val;
        }
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node* newNode = m[key];
            newNode->val = value;

            removeNode(newNode);
            insertToFront(newNode);
        }
        else {
            if(m.size() == capacity){
                Node* rem = tail->prev;
                removeNode(rem);
                m.erase(rem->key);
                delete(rem);
            }
            Node* newNode = new Node(key, value);
            m[key] = newNode;
            insertToFront(newNode);
        }
        
    }
};
