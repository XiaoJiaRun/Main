#include<bits/stdc++.h>
using namespace std;

const int mo1 = 1e3;
int a[mo1];
int sum, sum1;
int main() {
	int x=0;
	while (cin >> a[x]) {
		x++;
	}
	int dp1[mo1], dp2[mo1];
	for (int i = 0; i < x; ++i) {
		dp1[i] = 1;
		dp2[i] = 1;
		for (int j = 0; j < i; ++j) {			
			if (a[j] > a[i]) {
				dp1[i] = max(dp1[i], dp1[j] + 1);//最长上升队列 
			} else {  
				dp2[i] = max(dp2[i], dp2[j] + 1);//最长下降队列
			}
		}
		sum = max(sum, dp1[i]);
		sum1 = max(sum1, dp2[i]);
	}
	cout << sum << endl << sum1 << endl;
	return 0;
}  

