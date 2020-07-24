#include <iostream>
#include <vector>
#define MAX 100001
using namespace std; 

int n;
int first, second;
bool visited[MAX];
vector<int> tree[MAX];
int parent[MAX];

void dfs(int node){
    visited[node] = true;

    for(int i= 0;i<tree[node].size();i++){
        int next = tree[node][i];
        if(!visited[next]){
            parent[next] = node;
            // debug : cout<<"node : "<<node <<" next : "<<next<<"\n";
            dfs(next);
        }
    }
}

int main(void){
    cin>>n;


    for(int i = 0 ;i<n-1;i++){
        cin>>first >> second;
        tree[first].push_back(second);
        tree[second].push_back(first);
    }

    dfs(1);

    for(int i= 2;i<=n;i++){
        cout<<parent[i]<<"\n";
    }
    return 0;
}