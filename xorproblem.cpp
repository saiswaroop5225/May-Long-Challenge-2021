#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Xor_Equality(ll A,ll B,ll M){
    ll count=1;
    A=A%M;
    if(A==0){
        return 0;
    }
    while(B>0){
        if(B&1){
            count =(count*A)%M;
        }
        B=B>>1;
        A=(A*A)%M;
    }
    return count;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t,n,M;
M=1000000007;
cin>>t;
while(t--){
	cin>>n;
	cout<<Xor_Equality(2,n-1,M)<<"\n";
}
return 0;
}

