#include<bits/stdc++.h>
#define JAX ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n';
#define lli long long int
#define vt vector
using namespace std;

int main()
{
   JAX
int n;
cin>>n;
int x[n];
int y[n];
int sx=0;
int sy=0;

for (int i=0;i<n;i++){
    cin>>x[i];
}
for (int i=0;i<n;i++){
    cin>>y[i];
}

for (int i=0;i<n;i++){
    sx=sx+x[i];
}
for (int i=0;i<n;i++){
    sy=sy+y[i];
}


if (sx>=sy){
    cout<<"Yes";
}
else{
    cout<<"No";
}

 return 0;
}
