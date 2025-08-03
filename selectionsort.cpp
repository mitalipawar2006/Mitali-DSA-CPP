#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	for(int i=0;i<n;i++){
		int indxofmin=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[indxofmin]){
				 indxofmin=j;
			}
		}
		swap(arr[i],arr[indxofmin]);
	}
	
}
int printarr(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={3,1,4,5,2};
	int n=5;
	cout<<"original arr is:"<<endl;
	printarr( arr, n);
	selectionsort(arr,n);
	cout<<endl;
	cout<<"sorted arr is:"<<endl;
	printarr( arr, n);
	return 0;
}