/*input
a
z
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	int n = s1.length();
	int m = s2.length();
	int l[n+1][m+1];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
				l[i][j]=0;

			else if(s1[i-1]==s2[j-1])
			{
				l[i][j]=l[i-1][j-1] + 1;
			}
			else
			{
				l[i][j]=max(l[i-1][j],l[i][j-1]);
			}
		}
	}

	int index = l[n][m];
	//cout<<index<<endl;

	string s="";
	int i=n, j=m;

	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1]){
			s+= s1[i-1];
			i--;j--; index--;
		}
		else if(l[i-1][j]>l[i][j-1])
		{
			i--;
		}
		else 
			j--;
	}

	reverse(s.begin(),s.end());

	cout<<s<<endl;
}