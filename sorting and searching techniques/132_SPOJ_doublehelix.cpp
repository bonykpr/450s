#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX = 10009;
int A[MAX], B[MAX];

int main() {
        int na, nb, i, j;
        while(scanf("%d", &na)==1 && na) {
                for(i=1; i<=na; i++) scanf("%d", &A[i]);
                scanf("%d", &nb);
                for(j=1; j<=nb; j++) scanf("%d", &B[j]);
                for(i=j=1; i<=na || j<=nb; ) {
                        if(i<=na && j<=nb && A[i]==B[j]) {
                                A[i] += A[i-1];
                                B[j] += B[j-1];
                                A[i] = B[j] = max(A[i], B[j]);
                                i++, j++;
                        }
                        else if(i>na) {
                                B[j] += B[j-1];
                                j++;
                        }
                        else if(j>nb) {
                                A[i] += A[i-1];
                                i++;
                        }
                        else if(A[i] < B[j]) {
                                A[i] += A[i-1];
                                i++;
                        }
                        else if(A[i] > B[j]) {
                                B[j] += B[j-1];
                                j++;
                        }
                }
                printf("%d\n", max(A[na], B[nb]));
        }
        return 0;
}



// 3 3 5 7 9 20 25 30 40 55 56 57 60 62
//11 1 4 7 11 14 25 44 47 55 57 100
//4 -5 100 1000 1005
//3 -12 1000 1001
//0
