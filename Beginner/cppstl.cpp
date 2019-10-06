#include<iostream>
#include<vector>
#include<set>

using namespace std;

void setdemo()
{
        set<int> s;
        s.insert(1);
        s.insert(2);
        s.insert(-1);
        s.insert(-10);
    for(int x:s)
    {
       cout<<x<<" ";

    }
    cout<<endl;

    auto it=s.find(-1);
    if(it==s.end())
    {
    cout<<"not present\n";
    }
    else
    {

        cout<<"present";
        cout<<*it<<endl;

    }

    auto it2=s.upper_bound(-1);

    auto it3=s.upper_bound(0);
    cout<<*it2<<" "<<*it3<<endl;

    auto it4=s.upper_bound(2);
    if(it4==s.end())
    {
        cout<<*it4;
        cout<<"oops soory cant find something"<<endl;
    }
}

int main()
{

setdemo();


    return 0;
}
