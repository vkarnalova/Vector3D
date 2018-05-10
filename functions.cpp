#include <iostream> 
#include <cstring>
#include <cstdlib>
#include "functions.h"
#include "vector3D.h"

void inputArray(Vector3D* array_of_vectors, int num_vectors) { //функция за въвеждане на векторите
	for (int i = 0; i < num_vectors; i++) {
		cin >> array_of_vectors[i];
	}
}
Vector3D inputArrayAndAddition(Vector3D* array_of_vectors, int num_vectors) { //функция, която се използва само ако трябва да се събират вектори
	Vector3D tempVec;                                                         //функцията ги въвежда и намира сбора им 
	for (int i = 0; i < num_vectors; i++) {
		cin >> array_of_vectors[i];
		tempVec = tempVec + array_of_vectors[i];
	}
	return tempVec;
}
Vector3D subtractionVectors(Vector3D* array_of_vectors, int num_vectors) { //функция, която намира разликата на вектори
	Vector3D tempVec = array_of_vectors[0];
	for (int i = 1; i < num_vectors; i++) {
		tempVec = tempVec - array_of_vectors[i];
	}
	return tempVec;
}
void negVectors(Vector3D* array_of_vectors, int num_vectors) { //функция, която извежда векторите с обратния им знак
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << -array_of_vectors[i] << " ";
	}
	cout << -array_of_vectors[num_vectors - 1];
}
void multVectorAndNum(Vector3D* array_of_vectors, int num_vectors, double mult) { //функция, която извежда вектор умножен с число
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << array_of_vectors[i] * mult << " ";
	}
	cout << array_of_vectors[num_vectors - 1] * mult;
}
void multNumAndVector(Vector3D* array_of_vectors, int num_vectors, double mult) { //функция, която извежда число умножено по вектор 
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << mult*array_of_vectors[i] << " ";
	}
	cout << mult*array_of_vectors[num_vectors - 1];
}
double get_double(char* number, char func) { //функция, която превръща низ в реално число
	char temp[18];
	temp[0] = func;
	int len = strlen(number);
	for (int i = 1; i < len + 1; i++) {
		temp[i] = number[i - 1];
	}
	return atof(temp);
}