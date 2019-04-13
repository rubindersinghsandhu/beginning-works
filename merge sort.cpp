#include<iostream>
using namespace std;
void merge(a[],n1,ind1,b[],n2,ind2,c[],ind){
	while (n1 != 0 && n2 != 0) {
		if (a[ind1] > b[ind2]) {
			c[ind] = b[ind2];
			ind++;
			ind2++;
			n2--;
		}
		else {
			c[ind] = a[ind1];
			ind++;
			ind1++;
			n1--;
		}
	}
	while (n1) {
		c[ind] = a[ind1];
		ind++;
		ind1++;
		n1--;
	}
	while (n2) {
		c[ind] = b[ind2];
		ind++;
		ind2++;
		n2--;
	}
}
void mergepass(first[],n,l,2bereturn[]){
	int q = n / (2 * l),s=2*l*q,r=n-s ;
	for (int j = 0; j < q; j++) {
		lb = 2 * j*l;
		merge(first[n], n, lb, first[n], n, lb + l, 2breturn[n], lb);

		if (r <= l) {
			for (j = 0; j < r; j++) {
				2breturn[s + j] = first[s + j];
			}
		}
		else {
			merge(first[n],l,s+1,first[n],r,l+s,2bereturn[n],s+1)
		}
	}
	
}
void mergeallocate(org[],n){
	int l = 1,b[n];
	while (l < n) {
		mergepass(org[n], n, l, b[n]);
		mergepass(b[n], n, 2 * l, org[n]);
		l = l * 4;
	}
}
int main() {
	int array[10] = { 34,64,21,99,65,77,44,323,78,54 };
	cout << "old array is" << endl;
	for (int i = 0; i < 10; i++) {
		cout <<"\t"<< array[i];
	}
	mergeallocate(array[10], 10);
	cout << "\n new array is" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "\t"<<array[i];
	}
}