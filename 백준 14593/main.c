#include <stdio.h>

int main(void) {
    int n;
    int max = 0;
    int s[10001][3];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &s[i][0], &s[i][1], &s[i][2]);
    }
    for (int i = 0; i < n; i++) {
        if (s[i][0] > s[max][0]) {max = i;}
        else if (s[i][0] == s[max][0]) {
            if (s[i][1] < s[max][1]) {max = i;}
            else if (s[i][1] == s[max][1]) {
                if (s[i][2] < s[max][2]) {max = i;}
            }
        }
    }
    printf("%d", max+1);
}