#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
	for(int i=1;i<n;i++){
		int currel=arr[i];
		int previndx=i-1;
		while(previndx>=0&&arr[previndx]>currel){
			arr[previndx+1]=arr[previndx];
			previndx--;
		}
		arr[previndx+1]=currel;
	}
}
void printarr(int arr[],int n){
	for(int i=0;i<n;i++){
	 cout<<arr[i];
	}
}
int main(){
	int arr[]={4,2,1,3,5};
	int n=5;
	insertionsort(arr,n);
	cout<<"sorted arr is:"<<endl;
	printarr(arr,n);
	return 0;
}