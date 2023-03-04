#include<iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode poolNode[1005];
    int count = 0;
    ListNode* newNode(int value = 0) {
        poolNode[count].val = value;
        poolNode[count].next = nullptr;
        return &poolNode[count++];
    }


class Solution {
public:
    ListNode* result = newNode();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remember = 0;
        ListNode* current = result;
        while (true)
        {
            if ((l1 == nullptr) && (l2 == nullptr)) {
                return result;
            }
            else {
                if(current == nullptr)
                    current = newNode();

                int sum = remember;

                if (l1 != nullptr)
                    sum += l1->val;

                if (l2 != nullptr)
                    sum += l2->val;

                current->val = sum % 10;
                remember = sum / 10;

                if (l1 != nullptr)
                    l1 = l1->next;

                if (l2 != nullptr)
                    l2 = l2->next;

                if ((l1 != nullptr) || (l2 != nullptr)) {
                    current->next = newNode();
                    current = current->next;
                }    
            }
        }
        return result;
    }
};



int main() {
    Solution solution;

    ListNode* l1 = newNode(2);
    l1->next = newNode(4);
    l1->next->next = newNode(3);

    ListNode* l2 = newNode(5);
    l2->next = newNode(6);
    l2->next->next = newNode(4);

    ListNode* result = solution.addTwoNumbers(l1, l2);

 }