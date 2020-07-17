// 편집기 적응 아직 덜 돼가지고 좀 많이 쉬운걸로 함 풀다가 난이도 다시 높일 생각.
#include <iostream>
using namespace std;

int n;

bool solve(){
    if(n%4 == 0 && n%100 != 0 || n%400 == 0)
        return true;
    else;
        return false;
}

int main(void){
    cin>>n;
    cout<< solve()<<"\n";
    return 0;
}