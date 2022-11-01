#include <stdio.h>
#define SWAPE(x, y, temp) ((temp)=(x), (x)=(y), (y)=(temp))

int main() {
	int n;
	int a[100001][2];
	int temp;
	int c, p;

	scanf("%d", &n);
	for (int i=1; i<=n; i++) 
        scanf("%d %d", &a[i][0], &a[i][1]);

	for (int i=2; i<=n; i++){
		c = i;
		p = c / 2;
		while (p > 0) {
			if (a[c][1] > a[p][1] || (a[c][1] == a[p][1] && a[c][0] > a[p][0])){
                SWAPE(a[p][0], a[c][0], temp);
                SWAPE(a[p][1], a[c][1], temp);
			}
			c /= 2;
			p /= 2;
		}
	}

	for (int i=0; i<n-1; i++){
        SWAPE(a[1][0], a[n-i][0], temp);
        SWAPE(a[1][1], a[n-i][1], temp);

		c = 2;
		p = 1;

		while (c < n-i){
			if (c+1<n-i && (a[c+1][1]>a[c][1] || (a[c+1][1] == a[c][1] && a[c+1][0]>a[c][0]))) 
                c += 1;
			if (a[c][1]>a[p][1] || (a[c][1]==a[p][1] && a[c][0]>a[p][0])){
                SWAPE(a[p][0], a[c][0], temp);
                SWAPE(a[p][1], a[c][1], temp);
			}
			p = c;
			c *= 2;
		}
	}

	for (int i=1; i<=n; i++) 
        printf("%d %d\n", a[i][0], a[i][1]);
}