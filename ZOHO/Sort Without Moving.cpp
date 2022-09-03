#include <bits/stdc++.h>
using namespace std;

void sortByheight(vector<int> a,int n){
    vector<int> b;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
            b.push_back(a[i]);
            
        }
    }
    sort(b.begin(), b.end());
     for(int i=0;i<n;i++){
         if(a[i]==-1){
             continue;
         }
         else{
             a[i]=b[j];
             j++;
         }
     }
      for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
}

int main()
{
   int n,t;
   vector<int> a;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>t;
       a.push_back(t);
   }
   
sortByheight(a,n);
    return 0;
}