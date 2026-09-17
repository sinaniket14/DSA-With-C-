#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    Node(int val) {   // constructor
        data = val;
        next = NULL;
    }
};

int main() {
    Node* head = NULL;   // initially empty list
    Node* tail = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);  // create new node

        if (head == NULL) {
            head = newNode;   // first node
            tail = newNode;
        } else {
            tail->next = newNode;  // link at end
            tail = newNode;
        }
    }

    // Print linked list
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
