#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define forl for(int i=1;i<=n*7;i++)
#define vn vector<ll>v((n*7)+1)
#define vin forl cin>>v[i]
#define sort sort(v.begin(),v.end());
#define v2d vector<vector<char>> v(row, vector<char>(col));
#define mapp map<ll,ll>m

#define lower for(char &c:str) c=tolower(c);
#define upper for(char &c:str) c=toupper(c);
#define reverse reverse(str.begin(),str.end());
#define count count(v.begin(),v.end(),x);
#define uniq unique(str.begin(),str.end())-str.begin();
#define maxe *max_element(v.begin(),v.end())
#define uppind upper_bound(v.begin(),v.end(),x)-v.begin();
#define lowind lower_bound(v.begin(),v.end(),x)-v.begin();


#define f first
#define s second
#define MP make_pair

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

int main() {
optimize();
ll n;cin>>n;
vn;
vin;
ll x=v.size();
ll sum=0;
v[0]=0;
forl {
	sum+=v[i];
	if(i%7==0) {
		cout << sum << " ";
		sum=0;
	}
}
}


