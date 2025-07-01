class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Count total nodes
        int total = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            total++;
            temp = temp->next;
        }

        // Step 2: If head is to be removed
        if (n == total) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 3: Go to the (total - n - 1)th node (before the node to delete)
        temp = head;
        for (int i = 1; i < total - n; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the nth node from end
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
    }
};
