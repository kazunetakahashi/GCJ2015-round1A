// 未完成

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef complex<int> xy_t;

void init() {
}

// 変数を書く

int N;
xy_t P[20];

void input() {
  cin >> N;
  for (auto i=0; i<N; i++) {
    cin >> P[i].real() >> P[i].imag();
  }
}

bool hal(int x, int y) {
  vector<xy_t> Q;
  for (auto i=0; i<16; i++) {
    if ( ((x >> i) & 1) == 1) {
      Q.push_back(P[i]);
      if (i == y) {
        s = Q.size()-1;
      }
    }
  }
  sort(Q.begin(), Q.end());
  xy_t = now;
  for (int i=0; i<Q.size(); i++) {
    
  }
}

void output() {
  cout << endl;
}

int main() {
  init();
  int T;
  cin >> T;
  for (auto t=1; t<=T; t++) {
    cout << "Case #" << t << ": "; 
    input();
    output();
  }
}
