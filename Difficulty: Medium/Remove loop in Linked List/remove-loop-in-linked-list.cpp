/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        if (head == nullptr) return;

        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        if (!hasCycle) return;

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        Node* start = slow;
        Node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }

        temp->next = nullptr;
    
    }
};