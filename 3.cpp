#include<iostream>
#include<cstring>
const char ts[8]={"iloveu"};
using namespace std;
class String{
public:
    String()
    {
        strcpy(str,ts);
    }
    String(int k,char *a,int m)
    {
        strcpy(str,a);
        if(m>k) cout<<str<<' '<<"error"<<endl;
        else cout<<str<<' '<<*(str+m)<<endl;
    }
    void get(int m)
    {
        cout<<str<<' '<<*(str+m)<<endl;
    }
private:
    char str[20];
};
int main()
{
    int a,b;
    char s[20];
    cin>>a;
    if(a>0)
    {
        cin>>s>>b;
        String k1(a,s,b);
    }
    if(a==0)
    {
        String k2;
        cin>>b;
        k2.get(b);
    }
    return 0;
}
