//https://codeforces.com/contest/1593/problem/A

//Jai Shree Ram
//Jai Maa Durga
//Ради вашего спокойствия не пытайтесь понять все.
 
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void compute(ll a,ll maxi,ll max_cnt){
    if(max_cnt>1){
        if(a==maxi)cout<<1<<" ";
        else cout<<(maxi+1-a)<<" ";
    }
    else if(max_cnt==1){
        if(a==maxi)cout<<0<<" ";
        else cout<<(maxi+1-a)<<" ";
    }
}

void solve(){
   ll a,b,c;cin>>a>>b>>c;
   
   ll maxi=max({a,b,c});
   ll max_cnt=0;
   if(a==maxi)max_cnt++;
   if(b==maxi)max_cnt++;
   if(c==maxi)max_cnt++;
   
   compute(a,maxi,max_cnt);
   compute(b,maxi,max_cnt);
   compute(c,maxi,max_cnt);
   cout<<endl;
   
  
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
