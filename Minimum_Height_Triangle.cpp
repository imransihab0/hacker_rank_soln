// https://www.hackerrank.com/challenges/lowest-triangle/problem?isFullScreen=true
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int a, b;
    cin >> b >> a;
    cout << ((2*a%b == 0) ? (2*a/b) : (2*a/b+1)) << endl;
    
return 0;
}