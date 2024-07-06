#include<iostream>
#include<vector>
using namespace std;
long long dp[51][1001];
int main()
{
    long long C,N,M;
    cin>>C>>N>>M;
    for(int i=0;i<N;i++)
    {
        long long a;cin>>a;
        dp[0][a]++;
    }
    vector<long long>q;
    for(int i=0;i<M;i++)
    {
        long long a;cin>>a;
        q.push_back(a);
    }
    for(int day=0;day<50;day++)
    {
         for(int i=1;i<=C;i++)
         {
             if(i<=C/2)
             {
                 dp[day+1][2*i]+=dp[day][i];
             }
             else
             {
                 dp[day+1][i]+=2*dp[day][i];
             }
         }
    }
    for(int i=0;i<M;i++)
    {
        long long ans=0;
        for(int j=0;j<=C;j++)ans+=dp[q[i]][j];
        cout<<ans<<"\n";
    }
}
