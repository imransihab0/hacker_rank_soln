// https://www.hackerrank.com/challenges/handshake/problem?isFullScreen=true
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    cout << ((n-1)*n)/2 << endl;
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;
    while(t--) solve();
    
return 0;
}