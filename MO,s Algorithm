
///#pragma GCC optimize("Ofast")
///#pragma GCC target("avx,avx2,fma")
///#pragma GCC optimization("unroll-loops")

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

const int N = 300001;
const int M = 20;
const int MOD = 1000000007;
const int inf = 1234567890;
const ll INF = 1122334455667788990;

#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define next(x) next_permutation(all(x))
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rev(a) reverse(all(a))
#define sz(x) int((x).size())
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
#define sqr(x) ((x)*(x))
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(a) accumulate(all(a),0LL)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define Case(x) cout<<"Case "<<x<<": "
#define strtoint(a) atoi(a.c_str())
#define dbg(x) cerr<<#x<<" is "<<x<<'\n';
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

const int block=555;

struct data
{
    int id,l,r;
    data(){}
    data(int _l,int _r,int _id)
    {
        id=_id;
        l=_l;
        r=_r;
    }

    bool operator<(const data &other)const
    {
        if(l/block==other.l/block)
            return (r<other.r);
        else
            return (l/block<other.l/block);
    }
};

vii cnt(N),mx(N);
int maxi=0;

void Add(int x)
{
    mx[cnt[x]]--;
    cnt[x]++;
    mx[cnt[x]]++;
    maxi=max(maxi,cnt[x]);
}
void Remove(int x)
{
    mx[cnt[x]]--;
    cnt[x]--;
    mx[cnt[x]]++;
    while(maxi&&!mx[maxi])maxi--;
}

int Get(int len)
{
    return max(1,2*maxi-len);
}

int main()
{
    ///input;
    ///output;
    fast();
    int tc=1,cs=0;
    ///cin>>tc;
    while(tc--)
    {
        int n,q,i,l,r;
        cin>>n>>q;
        vii v(n);
        cinv(v);
        vector<data>p(q);
        for(i=0;i<q;i++)
        {
            cin>>l>>r;
            l--,r--;
            p[i]=data(l,r,i);
        }
        sort(all(p));
        vii ans(q);
        int L=0,R=-1;
        for(auto i:p)
        {
            while(R<i.r)Add(v[++R]);
            while(R>i.r)Remove(v[R--]);
            while(L<i.l)Remove(v[L++]);
            while(L>i.l)Add(v[--L]);
            ans[i.id]=Get(i.r-i.l+1);
        }
        for(auto i:ans)
            cout<<i<<nl;
    }
}
