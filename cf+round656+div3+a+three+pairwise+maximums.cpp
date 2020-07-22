#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a,b,c;
int arr[3];

bool solve(){
    sort(arr,arr+3,greater<int>());

    if(arr[0] != arr[1])
        return false;
    a = arr[0] ; b = arr[2]; c = 1 ;
    return true;
}

int main(void){
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        if(solve()){
            cout<<"YES"<<"\n";
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}