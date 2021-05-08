#include<bits/stdc++.h>
using namespace std;
void solubility(long long int A,long long int B,long long C){
	long long int S_per_100grms=B+((100-A)*C);
	long long int SperLitre=S_per_100grms*10;
	cout<<SperLitre<<endl;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
long long int T;
cin>>T;
while(T--){
	long long int A,B,C;
	cin>>A>>B>>C;
	solubility(A,B,C); 
}


return 0;
}

