#include <iostream>
using namespace std;

int main(){
	int arr[15] = {24,756,33,90,654,66,78,34,56,83,23,65,13,4,43};
	for(int i=0;i<14;i++){
		for(int j=0;j<14-i;j++){
				if(arr[j+1]<arr[j]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
		}
	}
	for(int i=0;i<15;i++)
		cout << arr[i] << " ";
	return 0;     
}
