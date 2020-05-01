
vutil(Node *root, int hd, map<int, vector<int>> &mp)
{
	if(root==NULL)
		return;
	mp[hd].push_back(root->data);
	vutil(root->left, hd-1, mp);
	vutil(root->right, hd+1, mp);
}

void verticalOrder(Node *root)
{
    //Your code here
    int hd=0;
    map<int, vector<int>> mp;
    //vutil(root, hd, mp);
    queue<Node> q;
    q.push(root);
    while(!q.empty())
    {

    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
    	vector<int> vec = it->second;
    	for(auto iz=vec.begin();iz!=vec.end();iz++)
    		cout<<iz<<" ";
    }
}