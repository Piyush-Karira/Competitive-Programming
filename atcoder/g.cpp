/*input
4 5
1 2
1 3
3 2
2 4
3 4
*/


#include<bits/stdc++.h>
using namespace std;
int visited[100005];

void dfs(int s, vector<int> vec[], vector<int> &dp)
{
	visited[s]=1;
	for(auto it = vec[s].begin();it!=vec[s].end();it++)
	{
		if(!visited[*it])
			dfs(*it, vec, dp);
			
		dp[s] = max(dp[s], 1+dp[*it]);
		
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> vec[n+1];
	int x,y, ans=0;
	for(int i=0;i<m;i++)
	{
		
		cin>>x>>y;
		vec[x].push_back(y);
	}
	vector<int> dp(n+1);
	
	memset(visited, 0, sizeof(visited));
	
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		dfs(i,vec, dp);
	}
	for(int i=1;i<=n;i++)
	{
		ans = max(ans,dp[i]);
	}
	cout<<ans;
	
}