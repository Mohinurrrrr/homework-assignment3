#include <iostream>
using namespace std;
int main() {

    int t,N;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>N;
        while(N!=0){
            int digit=N%10;
            N=N/10;
            cout<<digit<<" ";
        } cout<<endl;
    }
    return 0;
}