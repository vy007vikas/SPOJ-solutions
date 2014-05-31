#include<iostream>
#include<cstdio>
#include<map>
using std::map;
using namespace std;
map<long long,long long> dpMap;

long long onconvert(long long no)
{
    if(dpMap.count(no))
        return dpMap[no];
    else
    {
        dpMap[no] = onconvert(no/2) + onconvert(no/3) + onconvert(no/4);
        return dpMap[no];
    }
}
int main()
{
    long long no,answer;
    for(int i=0;i<=11;i++)    dpMap[i]=i;
    while(scanf("%lld",&no) != EOF){
        answer = onconvert(no);
        printf("%lld\n",answer);
    }
    return 0;
}
