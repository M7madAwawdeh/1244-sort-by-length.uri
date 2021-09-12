#include<bits/stdc++.h>
using namespace std;
struct d{
string name;
int num,in;
};
bool comp(const d &a, const d &b)
{
    if(a.num==b.num)
        return a.in < b.in;
    return a.num > b.num;
}


int main()
{
string a,w;
int n;
cin >> n;
string line;
getline(cin,line);
while(n--){
stringstream ss;

getline(cin,a);
ss<<a;
d an;
vector<d> v;
int j=0;
while(ss>>w)
{
    an.name =w;
    an.num = w.size();
    an.in =j;
    v.push_back(an);
    j++;
}
sort(v.begin(), v.end(),comp);
cout<<v[0].name;
for(int i=1; i<v.size();i++)
{
    cout<<" "<<v[i].name;
}
cout<<endl;

}



return 0;
}
