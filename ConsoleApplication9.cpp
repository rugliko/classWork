

#include <iostream>
using namespace std;
int main()
{
	/*int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b > a) { a = b; }
	if (c > a) { a = c; }
	if (d > a) { a = d; }
	cout << a;*/
	/*for (int min = -25, max = 0; min < max; max -= 3) {
		cout << max;
	}*/
	/*int n = 1, counter = 0, x = 0;
	while (n != 0) {
		cin >> n;
		counter += n;
		x++;

	}
	cout << counter/x;*/
	int array[10];
	int min, max;
	cin >> min >> max;
	if (min > max) { swap(min, max); }
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % (max - min + 1) + min;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

}
