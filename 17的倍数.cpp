#include<bits/stdc++.h>
using namespace std;
const long long int mo2=1e8;
int sum=0;
char str[mo2];
int main()
{
	while(scanf("%s",str))
	{
		if(str[0]-'0'==0)
		{
			break;
		}
		sum=0;
		for(int i=0;i<strlen(str);i++)
		{
			sum=sum*10+str[i]-'0';
			sum=sum%17;
		}
		if(sum==0)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		
		
	}
	return 0;
}
