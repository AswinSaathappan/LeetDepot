class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Edge case: empty or only one node
        if (head == NULL || head->next == NULL)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           // move 1 step
            fast = fast->next->next;     // move 2 steps

            if (slow == fast) {
                // If they meet, loop exists
                return true;
            }
        }

        // If fast reached end, no loop
        return false;
    }
};
