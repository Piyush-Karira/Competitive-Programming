/*input
5 2
..
#.
..
.#
..

*/



#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 +7;
int main()
{
	int h,w;
	cin>>h>>w;
	vector<string> vec;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			string s;
			cin>>s;
			vec.push_back(s);
		}
	}
	int dp[h+1][w+1];
	int flag=0;
	for(int j=0;j<w;j++)
	{
		if(vec[0][j]=='#')
		flag=1;
		if(flag)
			dp[0][j]= 0;
		else dp[0][j]=1;
	}
	 flag=0;
	for(int j=0;j<h;j++)
	{
		if(vec[j][0]=='#'){
		flag=1;	
	}

		if(flag)
			dp[j][0]= 0;
		else dp[j][0]=1;
	}

	for(int i=1;i<h;i++)
	{
		for(int j=1;j<w;j++)
		{
			if(vec[i][j]=='#')
				dp[i][j]=0;
			else
			{
				dp[i][j] = (dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
			}
		}
	}
	cout<<dp[h-1][w-1]<<endl;
}