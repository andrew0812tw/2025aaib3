// week14-4.cpp 學習計畫 Linked List 最後一題 第四題(要結合第二題,第三題)
// Leetcode 445. Add Two Numbers II
class Solution {
public:
    // 今天的 week14-2.cpp 就是以下的幾行
    ListNode* myreverse(ListNode* head) {
        if (head == 0 || head->next == 0) return head;
        ListNode* ans = myreverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myreverse(l1); //反過來
        ListNode* list2 = myreverse(l2); //反過來
        return myreverse(myAddTwoNumbers(list1, list2));
    }

    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;

        while (list1 != nullptr || list2 != nullptr) {

            int now = carry;

            if (list1 != nullptr) {
                now += list1->val;
                list1 = list1->next;
            }

            if (list2 != nullptr) {
                now += list2->val;
                list2 = list2->next;
            }

            ans2->next = new ListNode(now % 10);
            ans2 = ans2->next;
            carry = now / 10;
        }

        if (carry > 0)
            ans2->next = new ListNode(carry);

        return ans->next;
    }
};
