#include <iostream>
using namespace std;

int main() 
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=1;i<=n;i++){
      cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    int sum=0;
    for(int i=l;i<=r;i++){
      sum += arr[i];
    }
    cout<<sum<<endl;
}
