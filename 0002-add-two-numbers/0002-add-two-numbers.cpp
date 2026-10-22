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
        ListNode* temp= new ListNode();
        temp->val=0;
        temp->next=nullptr;
        ListNode* curr=temp;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry>0){
            int sum=carry;
            if(l1!=nullptr){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            ListNode* newNode= new ListNode();
            newNode->val=sum%10;
            newNode->next=nullptr;
            curr->next=newNode;
            curr=curr->next;

        }
        ListNode* result=temp->next;
        delete temp;
        return result;

    }
};           
