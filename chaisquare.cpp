#include<iostream>
using namespace std;
int rand(int y, int a, int b, int m) {
	int r = 0;
	r = (a*y + b) % m;
	return r;
}
void display(int arr[], int m) {
	int i = 0;
	while (i < m) {
		cout << "random number " << arr[i] << endl;
		i++;
	}
}
void chaisquare(int arr[], int m) {
	int x = -1, y = 10, i = 0, count = 0, d[10];
	for (int j = 0; j < m / 10; j++) {
		count = 0;
		while (i < m) {
			if (arr[i] > x && arr[i] <= y) {
				count++;
			}
			i++;
		}
		d[j] = (10 - count)*(10 - count);
		x += 10;
		y += 10;

	}
	int sum = 0;
	for (int j = 0; j < m / 10; j++) {
		sum += d[j];
	}
	int csq = sum / 10;
	cout << "the chai square value is " << csq << endl;
}
int main() {
	int x = 0, y = 0, a, b, ran[100], m = 0, n = 1;
	while (n) {
		cout << "if you want to generate a new set of number enter 1 else 0";
		cin >> n;
		if (n) {
			cout << endl << "enter value of a";
			cin >> a;
			cout << endl << "enter value of b";
			cin >> b;
			cout << endl << "enter value of initial random number y";
			cin >> y;
			cout << endl << "enter value of range max m";
			cin >> m;
			for (int i = 0; i < m; i++) {
				ran[0] = y;
				ran[i] = rand(ran[i - 1], a, b, m);
			}
			display(ran, m);
			cout << endl << m << endl;
			chaisquare(ran, m);
		}
	}

}
