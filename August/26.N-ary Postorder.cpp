  vector<int> postorder(Node* root) {
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
    void helper(Node* root,vector<int>&ans){
            if(root==NULL) return;
            for(Node* child:root->children){
                helper(child,ans);
            }
            ans.push_back(root->val);
    }
