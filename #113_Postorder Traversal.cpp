vector<int> getPostOrderTraversal(TreeNode *root)

{

vector<int> res;

// Write your code here.

stack<pair<TreeNode*, int>> sack;

if(root != NULL) sack.push({root,0});

 

while(!sack.empty()){

TreeNode *k = sack.top().first;

int state = sack.top().second;

 

sack.pop();

 

if(state == 3) continue;

 

sack.push({k, state+1});

 

if(state == 0 && k->left != NULL){

sack.push({k->left,0});

}

else if(state == 1 && k->right!= NULL){

sack.push({k->right,0});

}

else if(state == 2){

res.push_back(k->data);

}

}

 

return res;

} Every node has 4 states → 

for inorder → (0 → check left  1→node. 2→right 3→ done)

 

for preorder → (0 →node   1→.check left 2→check right 3→ done)

 

postorder → (0 →.check left    1→.check right 2→ node 3→ done)
