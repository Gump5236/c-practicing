#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<string,string>m;
    pair<string,string>p1("Alfred","software");
    pair<string,string>p2("ALice","news");
    m.insert(p1);
    m.insert(p2);
    for(auto iter=m.begin(); iter!=m.end(); iter++)
    {
        cout<<iter->first<<" ";
        cout<<iter->second<<endl;
    }
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for(auto iter=vec.begin(); iter!=vec.end(); iter++)
    cout<<*iter;
    cout<<endl;
    string data;
    cin>>data;
    for(auto iter=data.begin(); iter!=data.end(); iter++)
    cout<<*iter;
    cout<<endl;
    return 0;
}
