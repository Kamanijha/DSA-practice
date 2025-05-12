#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main()
{
    // this is statics linked list create
    // Node a1;
    // a1.data = 4;
    // a1.next = nullptr;

    // Node a2;
    // a2.data = 6;
    // a2.next = nullptr;

    // Node a3;
    // a3.data = 9;
    // a3.next = nullptr;
    // // link of a1 and a2
    // a1.next = &a2;
    // a2.next = &a3;

    // cout << a1.data << " " << a1.next << endl;
    // cout << a2.data << " " << a2.next << endl;
    // cout << a3.data << " " << a3.next << endl;
 

 // this dynamic created linkked list
  // but adding value mannualy  we can do the same workk usinf constructer
    // Node * head;
    // head = new Node();
    // head->data = 4;
    // head->next = NULL;

    // Node * second;
    // second = new Node();
    // second->data = 8;
    // second->next = NULL;
    // head->next = second;

    // Node * third;
    // third = new Node();
    // third->data = 10;
    // third->next = NULL;
    // second->next = third;

    // cout << head->data <<" " << head->next << endl;
    // cout << second->data <<" " << second->next << endl;
    // cout << third->data <<" " << third->next << endl;

   // print the list of element
    // Node* temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;
   

   // 1.write in this way 
//    Node* head;
//     head = new Node(4);
//     cout << head-> data;
   
   // 2. also write in this way
   Node* head = new Node(4);
   Node* second = new Node(6);
   Node* third = new Node(9);

   // connect node
   head->next = second;
   second->next = third;

   Node* temp = head;
   while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
   }

    return 0;
    
}