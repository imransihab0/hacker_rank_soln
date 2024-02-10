// https://www.hackerrank.com/challenges/cpp-lower-bound/problem
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;

bool ret(int c, int arr[]){
    for(int i=0; i<c; i++){
        if(arr[i] == c){
            return true;
        }
    }return false;
}

int check(int c, int arr[]){
    for(int i=0; i<c; i++){
        if(arr[i] == c){
            return i + 1;
        }
    }
}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int c;
        cin >> c;
        if(ret(c, arr)){
            int flag = check(c, arr);
            cout << "Yes " << flag << endl;
        }else{
            int flag = check(c+1, arr);
            cout << "No " << flag << endl;
        }
    }
    
return 0;
}