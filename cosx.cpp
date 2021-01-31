#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,m;
    double y;
    for(y=1; y>=-1; y-=0.1)
    {
        m=acos(y)*10;
        for(x=1; x<m; x++)cout<<" ";
        cout<<"*"<<endl;
        for(; x<62-m; x++)cout<<" ";
        cout<<"*"<<endl;
    }
    return 0;
}
