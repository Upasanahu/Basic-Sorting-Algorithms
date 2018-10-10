#include <iostream>
using namespace std;

int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	for(int i=0;i<15;i++){
		int min = arr[i];
		int index_min=i;
		for(int j=i+1;j<15;j++){
				if(arr[j]<min){
					min=arr[j];
					index_min=j;
				}
		}
		if(min != arr[i]){
			int temp = arr[index_min];
			arr[index_min] = arr[i];
			arr[i] = temp;
		}
	}
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0;     
}
