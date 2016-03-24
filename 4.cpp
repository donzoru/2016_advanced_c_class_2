#include<iostream>
using namespace std;
class Bank{
public:
    Bank(int mo)
    {
        sum=mo;
    }
    void cz(int x,int y)
    {
        if(x) sum+=y;
        else sum-=y;
    }
    void show_money(Bank sb)
    {
        if(sum<0) cout<<"error"<<endl;
        else cout<<sb.sum<<endl;
    }
private:
    int a,sum;
};
int main()
{
    int id,y,m,d,mt,mo;
    cin>>id>>mo;
    Bank kk(mo);
    for(int i=0;i<3;++i)
    {
        cin>>id>>y>>m>>d>>mt>>mo;
        kk.cz(mt,mo);
    }
    kk.show_money(kk);
    return 0;
}
