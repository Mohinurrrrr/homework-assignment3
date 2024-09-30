#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n!=0){
        if (n>=10){ return 0;}
        for ( int i=1; i<=n; i++) {
            cout<<i;
            if (i!=n) continue;
            for(int g=n; g>=1;g--){
                cout<<g;
                if (g!=1) continue;
                cout<<endl;
                n--;}}
    }


    return 0;
}