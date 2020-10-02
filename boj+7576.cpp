#include <iostream>
#include <vector>
#include <queue> 
#define MAX 1001
using namespace std;

int arr[MAX][MAX];
bool discovered[MAX][MAX];
vector<pair<int,int> > dir;
queue<pair<int,int> > q;
int g,s,cnt;
int segment, answer ; 
bool traverse;

typedef struct{
    int x,y;
}di;

di d[4]={{0,-1} , {0,1},{1,0},{-1,0}};

bool isInRange(int curDirX,int curDirY){
    return (0<= curDirX && curDirX < g && 0<=curDirY && curDirY < s);
}

void bfs(){
    for(int i = 0;i<dir.size();++i){
        q.push(make_pair(dir[i].first, dir[i].second)); 
    }
    
    while(!q.empty()){
        cnt = 0; traverse = false;
        for(int l = 0;l<segment;++l){
            int dx = q.front().first; int dy = q.front().second;
            q.pop();
            
            for(int i= 0;i<4;++i){
                if(isInRange(dx+d[i].x ,dy+d[i].y) && !discovered[dx+d[i].x][dy+d[i].y]){
                    arr[dx+d[i].x][dy+d[i].y] = 1;
                    q.push(make_pair(dx+d[i].x ,dy+d[i].y));
                    discovered[dx+d[i].x][dy+d[i].y] = true;
                    traverse = true;
                    ++cnt;
                    /*
                    //debug code
                    	for(int j= 0;j<g;++j){
                    		for(int k =0;k<s;++k){
    			                cout<<arr[j][k] <<" ";
    		                }
    		                cout<<"\n";
                    	}
                    cout<<"\n";
                    */
                }
            }
        }
        segment = cnt;
        if(traverse) ++answer;
    }
}

int main() {
	int c = 0;
	cin>>s>>g;
	for(int i= 0;i<g;++i){
		for(int j =0;j<s;++j){
			cin>>arr[i][j];
		}
	}
	
	for(int i= 0;i<g;++i){
		for(int j =0;j<s;++j){
		    if(arr[i][j] == -1 || arr[i][j])
		        ++c;
		}
	}
	
	if(c == g*s){
	    cout<<0<<"\n";
	    return 0;
	}
	
	for(int i= 0;i<g;++i){
		for(int j =0;j<s;++j){
			if(arr[i][j] == -1)
			    discovered[i][j] = true;
			else if(arr[i][j]){
			    segment++;
			    dir.push_back(make_pair(i,j));
			}
		}
	}
	bfs();

	for(int i= 0;i<g;++i){
		for(int j =0;j<s;++j){
            if(!arr[i][j]){
                cout<<-1<<"\n";
                return 0;
            }
		}
	}
	
	/*
	debug code 
	for(int i = 0;i<dir.size();++i){
        cout<<dir[i].first <<" " << dir[i].second <<"\n";
    }
    */	
    cout<<answer <<"\n";
	return 0;
}
