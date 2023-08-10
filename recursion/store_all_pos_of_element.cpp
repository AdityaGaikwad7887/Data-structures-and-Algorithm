#include <stdc++.h>
using namespace std;

void checking (vector<int> a , int n , int x , int i , vector<int> &v){
    if (i == n){
        return ;
    }
    if (a[i] == x){
        v.push_back(i);
    }
    checking(a , n , x , i+1 , v);
    return ;
}

int main(){
    vector<int> u,v;
    int a,x;
    cin>>a;
    for (int i = 0 ; i < a ; i++)
    {
        cin>>x;
        u.push_back(x);
    }
    cout<<"Enter target : ";
    cin>>x;
    checking(u , u.size() , x , 0 , v );
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    return 0;
}