#include <iostream>
using namespace std;

int main() 
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    long long prr[n+1];
    prr[0]=0;
    for(int i=1;i<=n;i++){
      prr[i] = prr[i-1]+arr[i-1];
    }
    
    for(int i=0;i<q;i++){
      int l,r;
      cin>>l>>r;
      cout<<prr[r] - prr[l-1]<<endl;
    }
}
