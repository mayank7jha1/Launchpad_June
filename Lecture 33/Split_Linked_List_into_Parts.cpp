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

    int Length(ListNode* head) {
        int ans = 0;
        while (head != NULL) {
            ans++;
            head = head->next;
        }
        return ans;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 1;

        int n = Length(head);

        int Least_Element_In_Every_Part = n / k;
        int Extra_Element = n % k;

        vector<ListNode*>ans;

        if (Least_Element_In_Every_Part == 0) {
            // n<k

            for (int i = 0; i < k; i++) {
                if (head != NULL) {

                    ListNode* n = head->next;
                    head->next = NULL;

                    ans.push_back(head);
                    head = n;

                } else {

                    ans.push_back(NULL);
                }
            }
        } else {
            //n>=k

            while (head != NULL) {

                ans.push_back(head);
                int x = 0;
                if (Extra_Element > 0) {
                    x = 1;
                }
                Extra_Element--;

                for (int i = 1; i < Least_Element_In_Every_Part + x; i++) {
                    head = head->next;
                }

                //Node 4:
                ListNode* n = head->next;
                head->next = NULL;
                head = n;

                count++;
                if (count == k) {
                    ans.push_back(head);
                    break;
                }
            }
        }
        return ans;

    }
};