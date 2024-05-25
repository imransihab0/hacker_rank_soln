// https://www.hackerrank.com/challenges/find-point/problem?isFullScreen=true
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
// #define py cout << "YES" << endl
// #define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int px, py, qx, qy, rx, ry;
    cin >> px >> py >> qx >> qy;
    rx = 2*qx - px; ry = 2*qy - py;
    cout << rx << " " << ry << endl;
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;
    while(t--) solve();
    
return 0;
}