vii fail(N);
 
void failure(string s)
{
    int i=1,j=0;
    while(i<s.size())
    {
        while(j>0&&s[i]!=s[j])
            j=fail[j-1];
        if(s[i]==s[j])j++;
        fail[i++]=j;
    }
}
int kmp(string s,string t)
{
    failure(t);
    int i=0,j=0;
    while(i<s.size())
    {
        while(j>0&&s[i]!=t[j])
            j=fail[j-1];
        if(s[i]==t[j])
            j++;
        if(j==t.size())
            return 1;
        i++;
    }
    return 0;
