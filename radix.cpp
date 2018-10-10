#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[],int n,int place)
{
        int i,freq[10]={0};         
        int output[n];
        for(i=0;i<n;i++)
                freq[(arr[i]/place)%10]++;
        for(i=1;i<10;i++)
                freq[i]+=freq[i-1];
        for(i=n-1;i>=0;i--)
        {
                output[freq[(arr[i]/place)%10]-1]=arr[i];
                freq[(arr[i]/place)%10]--;
        }
        for(i=0;i<n;i++)
                arr[i]=output[i];
}
void radixsort(int arr[],int n,int maxEl)            
{
        int mul=1;
        while(maxEl)
        {
                countsort(arr,n,mul);
                mul*=10;
                maxEl/=10;
        }
}
int main(){
        int A[20]={56,11,24,44,44,23,22,33,234,44,11,23,33,22,65,44,5,5,1,8};
        int K = 0;
        for(int i=0; i<20; i++) {
        K = max(K, A[i]);
         }
        radixsort(A,20,K);
        for(int i=0;i<20;i++){
        cout << A[i] <<" ";
        }
        return 0;
}