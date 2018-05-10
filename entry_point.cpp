#include <iostream>
#include <cstring>
#include "vector3D.h"
#include "functions.h"

using namespace std;

const int MAX_SIZE = 10000;


int main() {
	Vector3D array_of_vectors[MAX_SIZE];
	char func;
	int number_of_vectors;
	cin >> func; 
	if (func == '+') {
		cin >> number_of_vectors;
		cout << inputArrayAndAddition(array_of_vectors,number_of_vectors);
	}
	else if (func == '-') {
		cin >> number_of_vectors;
		inputArray(array_of_vectors, number_of_vectors);
		cout << subtractionVectors(array_of_vectors,number_of_vectors);
	}
	else if (func == 'N') {
		char func_add[2];
		cin >> func_add;
		cin >> number_of_vectors;
		inputArray(array_of_vectors, number_of_vectors);
		negVectors(array_of_vectors, number_of_vectors);

	}
	else if (func == '*'){
		double multiplier;
		cin >> multiplier;
		cin >> number_of_vectors;
		inputArray(array_of_vectors, number_of_vectors);
		multVectorAndNum(array_of_vectors, number_of_vectors, multiplier);
	}
	else {
		char number[17];
		cin >> number;
		double multiplierTwo = get_double(number,func);
		cin >> number_of_vectors;
		inputArray(array_of_vectors, number_of_vectors);
		multNumAndVector(array_of_vectors, number_of_vectors, multiplierTwo);
	}
	system("pause");
	return 0;
}