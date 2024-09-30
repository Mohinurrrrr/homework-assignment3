#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
    int j=0;
 while(n!=0){
     if (n>=10){ return 0;}
     for ( int i=1; i<=n; i++) {
         cout<<i;
      if (i!=n) continue;



    if(j==2) cout<<"  ";
    if(j==4) cout<<"    ";
    if(j==6)cout<<"      ";
    if(j==8)cout<<"        ";
    if(j==10)cout<<"          ";
    if(j==12)cout<<"            ";
    if(j==14)cout<<"              ";
    if(j==16)cout<<"                ";
      j=j+2;

      for(int g=n; g>=1;g--){
      cout<<g;
      if (g!=1) continue;
      cout<<endl;
          n--;

      }}
 }


    return 0;
}