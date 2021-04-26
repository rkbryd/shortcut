struct GCD
{
    ll x,y,gcd;
};
GCD ex_euclid(ll a,ll b)
{
    if(b==0)
        return {1,0,a};
    GCD tmp=ex_euclid(b,a%b);
    return {tmp.y,tmp.x-(a/b)*tmp.y,tmp.gcd};
}
