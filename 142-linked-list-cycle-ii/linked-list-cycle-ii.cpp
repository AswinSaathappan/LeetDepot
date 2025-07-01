class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle using slow and fast pointers
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // loop detected
                // Step 2: Move one pointer to head
                ListNode* start = head;
                while (start != slow) {
                    start = start->next;
                    slow = slow->next;
                }
                return start; // Found the starting point of the loop
            }
        }

        return NULL; // No loop
    }
};
