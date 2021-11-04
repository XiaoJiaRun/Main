#include<bits/stdc++.h>
using namespace std;
const int mo2=1e2;
char s[mo2];

int main()
{
	
	while(gets(s))
	{
	int len=strlen(s);
	if(s[0]=='/'&&s[1]=='/')
	{
		continue;
	}	
	for(int i=0;i<len;i++)
	{
		if(s[i]=='/'&&s[i+1]=='/')
		{
			break;
		}	
		else
		{
			printf("%c",s[i]);
		}
			
	}
	printf("\n");
	} 
	return 0;
}
