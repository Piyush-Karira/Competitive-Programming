void levelOrder(Node *root, int level, map<int, vector<int>> &mp)
{
	if(root==NULL)
		return;
	mp[level].push_back(root->data);
	levelOrder(root->left, level+1, mp);
	levelOrder(root->right, level +1, mp);
}
void spiralOrder(Node *root)
{
	int level =0;
	map<int, vector<int>> mp;
	levelOrder(Node *root, level, mp);
	for(int i=0;i<mp.size();i++)
	{
		vector<int> vec = mp[i];
		if(i&1)
		{
			for(int j=0;j<vec.size();j++)
				cout<<vec[j]<<" ";
		}
		else{
			for(int j=vec.size()-1;j>=0;j--)
				cout<<vec[j]<<" ";
		}
	}
}

