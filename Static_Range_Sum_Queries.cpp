#include <iostream>
#include <vector>
using namespace std;

vector<long> getPrefixSum(vector<long> arr){
    vector<long> prefix(arr.size());

    if(arr.size()<=0){
        return prefix;
    }

    prefix[0] = arr[0];

    for(int i=1; i<arr.size(); i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    return prefix;
}

int main(){
    int n, q;
    cin >> n >> q;

    vector<long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<long> prefixSum = getPrefixSum(arr);

    while(q--){
        int a, b;
        cin >> a >> b;

        cout << prefixSum[b-1] - ((a>1)? prefixSum[a-2]: 0) << "\n";

    }

    return 0;
}