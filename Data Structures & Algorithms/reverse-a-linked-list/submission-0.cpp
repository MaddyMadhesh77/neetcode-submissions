class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        ListNode* nextNode = nullptr;
        
        while (currNode != nullptr) {
            nextNode = currNode->next;  
            currNode->next = prevNode;  
            prevNode = currNode;        
            currNode = nextNode;        
        }
        return prevNode;
    }
};