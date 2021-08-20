/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution{
        int deepest = 0, sum = 0;
public:
        int deepestLeavesSum(TreeNode* node) {
            findSum(node, 1);
                return sum;
        }
public:
    void findSum(TreeNode* node, int curr)
    {
        if(node != NULL) {
            if(curr > deepest){
                sum =0;
                deepest = curr; 
            }
            if(curr ==deepest){
                sum += node->val;
            }
            findSum(node->left, curr+1);
            findSum(node->right, curr+1);
        }
    }
};
