#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n, i, j, c1, c2, c3, c4, flag, ans, ans2;
cin>>t;

while(t--){
	cin>>n;
	int a[n];
	int b[n];
	c1=0;
	c2=0;
	c3=0;
	c4=0;
	flag=0;
	ans=0;
	ans2=0;

	for(i=0; i<n; i++){
		cin>>a[i];
		if(a[i]==0) c1++;
		else c2++;
	}

	for(i=0; i<n; i++){
		cin>>b[i];
		if(b[i] ==0) c3++;
		else c4++;
	}

	for(i=0; i<n; i++){
		if(a[i]!= b[i]){
			ans2++;
		}
	}
		ans = abs(c3-c1) + abs(c2-c4);
		ans/=2;
		ans++;
        cout<<min(ans,ans2)<<endl;
}
}
