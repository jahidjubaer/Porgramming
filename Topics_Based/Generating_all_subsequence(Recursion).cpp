///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool is_taken[19];

void sub_seq(int a[], int n, int pos){
  if(pos >= n){
    // print if position >= n and istaken;
    for(int i = 0; i < n; i++){
      if(is_taken[i]){
        cout << a[i] << ' ';
      }
      
    }
    cout << endl;
    //return for base case
    return;
  }

  //without taking 
  is_taken[pos] = false;
  sub_seq(a, n, pos + 1);

  //taking
  is_taken[pos] = true;
  sub_seq(a, n, pos + 1);

 
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++){
    cin >> a[i];
  } 

  sub_seq(a, n, 0);
  
  return 0;  
}