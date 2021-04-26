
vll H(N),P(N);

void build_hash(string &s)
{
    ll base=347;
    P[0]=1;
    for(int i=1; i<N; i++)
        P[i]=(P[i-1]*base)%MOD;
    for(int i=1; i<=sz(s); i++)
        H[i]=(base*H[i-1]+(s[i-1]-'a'+1))%MOD;
}

ll get_hash(ll l,ll r)
{
    return (H[r]-(H[l-1]*P[r-l+1])%MOD+MOD)%MOD;
}
