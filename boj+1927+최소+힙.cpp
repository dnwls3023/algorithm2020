#include <iostream>
#include <queue> // 우선순위 큐를 사용하기 위해 추가
using namespace std;

priority_queue<int,vector<int>, greater<int> > pq;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^^~~~ 띄어쓰기를 해줘야함
// 안해주면 비트연산으로 보기 때문 ( >>는 비트연산이다. )
int n;
int num;

int main(void){
    // 입력받는 시간을 줄이는 코드 (cin을 사용할 때 속도 향상)
    ios::sync_with_stdio(0); 
    cin.tie(0);

    cin>>n;

    for(int i = 0; i<n;i++){
        cin>>num;
        if(num == 0){
            if(!pq.empty()){
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            else{
                cout<<0<<"\n";
            }
        }
        else{
            pq.push(num);
        }
    }

    return 0;
}