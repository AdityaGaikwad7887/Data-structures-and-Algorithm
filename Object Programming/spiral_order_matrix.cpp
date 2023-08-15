#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<vector<int>> vp;
    vector<int> v1,v2,v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    vp.push_back(v1);
    vp.push_back(v2);
    vp.push_back(v3);
    for (int i = 0; i < vp.size(); i++)
    {
        for (int j = 0; j < vp[i].size(); j++)
        {
            cout<<vp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    vector<int> ans;
    int m = vp.size();
    int n = vp[0].size();
    int sr=0,er=m-1,sc=0,ec=n-1;
    int count=0;


    while (sr<=er && sc<=ec)
    {
        for (int i = sc ; i <= ec && count <n*m ; i++)
        {
            ans.push_back(vp[sr][i]);
            count++;
        }
        sr++;
        for (int i = sr ; i <= er && count <n*m ; i++)
        {
            ans.push_back(vp[i][ec]);
            count++;
        }
        ec--;
        for (int i = ec ; i >= sc && count <n*m ; i--)
        {
            ans.push_back(vp[er][i]);
            count++;
        }
        er--;
        for (int i = er ; i>= sr && count <n*m ; i--)
        {
            ans.push_back(vp[i][sc]);
            count++;
        }
        sc++;
        if (count==m*n)
        {
            break;
        }        
               
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}


/*
input 
{
    [1,2,3]
    [4,5,6]
    [7.8.9]
}
output = 1,2,3,6,9,8,7,4,5
*/