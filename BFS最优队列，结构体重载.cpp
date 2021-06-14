#include<bits/stdc++.h>
using namespace std;
const int mo1=1e3;
int aaa[4][2]={0,1,0,-1,1,0,-1,0};
char a[mo1][mo1];
int b[mo1][mo1];
int sum=0,f=0,n,m,num=0;

struct l{
	int x;
	int y;
	int mm;
	friend bool operator < (l t1,l t2){
        return t1.mm>t2.mm;
    }
};

priority_queue<l>ls;

int panduan(int x,int y){
	if(x<0||y<0||x>=n||y>=m||a[x][y]=='#'){
		return 0;
	}else
	{
		return 1;
	}
	
}

void bfs(int x,int y){
	
	if(ls.empty()){
		return ;
	}
	if(a[x][y]=='a'){
		f=1;
		sum=ls.top().mm;
	
		return ;	
	}
	for(int i=0;i<4;i++){
		int x2=x;
		int y2=y;
		x2=x+aaa[i][0];
		y2=y+aaa[i][1];
		if(b[x2][y2]==0&&panduan(x2,y2)){
			b[x2][y2]=1;
			l p=ls.top();
			p.x=x2;
			p.y=y2;
			p.mm+=1;
			if(a[x2][y2]=='x'){
				p.mm+=1;
			}
			ls.push(p);
		}
	}	
	ls.pop();
	bfs(ls.top().x,ls.top().y);
} 

int main(){
	memset(b,0,sizeof(b));
	int x1,y1;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&a[i][j]);
			if(a[i][j]=='r'){
				x1=i;
				y1=j;
					
			}
		}
	}
	b[x1][y1]=1;
	l p;
	p.x=x1;
	p.y=y1;
	p.mm=0;
	ls.push(p);
	b[x1][y1]=1;
	bfs(x1,y1);
	if(f==1){
			printf("%d\n",sum);
	}else
	{
		printf("Impossible\n");
	}
	return 0;
	
}
