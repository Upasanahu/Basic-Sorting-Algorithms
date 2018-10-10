#include <iostream>
using namespace std;
/*
int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	for(int i=1;i<15;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0; 
}
*/
// recursive method
void insertionSortRec(int arr[],int n){
	if(n<=1)
		return;
	insertionSortRec(arr,n-1);
	int key = arr[n-1];
	int j = n-2;
	while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
	}
	arr[j+1] = key;
}
int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	insertionSortRec(arr,15);
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0;
}