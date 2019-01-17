#include<iostream>
using namespace std;
int deletea(int a[],int n,int pos){
	int count=n;
	for(int i=0;i<n;i++){
	if(i==pos-1){
		for(int j=i;j<n;j++){
			a[j]=a[j+1];
		}
		count--;
		break;
	}
	}
	return count;
}
int rduplicate(int a[],int n){
	int count =n;
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if((a[i]==a[j])&&j<count-1){
				cout<<endl<<"element going to be deleted is "<<a[j]<<" at place "<<j<<" and compared with "<<a[i]<<" at place "<<i <<endl;
				deletea(a,n,j+1);
				count--;
			}
		}
	}
	return count;
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int a[10]={6,3,8,9,3,7,2,1,5,4};
	display(a,10);
	int r;
	r=rduplicate(a,10);
	cout<<endl;
	display(a,r);
}
