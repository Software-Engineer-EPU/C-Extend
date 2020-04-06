#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve(){
  int n, x, j=0;
  int a[105], b[105];
  vector<int, int> c;
  cin>>n;
  for(int i=0; i<n; i++){
   cin>>a[i];
  }

  for(int i=1; i<=a[i-1]; i++){
    b[j++]=i;
  }

  set_difference(begin(a), end(a),
  begin(b), end(b),
  back_inserter(c));

  if(c.size()==0){
    cout<<"good job"<<endl;

  }else{
    for(auto& e: c){
      cout<<e<<endl;
    }
  }

}

int main(){
  // freopen("A.txt","r",stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}



