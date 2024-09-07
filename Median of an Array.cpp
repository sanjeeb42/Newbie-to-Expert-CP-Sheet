//https://codeforces.com/contest/1946

//Jai Shree Ram
//Jai Maa Durga
//Ради вашего спокойствия не пытайтесь понять все.
 
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
  ll n;cin>>n;
  vector<ll>arr(n);
  for(auto &it:arr)cin>>it;
  
  sort(arr.begin(),arr.end());
  ll val=arr[ceil(n/(2*1.0))-1];
  auto it=lower_bound(arr.begin(),arr.end(),val+1);
  ll index=(it-arr.begin())-1;
  //cout<<"Index is: "<<index<<endl;
  ll ans=index-((ceil(n/(2*1.0)))-1)+1;
  cout<<ans<<endl;
}
 
int main()
{
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}
