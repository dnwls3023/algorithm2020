#include <iostream>
using namespace std;

int n;
int cnt; 

int main(void){
    cin>>n;
    int tmp = 0;
    for(int i= 1;i<=n;i++){
        tmp = i;
        while(tmp != 0){
            if(tmp%5 == 0){
                cnt++;
                tmp /=5;
            }
            else{
                break;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}