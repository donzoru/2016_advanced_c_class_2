#include<iostream>
using namespace std;
class Time{
public:
    void ti(int a,int b,int c){
        h=a; m=b; s=c;
    }
    void sh12(){
        cout<<h%12<<' '<<m<<' '<<s<<endl;
    }
    void sh24(){
        cout<<h<<' '<<m<<' '<<s<<endl;
    }
private:
    int h,m,s;
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=24 || b>=60 || c>=60) cout<<"error"<<endl;
    else
    {
        Time kk;
        kk.ti(a,b,c);
        kk.sh12();
        kk.sh24();
    }
    return 0;
}
