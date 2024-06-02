// // Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

// // #include<iostream>
// // using namespace std;

// // class Nodes
// // {
// //     public:
// //     int data;
// //     Nodes* next;
// // };




#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    while (head && head->next) {
        ListNode* first = head;
        ListNode* second = head->next;
        prev->next = second;
        first->next = second->next;
        second->next = first;
        prev = first;
        head = first->next;
    }
    return dummy->next;
}

void printList(ListNode *node) {
    while (node!= NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int a, b, c, d, e;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"Enter the number: "<<endl;
    cin>>b;
    cout<<"Enter the number: "<<endl;
    cin>>c;
    cout<<"Enter the number: "<<endl;
    cin>>d;
    cout<<"Enter the number: "<<endl;
    cin>>e;

    ListNode* head = new ListNode(a);
    head->next = new ListNode(b);
    head->next->next = new ListNode(c);
    head->next->next->next = new ListNode(d);
    head->next->next->next->next = new ListNode(e);

    cout << "Linked list before swapping: ";
    printList(head);

    head = swapPairs(head);

    cout << "Linked list after swapping: ";
    printList(head);

    return 0;
}
