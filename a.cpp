#include <bits/stdc++.h>
using namespace std;

int n, res, h[1010], l[1010], x[1010], y[1010];
char s[1010][1010];

signed main () {

	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", s[i] + 1);
		for(int j = 1; j <= n; j++) {
			cout << i - j + n << "\n";
			if(s[i][j] == '*')
				h[i] = l[j] = x[i + j] = y[i - j + n] = 1;
		}
	}
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(h[i] == 0 and l[j] == 0 and x[i + j] == 0 and y[i - j + n] == 0)
				res++;
	printf("%d\n", res);


	return 0;
}
