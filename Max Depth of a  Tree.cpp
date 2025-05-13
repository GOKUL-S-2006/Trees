struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
  };
 
int maxDepth(struct TreeNode* root) {
    if(root==0)
    {
        return 0;
    }
    else
    {
        int x=0;
        int y=0;
        x=maxDepth(root->left);
        y=maxDepth(root->right);
        if(x>y)
        {
            return x+1;
        }
        else{
            return y+1;
        }
    }
}
