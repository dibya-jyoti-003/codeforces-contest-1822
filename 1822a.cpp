#include<iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);init_code();
#include<bits/stdc++.h>
#define ll long long 
#define read(x) int x;cin>>x;
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
}
int solve(int n,int t,vector<int>& sec,vector<int>& ent,int pos){
	if (pos == n-1){
		if (t>=sec[pos])return pos;
		else return -1;
	}
	int ans = solve(n,t-1,sec,ent,pos+1);
	if (t>=sec[pos]){
		if (ans == -1)return pos;
		if (ent[pos] > ent[ans])return pos;
	}
	return ans;
}
int main(){
	fast;
	read(t);
	while (t--){
		int ans = 0;
		read(n);read(ti);
		vector<int> sec(n),ent(n);
		for (int i=0;i<n;i++)cin >>sec[i];
		for (int i=0;i<n;i++)cin >>ent[i];
		int temp = solve(n,ti,sec,ent,0);
		temp = (temp==-1)?temp:temp+1;
		cout <<temp<<endl;
	}
	return 0;
}