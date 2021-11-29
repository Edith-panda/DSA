#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};
void bfs(TreeNode* root, vector<int> v){
      if(root == NULL) return;
      v.push_back(root->val);
      bfs(root->left, v);
      bfs(root->right, v);
}
vector<int> preorder(TreeNode* root, vector<int> preorder){
     vector<int> v;
     bfs(root, v);
     return v;
}
int main(){
    TreeNode* root = {1,NULL,2,3};
    vector<int> v;
    preorder(root, v);
}