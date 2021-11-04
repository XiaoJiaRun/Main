#include<bits/stdc++.h>
using namespace std;
const int mo2=1e2;
 
int a[mo2],k,s,n,o;

int main()
{
	while(1)
	{
		scanf("%d ",&n);
		k=n;
		s=n;
		o=0;		
		while(k!=0)
		{	
					
			s=k%2;			
			a[o]=s;
			k=k/2;
			o++;
		}
		
		if(n<0)
		{
			
			printf("%d-->%d",n,a[o-1]);
			for(int i=o-2;i>=0;i--)
			{
				printf("%d",abs(a[i]));
			}	
		}
		else if(n>=0)
		{
			printf("%d-->",n);
			for(int i=o-1;i>=0;i--)
			{
			printf("%d",a[i]);
			}
		}
		
	}
	return 0;
}
