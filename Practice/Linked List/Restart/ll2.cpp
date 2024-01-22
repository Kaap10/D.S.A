//DOuble Linked list ke bare mai ->
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->prev = NULL;
        this->next = NULL;
        this data = data;
    }
}

//Length of Linked list
void findLength(Node* head){
    Node* temp = head;
    int count = 0; //lenght find krne ke liye numbers chaiye toh count ko 0 se intiliaze krvaya, aage apne aap update 
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

//print DLL
printDLL(Node*head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << endl; //temp ke data ko print kiya or aggae badh jao
        temp = temp ->next;
    }
    cout << endl;
}

//Insert at head
// Firstly we will se the corner case, which comes out to be what if (head==NULL), and then we will make a newNode then we will attach head-> prev to newNode and newNode -> next to head, then at end head = newNode

void insertAtHead(Node* &prev, Node* &next, int data) {

    //corner case
    if(head==NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode = new Node(data);
        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }
}

//Insert at TAIL
// Firstly we will make a newNode, then newNode -> prev = Tail, tail->next = newNode, Tail = newNode

void insertAtTail(Node* prev, Node* next, int data) {
    //corner case
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode = new Node(data);
        NewNode -> prev = tail;
        tail -> next = newNode;
        tail = newNode;
    }
}

//Insert at any Position
void insertAtAnyPosition(Node* &head, Node* &tail, int data, int Position) {
    if(position==1) {
        insertAtHead(head, tail, data);
    }

    else if(position == (findLength(head)+1)) {
        insertAtTail(head, tail, data);
    }

    else {
        Node* newNode = new Node(data);
        Node* prevNode = NULL;
        Node* currNode = head;

        while(position!=1) {
            prevNode = currNode;
            currNode = currNode -> next;
            position--;
        }

        prevNode->next = newNode;
        newNode -> prev = prevNode;
        newNode -> next = currNode;
        currNode ->prev = newNode;
    }
}

