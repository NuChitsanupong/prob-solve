#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
  int s, t, n, maxcost=0, curTime, finishTime, cost;
  vector< pair<int, int> > a;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> s >> t;
    a.push_back(make_pair(s, t));
  }
  sort(a.begin(), a.end());
  curTime = 0;
  for(int i=0; i<a.size(); i++){
    finishTime = curTime+a[i].second;
    if(finishTime > a[i].first){
      cost = (finishTime-10-a[i].first)*1000;
      if(cost > maxcost) maxcost = cost;
    }
    curTime = finishTime;
  }
  cout << maxcost;
}