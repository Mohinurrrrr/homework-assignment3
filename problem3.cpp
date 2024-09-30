#include <iostream>
using namespace std;
int main() {
    int N,A,B;
    int finalSum=0;
    cin>>N>>A>>B;
    for(int i=1; i<=N; i++){
        int sum=0;
        int temp=i;
        while(temp!=0){

            int digit=temp%10;
            temp=temp/10;
            sum=sum+digit;
        } if(sum>B||sum<A) continue;
        finalSum=finalSum+i;

    } cout<<finalSum;
    return 0;
}