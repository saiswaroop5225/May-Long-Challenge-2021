#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll T,N,x,k;
cin>>T;
while(T--){
    cin>>N>>x>>k;
    if(x%k==0 || (N+1-x)%k==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
