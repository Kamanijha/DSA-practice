#include <iostream>
#include <vector>
using namespace std;

struct Node {
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
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

// print length of  given linked list

int lengthOfLL(Node* head){
    int cnt = 0;
     Node* temp = head;
    while (temp)
    {
        //cout << temp->data << " ";
        temp = temp->next;
        cnt ++;
    }
    return cnt;
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
int main(){
    vector<int> arr= {22,5,8,7,3,56,7};
    // Node* y = new Node(arr[0]);
    // cout << y->next;

    Node* head = convertArr2LL(arr);
    head = removeHead(head);
    print(head);
    //cout << checkIfPresent(head,15) << " ";
    //cout << head->data;
    // print all element of linked list
    // Node* temp = head;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;
    return 0;
}