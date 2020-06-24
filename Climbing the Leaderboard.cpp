#include <bits/stdc++.h>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,x,i,j,k,temp,rank = 1,size;
    cin>>n;
    
    cin>>temp;
    int arr[n];
    arr[0] = temp;
    for(i=1;i<n;i++){
        cin>>x;
        if(x!=temp){
            arr[rank] = x;
            rank++;
            temp = x;
        }
    }
    size = rank;
    rank++;
    bool zero = false;

    cin>>m;
    temp = size -1;
    rank = size+1;
    for(i=0;i<m;i++){
        
        cin>>x;
        for(j=temp;j>=0;j--){
            if(x<arr[j]){
                zero = false;
                cout<<rank<<endl;
                temp = j;
                break;
            }
            else{
                rank--;
                zero = true;
            }
        }
        if(zero){
            cout<<1<<endl;
        }

    }

    
    
    return 0;
}
