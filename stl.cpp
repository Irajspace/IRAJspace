#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int,4>a = {1,2,3,4};
    cout<<a.at(2);
    cout<<a.front();
}