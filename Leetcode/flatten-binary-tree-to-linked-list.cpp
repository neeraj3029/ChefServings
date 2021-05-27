class Solution {
public:
    TreeNode* makeshift(TreeNode* node) {
        if(!node) return NULL;
        TreeNode* left = node->left;
        TreeNode* right = node->right;
        TreeNode* leftEnd = makeshift(left);
        TreeNode* rightEnd = makeshift(right);
        
        if(leftEnd) {
            leftEnd->right = node->right;
            node->right = node->left;
            
            node->left = NULL;
        }
        if(rightEnd) return rightEnd;
        if(leftEnd) return leftEnd;
        return node;
    }
    void flatten(TreeNode* root) {
        makeshift(root);
    }
};
