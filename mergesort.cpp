#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int st,int mid,int end){
	vector<int> temp;
	int i=st, j=mid+1;
	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			i++;
		}else{
			temp.push_back(arr[j]);
			j++;
		}
	}
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=end){
		temp.push_back(arr[j]);
		j++;
	}
	for(int indx=0;indx<temp.size();indx++){
		arr[indx+st]=temp[indx];
	}
}
void mergesort(vector<int> &arr,int st,int end){
	if(st<end){
		int mid=(st+end)/2;
		mergesort(arr,st,mid);
		mergesort(arr,mid+1,end);
		merge(arr,st,mid,end);
	}
}
int main(){
	vector<int> arr={2,3,1,5,4};
	mergesort(arr,0,arr.size()-1);
	for(int val: arr){
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}