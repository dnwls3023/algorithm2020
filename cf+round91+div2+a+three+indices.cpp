#include <iostream>
#define MAX 1001
using namespace std;

int t,n;
int arr[MAX];

void solve(){
    for(int i= 0;i<n-2;i++){
        // arr[i] < arr[i+1] 조건이 거짓이면 다음 for문을 돌리는게 의미가 없기 때문에 
        // arr[i] < arr[i+1] 조건이 참일 때 다음 for문이 돌아가게 구현했다.
        // 사실 처음에는 이 조건을 넣지 않았을 때 시간초과가 나서 이 조건을 넣게 되었다.
        if(arr[i] < arr[i+1]){  
            for(int j= i+1;j<n-1;j++){
                // 위와 마찬가지로 arr[j] > arr[j+1] 조건이 거짓이면 다음 for문 돌리는게 의미가 없다.
                // 따라서 arr[j] > arr[j+1] 조건이 참이 되어야만 다음 for문에 돌아가게 구현했다.
                if(arr[j] > arr[j+1]){
                    for(int k = j+1;k<n;k++){
                        cout<<"YES"<<"\n";
                        cout << i+1<<" "<<j+1<<" "<<k+1<<"\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO"<<"\n";
}

int main(void){
    // cin 실행 속도 증가
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>t;
    for(int l= 0;l<t;l++){
        cin>>n;
        for(int j = 0;j<n;j++){
            cin>>arr[j];
        }
        solve();
    }
    cout<<"\n";
    return 0;
}