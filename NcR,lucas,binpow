ll binpow(ll b,ll p)
{
    ll res=1LL;
    while(p)
    {
        if(p%2LL)
            res=1LL*res*b%MOD;
        b=1LL*b*b%MOD;
        p/=2LL;
    }
    return res;
}
vll fact(N),ifact(N);
void pre()
{
    fact[0]=1LL;
    for(ll i=1; i<N; i++)
        fact[i]=1LL*fact[i-1]*i%MOD;
    for(ll i=1; i<N; i++)
        ifact[i]=binpow(fact[i],MOD-2);
}
ll ncr(ll n,ll r)
{
    if(r>n)
        return 0LL;
    if(r==0||n==r)
        return 1LL;
    ll tmp=1LL*ifact[n-r]*ifact[r]%MOD;
    return (1LL*fact[n]*tmp)%MOD;
}
ll Lucus(ll n,ll r)
{
    if(n==0)
        return 1LL;
    return (1LL*ncr(n%MOD,r%MOD)*Lucus(n/MOD,r/MOD))%MOD;
}
