#include <bits/stdc++.h>
using namespace std;
int Aux[1000];
void counting_sort(int A[],int N) {

    int K = 0;
    for(int i=0; i<N; i++) {
        K = max(K, A[i]);
    }
 
    memset(Aux,0,sizeof(Aux));

    for(int i=0; i<N; i++) {
        Aux[A[i]]++;
    }
    int j = 0;
    for(int i=0; i<=K; i++) {
        int tmp = Aux[i];
        while(tmp--) {
            A[j] = i;
            j++;
        }
    }
}
int main(){
    int A[20]={56,11,24,44,44,23,22,33,234,44,11,23,33,22,65,44,5,5,1,8};
    counting_sort(A,20);
    for(int i=0;i<20;i++){
        cout << A[i] <<" ";
    }
    return 0;
}