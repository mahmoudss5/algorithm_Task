#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin>>n;
 int a[n][n];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin>>a[i][j];
        }
    }
    int idx=n-1;
    int idy=0;
    int sum1{};
    int sum2{};
    for (int i = 0; i <n ; ++i) {
        sum1+=a[i][idy];
        idy++;
        sum2+=a[i][idx];
        idx--;
    }
 cout<<abs(sum1-sum2)<<endl;
return 0;
}
