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
        int carry=0, sum=0;
        int skip=0;
        ListNode* h1=l1, *h2=l2;
        while(h1!=NULL && h2!=NULL){
            sum = (h1->val +h2->val +carry)%10;
            cout<<sum<<" ";
            carry = (h1->val +h2->val +carry)/10;
            cout<<carry<<" ";
            h1->val = sum;
            h2=h2->next;
            if(h1->next==NULL){
                
                if(h2==NULL){
                skip=1;
                break;
                }
                h1->next=h2;
                h1=h1->next;
                break;
            }
            else{
                h1=h1->next;
            }
        }
        if(!skip){
            while(h1!=NULL){
                sum = (h1->val +carry)%10;
                carry = (h1->val +carry)/10;
                h1->val = sum;
                if(h1->next==NULL){
                    break;
                }
                h1=h1->next;
            }
        }
        // while(h2!=NULL){
        //     sum = (h2->val +carry)%10;
        //     carry = (h2->val +carry)/10;
        //     h2->val = sum;
        //     h2=h2->next;
        // }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            h1->next = temp;
        }
        return l1;
    }
};
