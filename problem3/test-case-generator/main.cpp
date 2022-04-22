#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
float getRandFloat() {
    return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
ll getRand(ll min, ll max) {
    return min + static_cast <ll>( getRandFloat() * ( max - min + 1 ) );
}
int main(void) {
    srand(time(NULL));
    ll n = getRand(1, 1e6);
    // ll n = getRand(1, 1e3);
    cout <<n<<'\n';
    for (int i=0; i<n; i++) {
        ll x = getRand(1, 1e6);
        // ll x = getRand(1, 1e3);
        // cout <<i<<' ';
        // cout <<n-i<<' ';
        cout <<x<<' ';
    }
    return 0;
}