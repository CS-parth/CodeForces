#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<struct TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            while(st.top()->left != NULL){
                st.push(st.top()->left);
            }
            struct TreeNode* save = st.top();
            ans.push_back(st.top()->val);
            st.pop();
            struct TreeNode* saving = NULL;
            if(!st.empty()){
                saving = st.top();
            }
                if(save->right == NULL){
                    if(
                    )
                    ans.push_back(st.top()->val);
                    st.pop();
                }else{
                    st.push(save->right);
                }
                if(saving != NULL && saving->right != NULL){
                    st.push(saving->right);
                }

        }
return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    vector<int> ans = inorderTraversal(root);
    return 0;
}
