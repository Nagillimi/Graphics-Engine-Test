#include "matrixMath.h"
//#include <stdio.h>

int findM(int matrix[][]) {

	int matrixM = 0;
	while(matrix[matrixM][] != NULL) {
		matrixM++;
	}
	return matrixM[][];
}

int findN(int matrix[][]) {

	int matrixN = 0;
	while(matrix[][matrixN] != NULL) {
		matrixN++;
	}
	return matrixN[][];
}

int matrixInput(int m, int n) [][] {

	int matrix[m][n];

	for(int j=0; j<n; ++j) {
		for(int i=0; i<m; ++i) {
			std::cout << "[" << i << "]" << "[" << j << "] = ";
			std::cin >> matrix[i][j];
			std::cin >> endl;
		}
	}
	return matrix;
}

int matrixMult(int a, int b) [][] {

	int am, an, bm, bn;
	am = findM(a[][]);
	an = findN(a[][]);
	bm = findM(b[][]);
	bn = findN(b[][]);

	if(an != bm) {
		std::cout << "\nMatricies cannot be multiplied\n";
		return -1;
	}

	int matrix[an-1][bm-1];

	for(int v=0; v<bm; ++v) {
		for(int u=0; u<an; ++u) {
			for(int i=0; i<an; ++i) {
				matrix[u][v] += a[i][u]*b[v][i];
			}
		}
	}
	return matrix;
}

void matrixPrint(int matrix[][]) {

	int m, n;
	m = findM(matrix[][]);
	n = findN(matrix[][]);

	for(int j=0; j<n; ++j) {
		for(int i=0; i<m; ++i) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << endl;
	}
}

int matrixTranspose(int matrix[][]) {

	int  m, n;
	m = findM(matrix[][]);
	n = findN(matrix[][]);

	int newMatrix[n-1][m-1];

	if(n == 1) { 				// Not sure if this is needed!
		for(int i=0; i<m; ++i) {
			newMatrix[i][0] = matrix[0][i];
		}
	}
	else {
		for(int j=0; j<n; ++j) {
			for(int i=0; i<m; ++i) {
				newMatrix[i][j] = matrix[j][i];
			}
		}
	}
	return newMatrix;
}

//int matrixInverse[][](int matrix[][]) {}
