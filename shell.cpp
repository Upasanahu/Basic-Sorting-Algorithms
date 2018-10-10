#include <bits/stdc++.h>
using namespace std;

void shell_sort(int arr[],int n){
	int gap,i,j;
	for(gap=n/2;gap>0;gap/=2){
		cout << "gap of " << gap << endl;
		for(i=gap;i<n;i++){
			int temp = arr[i];
			for(j=i;j>=gap && arr[j-gap] > temp;j-=gap)
				arr[j] = arr[j-gap];
			arr[j]=temp;
			for(int i=0;i<15;i++)
				cout << arr[i] << " ";
			cout << endl;
		}
	}
}
int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	shell_sort(arr,15);
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0;
}