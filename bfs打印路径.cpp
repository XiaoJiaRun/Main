#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int a[5][5];
int b[5][5];
int aaa[4][2]={-1,0,1,0,0,-1,0,1};
int dx[30][30];
int dy[30][30];
struct node{
	int xx;
	int yy;
	int sum;
	int dx[50];
	int dy[50];
};
queue<node>ls;

int pd(int x,int y){
	if(x>=0&&y>=0&&x<5&&y<5){
		return 1;
	}
	return 0;
}

void bfs(int x,int y){
	if(ls.empty()){
		return ; 
	}
	a[x][y]=1;

	if(x==4&&y==4){
		printf("(0, 0)\n");			
            for(int i=0;i<ls.front().sum;i++)
                printf("(%d, %d)\n",ls.front().dx[i],ls.front().dy[i]);
		return ;
	}
	for(int i=0;i<4;i++){
		int x1=x;
		int y1=y;
		
		x1=x+aaa[i][0];
		y1=y+aaa[i][1];
		if(a[x1][y1]==0&&pd(x1,y1)){
			node p;
			p=ls.front();
			p.xx=x1;
			p.yy=y1;
			p.dx[ls.front().sum]=x1;
			p.dy[ls.front().sum]=y1;
			p.sum=ls.front().sum+1;
			ls.push(p);
		} 
	}
	ls.pop();
	bfs(ls.front().xx,ls.front().yy);
}
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	node o;
	o.xx=0;
	o.yy=0;
	o.sum=0;
	ls.push(o);
	bfs(0,0);
	
	return 0;
}
