#include<bits/stdc++.h>
using namespace std;
int sumCounter(vector<int>a,int sz);
int main()
{
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<sumCounter(a,n);
    return 0;
}
int sumCounter(vector<int>a,int sz)
{
    if(sz==1)return a[sz-1];
    return a[sz-1]+sumCounter(a, sz-1);


}
