vii Z_algo(string s)
{
    int i,l=0,r=0,n=s.size();
    vii z(n);
    for(i=1; i<n; i++)
    {
        if(i<=r)
            z[i]=min(r-i+1,z[i-l]);
        while(i+z[i]<n&&s[z[i]]==s[i+z[i]])
            z[i]++;
        if(i+z[i]-1>r)
            l=i,r=i+z[i]-1;
    }
    z[0]=n;
    return z;
}
