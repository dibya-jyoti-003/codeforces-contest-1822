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
int main(){
	fast;
	read(t);
	while (t--){
		read(x);
		if (x == 1)cout <<"1"<<endl;
		else if (x%2 == 1)cout <<"-1"<<endl;
		else {
			cout <<x<<" "<<x-1<<" ";
			for (int i=2;i<x;i+=2){
				cout <<i<<" "<<x-i-1<<" ";
			}
			cout <<endl;
		}
	}
	return 0;
}