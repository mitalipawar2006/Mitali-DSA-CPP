#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	bool isswapped;
	for(int i=0;i<n-1;i++){
		 isswapped=false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				isswapped=true;
			}		    
		}
		if(!isswapped)
		break;
	}
}
void printarr(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int arr[]={1,4,3,2};
	int n=4;
	cout<<"original array:";
	printarr(arr,n);
	bubblesort(arr,n);
	cout<<"sorted array:";
	printarr(arr,n);
	return 0;
}