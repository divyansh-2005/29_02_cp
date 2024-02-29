#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=1;i<=n;i++){
        cin>>arr[i];
      }
      int q;
      cin>>q;
      while(q--){
        int l,r;
        cin>>l>>r;
        int sum = 0;
        for(int i=l;i<=r;i++){
          sum += arr[i];
        }
        cout<<sum<<endl;
      }
    }
}
