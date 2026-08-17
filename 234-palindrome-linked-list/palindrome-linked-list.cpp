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
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
// if the no of nodes are odd then move slow to one point 
// coz pallindrome ka middle element hai so common hai dont check
        if(fast != NULL && fast->next == NULL){
            slow = slow->next;
            }
// reverse ll from slow;
            ListNode*temp=slow;
            ListNode*prev=NULL;
            while(temp){
                ListNode*front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            }
            //prev is the head of new reversed half

            ListNode*second=prev;
            ListNode*first=head;
            while(second){
                if(second->val!=first->val){
                    return false;
                }
                second=second->next;
                first=first->next;
            }

return true;
        }
};