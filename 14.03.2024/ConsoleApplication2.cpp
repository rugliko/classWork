﻿
using namespace std;
#include <iostream>

int main()
{
    
   // int array[3][4] = { {1,0,2,1},
   //                     {1,0,2,1},
   //                     {1,0,2,1} };
  //  for (int j = 0; j<4; j++) {
    //    cout << array[2][j]<<" ";


//}
   
  //  const int SIZE1 = 5;
  //      const int SIZE2 = 5;
   //    int array[SIZE1][SIZE2];
   //     for (int i = 0, counter = 1; i < SIZE1; i++) {
   //         for (int j = 0; j < SIZE2; j++) {
   //             array[i][j] = counter;
   //             counter += 2;
   //             cout << array[i][j]<<"\t";
   //         }
   //     
   //         cout << endl;
  //      }
/*	const int SIZE1 = 3;
	const int SIZE2 = 6;
	int array[SIZE1][SIZE2]{};
	int n = 0;
	for (int i = 0, count = 1, start = 0; i <= SIZE2; i++) {
		if (i == SIZE2) {
			if (n == SIZE1 * SIZE2) break;
			i--;
			start++;
		}
		for (int j = i, indexI = start; j >= 0 && indexI < SIZE1; j--) {
			array[indexI++][j] = count++;
			n++;
		}

	}

	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}*/
	const int SIZE1 = 100;
	const int SIZE2 = 100;
	int array[SIZE1][SIZE2]{};
	int n = 0;
	int indI = 0;
	int indJ = SIZE2 - 1;
	int indI2 = SIZE1 - 1;
	int indJ2 = 0;
	while (n < SIZE1 * SIZE2) {

		for (int i = indJ2; i < SIZE2 && array[indI][i] == 0; i++) {
			array[indI][i] = n++;
		}
		indI++;
		for (int i = indI; i < SIZE1 && array[i][indJ] == 0; i++) {
			array[i][indJ] = n++;
		}
		indJ--;
		for (int i = indJ; i >= 0 && array[indI2][i] == 0; i--) {
			array[indI2][i] = n++;
		}
		indI2--;
		for (int i = indI2; i >= indI && array[i][indJ2] == 0; i--) {
			array[i][indJ2] = n++;
		}
		indJ2++;
	}

	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}


	
}