#include <iostream>
#include <vector>
using namespace std;

// create linked list

struct Node {

    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node* next){
        data = data1;
        next = nullptr;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector <int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int checkIfPresent(Node* head, int val){
     Node* temp = head;
     while (temp)
     {
        if(temp->data == val) return 1;
        temp = temp->next;

     }
     return 0;
     
}

void print(Node* head){
    //Node* temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    
}

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}
int main(){
    vector <int> arr = {2,3,12,34,5};
    Node* head = convertArr2LL(arr);
    //cout << y->data;
    //cout << checkIfPresent(head,11);
    head = removeTail(head);
    print(head);
    return 0;
}