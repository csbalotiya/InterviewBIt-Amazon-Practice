//  https://www.interviewbit.com/problems/reorder-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    vector<int> V;
    ListNode* node = A;
    int i=0;
    while(node!=NULL)
    {
    V.push_back(node->val);
    node = node->next;
    i++;
    }
    ListNode* tail = A;
    int j=0;
    int y=0;
    int q=0;
    while(j<i)
    {
    if(j%2 == 0)
    {
    tail->val = V[y];
    y++;
    }
    else
    {
    tail->val = V[V.size()-1-q];
    q++;
    }
    tail = tail->next;
    j++;
    }
    return(A);
}
