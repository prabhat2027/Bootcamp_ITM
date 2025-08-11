#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){      // creating a constructor.
        data = data1;
        next = next1;
    }

    public:                            // creating another constructor.
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// Creating a function for converting array elements into Linked list.
/* 
=> NOTE: time complexcity for converting array to LL is "O(N)".
 */ 


Node* conArr2LL(vector<int> arr){           
    Node* head = new Node(arr[0]);      // head: 1st node 
    Node* mover = head;                 // mover: a type of variable

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);  // temp: another var. used for making new node and adding them to LL

        mover->next = temp;
        mover = temp;
    }
    return head;                       // returning only the 1st node.
}


int main(){
    vector<int> arr = {10,2,3,4,5};

    Node* head = conArr2LL(arr);
    // cout<<head->data<<endl;

// ****** LL traversal ******

    Node*temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

//  ******** finding middle element ********

    temp = head;
    int n = 0;
    while(temp) {
        n++;
        temp = temp->next;
    }
    n = n/2; int cnt = 0;  
    temp = head;
    while(cnt != n) {
        temp = temp->next;
        cnt++;
    }
    cout<<temp->data;

    
    return 0;
}
