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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int topr=0, bottomr=m-1, leftc=0, rightc=n-1;
        while(head)
        {
            for(int col=leftc;col<=rightc&&head;col++)
            {
                ans[topr][col]=head->val;
                head=head->next;
            }
            topr++;
            for(int row=topr;row<=bottomr&&head;row++)
            {
                ans[row][rightc]=head->val;
                head=head->next;
            }
            rightc--;
            for(int col=rightc;col>=leftc&&head;col--)
            {
                ans[bottomr][col]=head->val;
                head=head->next;
            }
            bottomr--;
            for(int row=bottomr;row>=topr&&head;row--)
            {
                ans[row][leftc]=head->val;
                head=head->next;
            }
            leftc++;
        }
        return ans;
    }
};