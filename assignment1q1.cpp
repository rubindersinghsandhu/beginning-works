#include<iostream>
using namespace std;
int* create(int *array){
	cout<<"Enter the number of values you want to store in array";
	int n;
	cin>>n;
	int a[n];
	array=a;
}
void display(){
}
void insert(){
}
void deletea(){
}
void search(){
}
int main(){
	int n=1,*array;
	while (n!=6){
	    cout<<"----MENU----"<<endl<<"1. CREATE"<<endl<<"2. DISPLAY"<<endl<<"3. INSERT"<<endl<<"4. DELETE"<<endl<<"5. SEARCH"<<endl<<"6. EXIT"<<endl;
	    cin>>n;
	    switch(n){
	    	case 1:
	    		array=create(array);
	    		break;
	    	case 2:
	    		display();
	    		break;
			case 3:
	    		insert();
	    		break;
			case 4:
	    		deletea();
	    		break;
			case 5:
	    		search();
	    		break;
			case 6:
	    		break;
			default:
			cout<<"you entered a wrong value ";
			n=7; 		
		}
    }
}
