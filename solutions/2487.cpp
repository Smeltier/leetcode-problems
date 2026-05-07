/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* removeNodes(ListNode* head) {
    if (!head) {
      return nullptr;
    }

    head = reverse(head);

    ListNode* current = head;
    while (current && current->next) {
      if (current->next->val < current->val) {
        current->next = current->next->next;
      }
      else {
        current = current->next;
      }
    }

    return reverse(head);
  }

  ListNode* reverse(ListNode* head) {
    ListNode* previous = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;

    while (current != nullptr) {
      next = current->next;
      current->next = previous;
      previous = current;
      current = next;
    }

    return previous;
  }
};
