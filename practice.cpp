//least common ancestor of a binary tree
 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(!root) return NULL;
    if(root==p || root==q) return root;
    TreeNode* left = lowestCommonAncestor(root->left,p,q);
    TreeNode* right = lowestCommonAncestor(root->right,p,q);
    if(!left && !right) return NULL;
    else if(!left && right) return right;
    else if(left && !right) return left;
        
        return root;
        
    }
 
 //Construct Binary Tree From Preorder and Inorder Traversal

 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         if(preorder.size()==0) return NULL;
    int root = preorder[0];
    int index = find(inorder.begin(),inorder.end(),root)-inorder.begin();
    vector<int> leftPreorder(preorder.begin()+1,preorder.begin()+index+1);
    vector<int> leftInorder(inorder.begin(),inorder.begin()+index);
    vector<int> rightPreorder(preorder.begin()+index+1,preorder.end());
    vector<int> rightInorder(inorder.begin()+index+1,inorder.end());
    TreeNode* left = buildTree(leftPreorder,leftInorder);
    TreeNode* right = buildTree(rightPreorder,rightInorder);
    TreeNode* root = new TreeNode(root);
    root->left = left;
    root->right = right;
    return root;
    }

    //Valid BInary Search Tree
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        if(root->left) {
            if(root->left->val>=root->val) return false;
            if(!isValidBST(root->left)) return false;
        }
        if(root->right) {
            if(root->right->val<=root->val) return false;
            if(!isValidBST(root->right)) return false;
        }
        return true;
    }  




     bool isValidBST(TreeNode* root) {
        if(!root) 
        {
            return true;
        }
        if(root->left) 
        {
            if(root->left->val>=root->val)
            {
                return false;
             }
            if(!isValidBST(root->left)) 
            {
                return false;
            }
        }
        if(root->right) 
        {
            if(root->right->val<=root->val) 
            {
                return false;
            }
            if(!isValidBST(root->right))
            {
                return false;
            }
        }
        return true;
    }    