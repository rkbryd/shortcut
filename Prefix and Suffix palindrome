
int fail[2000005];
void failure(string a)
{
    int i=1,j=0;
    while(i<a.size())
    {
        while(j>0&&a[i]!=a[j])
            j=fail[j-1];
        if(a[i]==a[j])
            j++;
        fail[i++]=j;
    }
}

int kmp(string text,string pat,int ok)
{
    if(ok==1)///suffix palindrome
    reverse(pat.begin(),pat.end());
    
    if(ok==0)///prefix palindrome
    reverse(text.begin(),text.end());
    
    failure(pat);
    int i=0,j=0;
    while(i<text.size())
    {
        while(j>0&&text[i]!=pat[j])
            j=fail[j-1];
        if(text[i]==pat[j])
            j++;
        if(j==pat.size()&&i+1!=text.size())
        {
            j=fail[j-1];
        }
        i++;
    }
    return j;
}
