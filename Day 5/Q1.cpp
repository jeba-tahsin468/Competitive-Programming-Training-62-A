#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int left=0, right=n-1;
    bool found=false;
    while(left<right){
        long long current_sum = a[left]+a[right];
        if(current_sum==target){
            cout<<"Pair Found: "<<a[left]<<" and "<<a[right]<<endl;
            found=true;
            break;
        }
        else if(current_sum<target){
            left++;
        }
        else{
            
            right--;
        }
    }
    if(!found){
        cout<<"No Pair exists that sum to "<<target<<endl;

    }
    return 0;
}