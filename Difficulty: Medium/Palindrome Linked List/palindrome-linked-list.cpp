class Solution {
  public:
  Node* reverseLinkedList(Node *head){
      if(head == NULL || head->next == NULL) return head;
      Node* newHead = reverseLinkedList(head->next);
      Node* front = head->next;
      front->next = head;
      head->next = NULL;
      return newHead;
  }

  bool isPalindrome(Node *head) {
      if(head == NULL || head->next == NULL) return true;

      // Step 1: Find middle
      Node* slow = head;
      Node* fast = head;
      while(fast->next != NULL && fast->next->next != NULL){
          slow = slow->next;
          fast = fast->next->next;
      }

      // Step 2: Reverse second half
      Node* newHead = reverseLinkedList(slow->next);

      // Step 3: Compare both halves
      Node* first = head;
      Node* second = newHead;
      bool isPal = true;
      while(second != NULL){
          if(first->data != second->data){
              isPal = false;
              break;
          }
          first = first->next;
          second = second->next;
      }

      // Step 4: Restore the original list (optional)
      slow->next = reverseLinkedList(newHead);

      return isPal;
  }
};
