problem link : https://toph.co/p/yet-another-xor-problem



///#pragma GCC optimize("Ofast")
///#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
///#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

///#include<ext/pb_ds/assoc_container.hpp>
///#include<ext/pb_ds/tree_policy.hpp>
///using namespace __gnu_pbds;
///template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
///(X).order_of_key(value) /// return lower_bound(value)
///(*X).find_by_order(index) /// return value (0 index)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// mt19937_64 (long long)

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vii> vvii;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,int> psi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<bool> vbb;
typedef vector<string> vss;

const int N = 500001;
const int MOD = 999377;
const int MX = INT_MAX;
const ll INF = LLONG_MAX;

#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define next(x) next_permutation(all(x))
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rev(a) reverse(all(a))
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define B begin()
#define E end()
#define ub upper_bound
#define lb lower_bound
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define error cout<<-1<<nl
#define space ' '
#define nl '\n'
#define PI acos(-1)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define Case(x) cout<<"Query "<<x<<": "
#define strtoint(a) atoi(a.c_str())
#define dbg(x) cerr<<#x<<" is "<<x<<' ';
#define fix(x) cout<<fixed<<setprecision(x)
#define leastonepos(x) __builtin_ffs(x)
#define leadingoff(x) __builtin_clz(x)
#define trailingoff(x) __builtin_ctz(x)
#define numofone(x) __builtin_popcount(x)
#define time() cerr<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<'\n'

#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<nl;
#define cinv(v) for(auto &it:v)cin>>it;

///................Graph's Move.................
///const int dx[] = {+1,-1,+0,+0}; ///Rock's Move
///const int dy[] = {+0,+0,+1,-1}; ///Rock's Move
///const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move
///const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's Move
///const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's Move
///*.....................-_-........................*///

vvii g(N);
vii v(N);
int n,ans=0;

struct node
{
    int cnt;
    node* bit[2];
    node()
    {
        cnt=0;
        for(int i=0; i<2; i++)
            bit[i]=NULL;
    }
}*root;
void Insert(int n)
{
    node* cur=root;
    for(int i=31; i>=0; i--)
    {
        bool b=(n&(1<<i));
        if(cur->bit[b]==NULL)
            cur->bit[b]=new node();
        cur=cur->bit[b];
        cur->cnt++;
    }
}
void Delete(node* cur,int n,int pos)
{
    if(pos<0)
        return;
    node* p=cur;
    bool b=(n&(1<<pos));
    cur=cur->bit[b];
    if(p->bit[b]==NULL&&p->bit[b^1]==NULL)
        delete p;
    Delete(cur,n,pos-1);
    cur->cnt--;
    if(cur->cnt==0)
        p->bit[b]=NULL;
}
int getmax(int n)
{
    node* cur=root;
    int res=0;
    for(int i=31; i>=0; i--)
    {
        bool b=(n&(1<<i));
        if(cur->bit[b^1]!=NULL)
        {
            res|=(1<<i);
            cur=cur->bit[b^1];
        }
        else
            cur=cur->bit[b];
    }
    return res;
}
void dfs(int u,int p)
{
    Insert(v[u]);
    ans=max(ans,getmax(v[u]));
    for(auto to:g[u])
        if(to!=p)
            dfs(to,u);
    Delete(root,v[u],31);
}

int main()
{
    fast();
    int tc=1,cs=0;
    ///cin>>tc;
    while(tc--)
    {
        root=new node();
        int i,x,y;
        cin>>n;
        for(i=1; i<=n; i++)
            cin>>v[i];
        for(i=1; i<n; i++)
        {
            cin>>x>>y;
            g[x].eb(y);
            g[y].eb(x);
        }
        dfs(1,0);
        cout<<ans<<nl;
    }
}
