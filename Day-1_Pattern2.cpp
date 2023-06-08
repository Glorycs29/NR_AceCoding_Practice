#include<bits/stdc++.h>
using namespace std;
/*

     *
    **
   ***
  ****
 *****

*/

int main(){
    int n; cin>>n;
    int counter=1;
    for(int i=n;i>0;i--){
        //cout<<" ";
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            int temp=counter;
            while(temp--){
                    cout<<"*";
                    //counter--;
            }
            
        counter++;
        cout<<"\n";    
    }
    
    return 0;
}