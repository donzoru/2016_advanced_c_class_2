#include<iostream>
using namespace std;
class jc{
public:
    void js(int n)
    {
        sum=1;
        for(int i=1;i<=n;++i)
            sum*=i;
        cout<<sum<<endl;
    };
private:
    int sum;
};
int main()
{
    int n;
    jc b;
    cin>>n;
    b.js(n);
    return 0;
}
