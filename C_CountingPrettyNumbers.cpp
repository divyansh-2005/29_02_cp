#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int l,r;
      cin>>l>>r;
      int count=0;
      for(int i=l;i<=r;i++){
        int dig = i%10;
        if(dig == 2 || dig == 3||dig == 9){
          count++;
        }
      }
      cout<<count<<endl;
    }
}
