#include<iostream>
#include<cstdio>
using namespace std;
class Rect{
public:
    Rect(double ica,double ika)
    {
        ca=ica;
        ka=ika;
    }
    void soal()
    {
        sq=ca*ka;
        s=(ca+ka)*2;
        printf("%.1lf %.1lf %.1lf %.1lf\n",ca,ka,s,sq);
    }
private:
    double ca,ka,sq,s;
};
int main()
{
    double a,b;
    cin>>a>>b;
    Rect kk(a,b);
    kk.soal();
    return 0;
}
