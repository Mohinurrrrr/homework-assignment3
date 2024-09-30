#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int count=0;
    for(int i=1; count<=N; i++){
        if(i%3==0||i%10==3)continue;
        count++;
        if(count==N)cout<<i;
    }
    return 0;
}