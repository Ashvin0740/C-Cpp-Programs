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
int preInd=0;
TreeNode *buildTree(vector<int> &pre, vector<int> &in) {
    return createTree(pre,in,0,in.size() - 1);
}
TreeNode* createTree(vector<int>& pre, vector<int>& in,int s, int e){
    if(s > e){
        return NULL;
    }
    TreeNode* node=new TreeNode(pre[preInd++]);
    int pos;
    for(int i=s;i<=e;i++){
        if(in[i]==node->val){
            pos=i;
            break;
        }
    }
    node->left =createTree(pre, in,s,pos-1);
    node->right =createTree(pre, in, pos+1,e);
    return node;
}
};