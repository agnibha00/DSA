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
    int getSize(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a = getSize(head);
        int r = a - n;

        ListNode* p = head;
        ListNode* q = head;

        if (r == 0) {
            head = head->next;
            return head;
        }

        for (int i = 1; i < r; i++) {
            p = p->next;
        }
        q = p->next;
        p->next=q->next;
        delete q;

        

        return head;
    }
};
