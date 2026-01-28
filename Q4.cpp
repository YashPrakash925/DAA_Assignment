#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& arr){
  int local=0,ansn=nums.size();
  for(int i=0;i<n;i++){
    if(local<0) local=0;
    local+=nums.size();
    ans=max(local,ans);
  }
  cout<<ans;
}
int main(){
  vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
  solve(v);
}
