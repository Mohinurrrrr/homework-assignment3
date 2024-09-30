#include <iostream>

using namespace std;
int main() {
    int N,x;
    cin>>N>>x;
    if(N<=0) return 0;
    if(N==2||N==1)cout<<1;
    else cout<<(N-2)/x+2;
    return 0;
}