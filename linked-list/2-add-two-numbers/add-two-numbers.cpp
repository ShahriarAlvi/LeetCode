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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int d1, d2, sum, digit;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            d1 = (l1 != nullptr) ? l1->val : 0;
            d2 = (l2 != nullptr) ? l2->val : 0;

            sum = d1 + d2 + carry;
            digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};