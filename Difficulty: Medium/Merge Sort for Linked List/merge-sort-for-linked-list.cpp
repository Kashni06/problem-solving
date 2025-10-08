/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
 // Function to merge two sorted linked lists
    Node* merge(Node* left, Node* right) {
        if (!left) return right;
        if (!right) return left;
        
        Node* result = nullptr;
        
        if (left->data <= right->data) {
            result = left;
            result->next = merge(left->next, right);
        } else {
            result = right;
            result->next = merge(left, right->next);
        }
        return result;
    }

    // Function to find the middle node of the linked list
    Node* getMiddle(Node* head) {
        if (!head) return head;
        Node* slow = head;
        Node* fast = head->next;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Main mergeSort function
    Node* mergeSort(Node* head) {
        // Base case: if list is empty or has one element
        if (!head || !head->next)
            return head;
        
        // Find the middle of the linked list
        Node* middle = getMiddle(head);
        Node* nextToMiddle = middle->next;
        
        // Split the list into two halves
        middle->next = nullptr;
        
        // Recursively sort both halves
        Node* left = mergeSort(head);
        Node* right = mergeSort(nextToMiddle);
        
        // Merge the two sorted halves
        Node* sortedList = merge(left, right);
        return sortedList;
    }
};