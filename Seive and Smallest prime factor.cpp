//precalculate prime between 1 to N-1 

vbb mark(N);
vii p;

void seive()
{
    mark[0]=mark[1]=true;
    for(int i=4; i<N; i+=2)
        mark[i]=true;
    for(int i=3; i*i<N; i+=2)
        if(!mark[i])
            for(int j=i*i; j<N; j+=2*i)
                mark[j]=true;
    p.pb(2);
    for(int i=3; i<N; i+=2)
        if(!mark[i])
            p.pb(i);
}

//precalculate the smallest prime factor

vii pf(N);

void smallestpf()
{
    for(int i=2; i<N; i+=2)
        pf[i]=2,pf[i-1]=i-1;
    for(int i=3; i*i<N; i+=2)
        if(pf[i]==i)
            for(int j=i*i; j<N; j+=2*i)
                if(pf[j]==j)pf[j]=i;
}

