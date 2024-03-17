// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
// handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();

    map<string, int> m;
    int n;
    cin >> n;

    while(n--){
        int x;
        string _x;
        cin >> _x >> x; 
        m.insert({_x, x});
    }

    string s;

    while(cin >> s){

        auto it = m.find(s);

        if(it != m.end()){
            cout << it->first << "=" << it->second << endl; // or can use this [ m.at(s) ]
        }else{
            cout << "Not found" << endl;
        }

    }
    
return 0;
}