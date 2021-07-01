//noob
#include<bits/stdc++.h>
using namespace std;
#define                rep(x) for(int i = 0;i < x ;i++)
#define                f1(i,a,n) for(int i=a;i<=n;i++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                fi first
#define                se second
#define                ll long long int 
#define                ld long double
#define                ull unsigned long long int
#define                pi acos(-1)
#define                test() int T,t=1;cin>>T;
#define                all(x) (x).begin(),(x).end()
#define                sz(x) (int(x.size()))
#define                endl   "\n"
typedef                vector<int> vi;
typedef                pair<int,int> PI;

const int INF = 1e9 + 5;

template< typename T > void out(const T& t){std:: cout << t << "\n";}

template <typename T>
void print_vector(const vector<T>& V){
  for(int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout<< endl;
}
// Global Variable


//function
bool check(int n){
   int x = sqrt(n);
   return x * x == n;
}
ll lcm(ll x,ll y);

void solve(){
   int n; cin >> n;
   string ans = "NO";
   if(n % 2 == 0 && check(n / 2)) ans = "YES";
   else if(n % 4 == 0 and check(n / 4)) ans = "YES";
   cout << ans << "\n";
}
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif 

int testCase = 1;
cin >> testCase ;
while(testCase--)
solve();
	return 0;
}
ll lcm(ll x, ll y) {
	return x*(y/__gcd(x,y));
}
