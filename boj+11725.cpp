#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define MAX 100001
using namespace std;

typedef struct tree{
    vector<struct tree> vec;
    int data;
}Tree;

int n;
map<int,int> m;
pair<int,int> arr[MAX];
bool flag[MAX];

void bfs(Tree* t){ 
    queue<int> q;
    q.push(t[0].data);

    while(!q.empty()){
        
    }
}

int main(void){
    cin>>n;

    Tree* t =new Tree[n];

    for(int i= 0;i<n;i++){
        t[i].data = i+1;
    }

    for(int i= 0;i<n-1;i++){
        cin>>arr[i].first>>arr[i].second;

        arr[i].first--; arr[i].second--;
    }

    flag[0] = true;
    for(int i= 0;i<n-1;i++){
        if(!flag[arr[i].first])
            swap(arr[i].first, arr[i].second);

        t[arr[i].first].vec.push_back(t[arr[i].second]);
        flag[arr[i].first] = true; flag[arr[i].second] = true;

    }

    for(int i= 0;i<n-1;i++){
        cout<<t[i].vec.size()<<"\n";
        for(int j = 0;j<t[i].vec.size();j++){
            cout<< t[i].vec[j].data<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}