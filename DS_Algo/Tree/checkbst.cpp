int maxValue(Node *node)
{
	if(root==NULL)
	{
		return INT_MIN;
	}

	int res = root->data;
	int lres = maxValue(root->left);
	int rres = maxValue(root->right);
	if(res<lres)
		res=lres;
	if(res<rres)
		res=rres;
	return res;
}

int minValue(Node *node)
{
	if(root==NULL)
	{
		return INT_MAX;
	}

	int res = root->data;
	int lres = minValue(root->left);
	int rres = minValue(root->right);
	if(res>lres)
		res=lres;
	if(res>rres)
		res=rres;
	return res;
}

bool isBST(Node *root)
{
	if(root=NULL)
		return true;
	if(root->left!=NULL&&root->data<maxValue(root->left))
		return false;
	else if(root->right!=NULL&&root->data>minValue(root->right))
		return false;
	else if(!isBST(root->left)||!isBST(root->right))
		return false;

	return true;
}