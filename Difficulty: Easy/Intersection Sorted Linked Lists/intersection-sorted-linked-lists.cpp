/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
         Node* a = head1;
    Node* b = head2;
    Node* result = NULL; // head of new list
    Node* tail = NULL;   // tail pointer for new list

    while (a != NULL && b != NULL) {
        if (a->data == b->data) {
            // Add new node to result list
            Node* newNode = new Node(a->data);
            if (result == NULL) {
                result = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
            a = a->next;
            b = b->next;
        }
        else if (a->data < b->data) {
            a = a->next;
        }
        else {
            b = b->next;
        }
    }

    return result;
    }
};