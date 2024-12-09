///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e6 + 9;
int divisors[N];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for (int i = 1; i < N; i++) {
    // increment the count of divisors for each multiple of i
    for (int j = i; j < N; j += i) {
      divisors[j]++;
    }
  }
  for (int i = 1; i <= 10; i++) {
    cout << "Number of divisors of " << i << " = " << divisors[i] << endl;
  }
   
  
  return 0;  
}

