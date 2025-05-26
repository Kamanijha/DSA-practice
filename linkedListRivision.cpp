#include <iostream>
#include <vector>
using namespace std;

// this node of linked list
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int value){
        data = value;
        next = NULL;
    }

};

Node* insertElement(Node* head,int val){
    
    //Node* new_Node = new Node(val)
    if(head == NULL)
        return new Node(val);

    Node* temp = head;
    while(temp->next != NULL){
          temp = temp->next;
    } 

    Node* new_Node = new Node(val);
    temp->next = new_Node;
    return head;   
    
}

Node* insertAtFirst(Node* head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
    
}

// Node* insertInMiddle(Node* head,int x){
//     // 56 is inserting element in the array
//     Node* new_Node = new Node(56);
//     Node* temp = head;

//     while(temp->data != x){

//         temp = temp->next;

//     }
//     if(temp->data == x){
//         new_Node->next = temp->next;
//         temp->next = new_Node;
//     }
//     return head;
// }

Node* insertInMiddle(Node* head,int x){
    // 56 is inserting element in the array
    Node* new_Node = new Node(x);
    Node* temp = head;

    if(head == NULL){
        return new_Node;
    }

   int cnt = 0;
    while(temp != NULL){
        cnt ++;
        temp = temp->next;

    }

    int mid = cnt/2;
    temp = head;
    for(int i = 1;i<mid;i++){
        temp = temp->next;
    }
    
        new_Node->next = temp->next;
        temp->next = new_Node;
    
    return head;
}
// array to linked list convert function
// Node*  arrToLinkedList(vector <int>& arr){
//    Node* head = new Node(arr[0]);
//    Node* temp = head;
//    for(int i = 1;i<=arr.size();i++){
//     temp->next = new Node(arr[i]);
//     temp = temp->next;
//    }
//    return head;
// }

//print function
// void print(Node* head){
//     Node* temp = head;
//     while(temp->next != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

void printLL(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
   
     vector<int> arr= {22,5,8,7,3};
    //  int val = 100;

    //  Node* head = new Node(arr[0]);
    //  head->next = new Node(arr[1]);
    //  head->next->next = new Node(arr[2]);
    //  head->next->next->next = new Node(arr[3]);
    //  head->next->next->next->next = new Node(arr[4]);

    //  //insertElement(head,val);
    // head =  insertAtFirst(head,val);

    //  printLL(head);

    
    Node* head = new Node(arr[0]);
     head->next = new Node(arr[1]);
     head->next->next = new Node(arr[2]);
     head->next->next->next = new Node(arr[3]);
     head->next->next->next->next = new Node(arr[4]);
     head = insertInMiddle(head,45);
     printLL(head);
    return 0;
}