#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
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

void printAll(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    //    // insertion of element in front  uotput = 34 28 4
    //    Node* head = new Node(4);
    //     Node* second = new Node(28);
    //     second->next = head;
    //     Node* third = new Node(34);
    //      third->next = second;
    //     head = third;
    //     cout << head->data << " ";
    //     cout << head->next->data << " ";
    //     cout << head->next->next->data << " ";


    // convert array to linkked list
     vector <int> arr = {2,3,4,5,6};
     Node* head = convertArr2LL(arr);
     printAll(head);
    return 0;
}