class Solution{
  public:
  void dfs(TreeNode* root, vector<int> &v){
      if(root == NULL) return;
      dfs(root->left, v);
      dfs(root->right, v);
      v.push_back(root->val);

  }
  vector<int> post_order(TreeNode* root){
     vector<int> v;
     dfs(root, v);
     return v;

  }
};
