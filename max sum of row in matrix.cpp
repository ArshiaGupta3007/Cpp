#include<iostream>
using namespace std;
int maxsum(int arr[][]){
	
}
int main(){
	int m,n;
	cout<<"No of rows : ";
	cin>>m;
	cout<<"No of columns : ";
	cin>>n;
	int arr[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int maxsum=0;
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			
			
		sum=sum+arr[i][j];
			
		}
		if(sum>maxsum){
			maxsum=sum;
		}
	}
	
	cout<<maxsum;
	}