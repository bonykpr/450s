vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    stack<Node *> S;
    queue<Node *> Q;
    Q.push(root);
    
    while(Q.empty()==false)
    {
        root=Q.front();
        res.push_back(root->data);
        Q.pop();
        
        if(root->right)
            Q.push(root->right);
       
            
        if(root->left)
            Q.push(root->left);
            
             
    }
    
   reverse(res.begin(),res.end());
    return res;
    
}
