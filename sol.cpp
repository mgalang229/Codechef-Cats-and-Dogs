#include <bits/stdc++.h>

using namespace std;

long long c, d, l, n1, mn, mx;

void solve(){	
	cin >> c >> d >> l;
	if(l % 4 == 0){
		mn = 4 * (d + max((long long)0, c - 2 * d));
		mx = 4 * (d + c);
		if(l >= mn && l <= mx){
			cout << "yes\n";
		} else{
			cout << "no\n";
		}
	} else{
		cout << "no\n";
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}