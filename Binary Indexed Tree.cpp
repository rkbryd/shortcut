
struct BIT  ///1 index
{
    ll n;
    vll t;
    BIT() {}
    BIT(ll _n)
    {
        n=_n;
        t.assign(_n+1,0);
    }
    void update(ll idx,ll val)
    {
        while(idx<=n)
        {
            t[idx]+=val;
            idx+=(idx&-idx);
        }
    }
    ll query(ll idx)
    {
        ll s=0;
        while(idx>0)
        {
            s+=t[idx];
            idx-=(idx&-idx);
        }
        return s;
    }
    ll query(ll l,ll r)
    {
        return query(r)-query(l-1);
    }
};
