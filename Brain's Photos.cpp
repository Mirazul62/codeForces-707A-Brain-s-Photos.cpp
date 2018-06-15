#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,i,j,count1=0,count2=0;
     char s[100][100];
     cin>>n>>m;
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {

             cin>>s[i][j];
          /*    if(s[i][j]=='W' && s[i][j]=='B' && s[i][j]=='G' )
            {
                count1++;

            }
            else
            {
                count2++;

            }*/
         }


     }
      for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='W' || s[i][j]=='B' || s[i][j]=='G' )
            {
                count1++;

            }
            else
            {
                count2++;

            }
         }
     }
    // cout<<count1<<" "<<count2;
     if(count2>0)
        cout<<"#Color" ;
     else
        cout<<"#Black&White" ;
}
