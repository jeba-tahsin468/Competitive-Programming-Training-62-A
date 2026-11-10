#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;

    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    int left=0, max_len=0;
    long long current_sum=0;

    for(int right=0; right<n; right++){
        current_sum+=a[right];

        while(current_sum>s && left<=right){
            current_sum -= a[left];
            left++;
        }
        max_len = max(max_len, right - left + 1);

    }
    cout<<"Longest subarray length with sum<=" << s << " is: " << max_len << endl;

    return 0;


}