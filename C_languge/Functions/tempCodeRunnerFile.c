int npr(int a,int b)
{
    int fa(int c);
    int l=fa(a)/fa(a-b);
    return l;
}
int fa(int c)
{
    int m=1;
    for(int p=1;p<=c;p++)
    {
        m=m*p;
        
    }
    return m;
}
