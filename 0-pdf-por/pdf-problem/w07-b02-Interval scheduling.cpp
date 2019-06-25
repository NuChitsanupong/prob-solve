#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool sortSec(const pair<int, int> &a, const pair<int, int> &b){
  return (a.second < b.second);
}

int main(){
  int s, t, n, ans=1, curTime;
  vector< pair<int, int> > a;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> s >> t;
    a.push_back(make_pair(s, t));
  }
  sort(a.begin(), a.end(), sortSec);
  curTime = a[0].second;
  for(int i=1; i<a.size(); i++){
    if(a[i].first >= curTime){
      ans++;
      curTime = a[i].second;
    }
  }
  cout << ans;
}