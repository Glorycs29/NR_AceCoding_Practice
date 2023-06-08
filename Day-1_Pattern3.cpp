#include<bits/stdc++.h>
using namespace std;

/*

          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************
 *******************

*/


int main(){
    int n; cin>>n;
    
    // n-i spaces and then i star
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}