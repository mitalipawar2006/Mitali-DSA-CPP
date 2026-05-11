#include <iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"Enter no of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to be searched";
	cin>>key;
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"element found at index"<<i;
			return 0;
		}
	}
	cout<<"Element not found";
	return 0;
	
}


