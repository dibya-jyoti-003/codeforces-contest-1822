#include<iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);init_code();
#include<bits/stdc++.h>
#define ll long long int
#define read(x) int x;cin>>x;
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
}
ll solve(vector<int>& num, int n){
	sort(num.begin(),num.end());
	ll l1=num[n-1],l2=num[n-2],s1=num[0],s2=num[1];
	if (l1*l2>s1*s2)return l1*l2;
	return s1*s2;
}
int main(){
	fast;
	read(t);
	while (t--){
		read(n);
		vector<int> num(n);
		for (int i=0;i<n;i++){
			cin>>num[i];
		}
		cout <<solve(num,n)<<endl;
	}
	return 0;
}