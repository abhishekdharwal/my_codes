vector<ll>adj[100005];
f(0,n-1,1){
  int u,v;
  cin>>u>>v;
  adj[u].pb(v);
  adj[v].pb(u);
}

// dfs traversal//

void(ll node , ll parent){
  cout<<node<<" ";
  for(auto it : adj[node]){
    if(it!=parent){
      dfs(it,node);
    }
  }
}
// O(N)
