///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char ch[n];
    cin >> ch;

    // just check if ch[i] and c[i + 1] same or not if same , i have to remove it ; so cout ++;
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(ch[i] == ch[i+1]){
            cnt++;
        }
    } 
    
    cout << cnt << endl;
    return 0;    
}