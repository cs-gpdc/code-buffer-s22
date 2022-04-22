#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
    long long reward = 0;
    vector<int> s;
    for(int i=0; i<n; i++) {
        int prev = -1;
        for(int j=i-1; j>=0; j--) {
            if (a[j] > a[i]) {
                prev = j;
                break;
            }
        }
        long long count = i-prev;
        reward += count * a[i];
        s.push_back(i); 
    }
    cout << reward << endl;
    return 0;
}