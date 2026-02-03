#include <bits/stdc++.h>   // imports everything
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;  
    // n = number of nodes
    // m = number of edges

    // adjacency list
    // adj[u] will store -> {neighbor, weight}
    vector<vector<pair<int,int>>> adj(n+1);

    // taking graph input
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;

        adj[a].push_back({b,w}); // a -> b
        adj[b].push_back({a,w}); // b -> a (because undirected)
    }

    // dist[i] = shortest distance from node 1 to i
    vector<long long> dist(n+1, LLONG_MAX);

    // parent[i] = previous node used to reach i
    // helps us print the path later
    vector<int> parent(n+1, -1);

    // MIN heap (very important)
    // always gives node with smallest distance
    priority_queue<
        pair<long long,int>,
        vector<pair<long long,int>>,
        greater<pair<long long,int>>
    > pq;

    dist[1] = 0;      // distance from 1 to 1 is zero
    pq.push({0,1});  // push {distance,node}

    while(!pq.empty()){

        auto top = pq.top();
        pq.pop();

        long long d = top.first; // current distance
        int u = top.second;      // current node

        // if we already found a better path -> skip
        if(d > dist[u]) continue;

        // check all neighbors of u
        for(auto edge : adj[u]){

            int v = edge.first;  // neighbor
            int w = edge.second; // weight

            // RELAXATION STEP (heart of Dijkstra)
            // if going through u is shorter
            if(dist[u] + w < dist[v]){

                dist[v] = dist[u] + w; // update distance
                parent[v] = u;         // remember path

                pq.push({dist[v], v}); // explore this node later
            }
        }
    }

    // if node n was never reached
    if(dist[n] == LLONG_MAX){
        cout << -1;
        return 0;
    }

    // reconstruct path from n -> 1 using parent
    vector<int> path;

    for(int v=n; v!=-1; v=parent[v])
        path.push_back(v);

    // reverse because we built it backwards
    reverse(path.begin(), path.end());

    // print path
    for(int x : path)
        cout << x << " ";
}
