/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> nodeMap;
        while(temp != NULL){
            if(nodeMap.find(temp) != nodeMap.end()){
                return true;
            }
            nodeMap[temp]++;
            temp = temp->next;
        }
        return false;
        
    }
};