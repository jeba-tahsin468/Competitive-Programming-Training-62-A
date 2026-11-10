#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(k>n){
        cout<<"Invalid window size." <<endl;
        return 0;
    }
    long long current_sum=0, max_sum=0;
    for(int i=0; i<k, i++){
        current_sum += a[i];

    }
    max_sum = current_sum;
    for(int i=k; i<n; i++){
        current_sum += a[i]-a[i-k];
        max_sum=max(max_sum, current_sum);

    }
    cout<<"Maximum sum of subarray of size" << k <<" is: "<<max_sum<<endl;
    return 0;
}