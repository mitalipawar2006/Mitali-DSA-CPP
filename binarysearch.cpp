#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> arr, int target){
	int st=0,end=arr.size()-1;
	while(st<=end){
		int mid=(st+end)/2;
		if(target>arr[mid]){
			st=mid+1;	
		}
		else if(target<arr[mid]){
			end=mid-1;
		}
		else{
			return mid;
		}
	}
}
int main(){
	vector<int> arr1={1,2,3,4,5,6};
	int target1=4;
	cout<<bs(arr1,target1)<<endl;
	return 0;
}