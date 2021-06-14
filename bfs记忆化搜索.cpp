#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n,m,a[201][201],s[201][201],ans;
bool use[201][201];
int dfs(int x,int y){
    if(s[x][y])return s[x][y];
    s[x][y]=1;
    for(int i=0;i<4;i++)
    {  int xx=dx[i]+x;
       int yy=dy[i]+y;
       if(xx>0&&yy>0&&xx<=n&&yy<=m&&a[x][y]>a[xx][yy]){
       	  dfs(xx,yy);
       	  s[x][y]=s[x][y]>s[xx][yy]?s[x][y]:s[xx][yy]+1;
          
       }
    }
    return s[x][y];
}

void print(){
	for(int i=1;i<n;i++){
		for(int j=1;j<=m;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main()
{	
   scanf("%d%d",&n,&m);
   for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
       scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
      	ans=max(ans,dfs(i,j));
      	print();
      }
        
    printf("%d",ans);
    return 0;
}
