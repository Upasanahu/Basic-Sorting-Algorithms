#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int start ,int end){
    int i = start-1;
    int piv = A[end];            
    for(int j=start;j<=end-1;j++){
		if(A[j] <= piv){
			i+=1;
            swap(A[i],A[j]);
        }
   }
   swap (A[i+1] ,A[end]); 
   for(int i=0;i<15;i++){
		cout << A[i] << " ";
	}
	cout << endl;
   return i+1;              
}
void quick_sort ( int A[] ,int start, int end ){
   if( start < end ){
   		cout << "partitioning around" << A[end] << endl;
         int piv_pos = partition (A, start, end) ; 
         quick_sort (A, start , piv_pos-1); 
         quick_sort ( A, piv_pos+1, end) ; 
   }
}
int main(){
	int A[15]={12,34,55,32,89,42,12,56,76,44,335,6,7,77,43};
	quick_sort(A,0,14);
	for(int i=0;i<15;i++){
		cout << A[i] << " ";
	}
	return 0;
}