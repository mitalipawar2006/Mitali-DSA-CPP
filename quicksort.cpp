#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int st,int end){
	int indx=st-1,pivit=arr[end];
	for(int j=st;j<end;j++){
		if(arr[j]<=pivit){
			indx++;
			swap(arr[j],arr[indx]);
		}
	}
	indx++;
	swap(arr[end],arr[indx]);
	return indx;	
}
void quicksort(vector<int> &arr,int st,int end){
	if(st<end){
		int pivindx=partition(arr,st,end);
		quicksort(arr,st,pivindx-1);
		quicksort(arr,pivindx+1,end);
	}
}
int main(){
	vector<int> arr={2,3,1,5,4};
	quicksort(arr,0,arr.size()-1);
	for(int val:arr){
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}