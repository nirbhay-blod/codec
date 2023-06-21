
// dsu code

vector<int>parent;
int findparent(int node){
   if(node == parent[node]) return node;
   return parent[node] = findparent(parent[node]);
}
void Union(int u, int v){
   int x = findparent(u);
   int y = findparent(v);
   if(x == y) return;
   parent[x] = y;
}


// temp
#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/