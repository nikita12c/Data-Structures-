// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* res = new ListNode(0);
        ListNode* curr = res;
        int c = 0;
        while(l1 || l2 || c)
        {
            if(l1 != NULL)
            {
                c += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                c += l2->val;
                l2 = l2->next;
            }
            curr->next = new ListNode(c%10);
            c /= 10;
            curr = curr->next;
        }
        return res->next;
    }
};