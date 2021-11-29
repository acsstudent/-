#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	int t[2001],coins[2001];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i]>>coins[i];
	 } 
	int m;
	cin>>m;
	int k=n-1;
	int count=0,sum=0;
	while(m)
	{
		sum=m/t[k];
		if(sum>coins[k])
		{
			count=count+coins[k];
			m=m-coins[k]*t[k];
		}
		else
		{
		 	count=count+sum;
		    m=m-sum*t[k];
		}
		k--;
	}
	if(count==0||m<0)
	{
		cout<<"-1";
	} 
	else
	cout<<count;
}
