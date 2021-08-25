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
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
	
        if (!root) return NULL;
		
		// CASE 1
        if (root->val < low) return trimBST(root->right, low, high); // SINCE BST GO TO RIGHT FOR VALID RANGE [ low , high ]
		
		// CASE 2
        if (root->val > high) return trimBST(root->left, low, high); // SINCE BST GO TO LEFT FOR VALID RANGE [ low, high ]
        
		// CASE 3
        // At this stage root lies WITHIN RANGE [ low , high ]
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
    }
};