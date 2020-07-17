// 윤년보다는 난이도가 높음 그러나 여전히 쉬운축에 속함(내기준)

#include <iostream>
#include <deque> // 덱을 사용하기 위해 include 함.

using namespace std;

int n;
deque<int> deq;

int main(void){
    cin>>n;

    for(int i= 1;i<=n;i++){
        deq.push_back(i); // 덱에다가 숫자들을 넣는다.
    }

    if(n == 1){ // n에 1이 들어왔을 때의 예외처리 (밑에서 1이 들어오면 무한루프)
        cout << deq.front()<<"\n";
        return 0;
    }

    // memo에서의 알고리즘을 코드로 옮긴 것
    while(1){
        deq.pop_front();
        if(deq.size() == 1)
            break;
        deq.push_back(deq.front());
        deq.pop_front();
    }

    // 남은 값을 출력한다.
    cout<<deq.front()<<"\n";

    return 0;
}