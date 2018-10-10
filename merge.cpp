#include <bits/stdc++.h>
using namespace std;
void merge(int A[ ] , int start, int mid, int end) {
	int p = start ,q = mid+1;
	int Arr[end-start+1] , k=0;

	for(int i = start ;i <= end ;i++) {
    	if(p > mid)     
       		Arr[k++] = A[q++] ;
   		else if (q > end)     
   			Arr[k++] = A[p++];

   		else if(A[p] < A[q])          
   			Arr[k++] = A[p++];
   		else
      		Arr[k++] = A[q++];
 	}
  	for (int p=0 ; p< k ;p ++) 
     	A[start++] = Arr[p] ;                          
}
void merge_sort (int A[ ] , int start , int end ){
           if( start < end ) {
           	int mid = (start + end ) / 2 ;       
           	merge_sort (A, start, mid ) ;       
           	merge_sort (A, mid+1, end ) ;        
          	merge(A, start, mid, end );   
   }                    
}
int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	merge_sort(arr,0,14);
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0;
}
