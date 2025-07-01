class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node to start our merged list
        ListNode* dummy = new ListNode(-1);

        // Tail always points to the last node in the merged list
        ListNode* tail = dummy;

        // While both lists have elements
        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                // Take node from list1
                tail->next = list1;
                list1 = list1->next;
            } else {
                // Take node from list2
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // Move tail forward
        }

        // If list1 is not finished, attach it
        if (list1 != NULL) {
            tail->next = list1;
        }

        // If list2 is not finished, attach it
        if (list2 != NULL) {
            tail->next = list2;
        }

        // Return the head of the merged list (skip dummy)
        return dummy->next;
    }
};
