#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;

typedef pair<int,string> pi;

int main(void) {
    int t; cin>>t;
    while(t--) {
        int c[10]; for(int i=0; i<10; i++) cin>>c[i];
        int dd[10];
        int n; string en; cin>>n>>en;
        priority_queue<pi, vector<pi>, greater<pi>> q;
        unordered_set<int> cr; for(int i=0; i<10; i++) cr.insert(i);
        unordered_map<string,int> d;
        string st = "";
        d[st] = 0;
        q.push({d[st], st});
        while (!q.empty() && !cr.empty()) {
            pi curr = q.top(); q.pop();
            int cd = curr.first;
            string cs = curr.second;
            // cout << "cs: " << cs << ", cd: "<< cd<<'\n';
            // cout<<"cr: "; for(auto &se: cr) cout <<se<<' '; cout<<'\n';
            if (cs.size() == 1) {
                int dg = cs[0] - '0';
                dd[dg] = cd;
                cr.erase(dg);
            }
            for(int i=0; i<10; i++) {
                string ns = cs + to_string(i);
                int dns = cd + c[i];
                bool vs = d.count(ns);
                if (!vs || vs && dns < d[ns]) {
                    d[ns] = dns;
                }
                q.push({dns, ns});
            }
            int csn = cs.size();
            if (csn > 1) {
                int nd = (cs[csn-1] - '0' + cs[csn-2] - '0')%10; 
                string ns = cs + to_string(nd);
                int dns = cd;
                bool vs = d.count(ns);
                if (!vs || vs && dns < d[ns]) {
                    d[ns] = dns;
                }
            }
        }
        // cout<<"cr: "; for(auto &se: cr) cout <<se<<' '; cout<<'\n';
        // for(int i=0; i<10; i++) cout << i << ' '<<c[i]<<' '<<dd[i]<<'\n';
        int cc = 0;
        for(int i=0; i<n; i++) {
            cc += dd[en[i]-'0'];
        }
        cout << cc << endl;
    }
    return 0;
}