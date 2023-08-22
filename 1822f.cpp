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
void dfs(vector<vector<int>>& adj,vector<int>& dis,vector<int>& visited,int curr){
	visited[curr] = 1;
	int flag = 0;
	for (auto i:adj[curr]){
		if (!visited[i]){
			flag = 1;
			dfs(adj,dis,visited,i);
			dis[curr] = max(dis[curr], dis[i]);
		}
	}
	if (flag == 0)dis[curr] = 0;
	else dis[curr]++;
}
int profit(int n,int k,int c,vector<vector<int>>& adj,vector<int>& dis){
	vector<int> visited(n+1,0);
	for (int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(adj,dis,visited,i);
		}
	}
	
}
int main(){
	fast;
	read(t);
	while (t--){
		int n,k,c;
		cin>>n>>k>>c;
		vector<vector<int>> adj(n+1);
		vector<int> dis(n+1,-1);
		for (int i=0;i<n-1;i++){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		cout <<profit(n,k,c,adj,dis)<<endl;
	}
	return 0;
}