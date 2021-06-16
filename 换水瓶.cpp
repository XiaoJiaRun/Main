#include<bits/stdc++.h>
using namespace std;

int n,k=0,sum=0;
int solve(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		sum++;
		return sum;
	}
	else
	{
		sum=sum+n/3;
		n=n/3+n%3;
		solve(n); 
	}
	return sum;
}
int main()
{
	while(scanf("%d",&n)!=0)
	{
		sum=0;
		solve(n);
		printf("%d",sum);
	}
	return 0;	
}
