vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int> res;
  if(node==NULL) return res;
  
  queue<Node *> q;
  q.push(node);
  
  while(q.empty()==false)
  {
      Node *node = q.front();
      res.push_back(node->data);
      q.pop();
      
      if(node->left!=NULL)
        q.push(node->left);
        
    if(node->right !=NULL)
        q.push(node->right);
  }
  return res;
}
