vector<ll>adj[100005];
f(0,n-1,1){
  int u,v;
  cin>>u>>v;
  adj[u].pb(v);
  adj[v].pb(u);
}
/// main bfs traversal ////
void bfs(){
  queue<pair<ll,ll>>q;
  q.push(1,0); /// initial parent of the root node///
  // this while loop will run for N times
  while(!q.empty()){
    auto it =q.front();
    q.pop();
    ll node=it.first;
    ll parent=it.second;
    
    cout<<node<<" ";
    
    for(auto it : adj[node]){
      if(it!=parent){
        q.push({it,node});
      }
    }
    
    
    // time complexity //
    //O(N+E)
    //O(N+N-1)
    //O(2N)
    //O(N)
    
    
