#include <iostream> 
#include <cstring>
#include <cstdlib>
#include "functions.h"
#include "vector3D.h"

void inputArray(Vector3D* array_of_vectors, int num_vectors) { //������� �� ��������� �� ���������
	for (int i = 0; i < num_vectors; i++) {
		cin >> array_of_vectors[i];
	}
}
Vector3D inputArrayAndAddition(Vector3D* array_of_vectors, int num_vectors) { //�������, ����� �� �������� ���� ��� ������ �� �� ������� �������
	Vector3D tempVec;                                                         //��������� �� ������� � ������ ����� �� 
	for (int i = 0; i < num_vectors; i++) {
		cin >> array_of_vectors[i];
		tempVec = tempVec + array_of_vectors[i];
	}
	return tempVec;
}
Vector3D subtractionVectors(Vector3D* array_of_vectors, int num_vectors) { //�������, ����� ������ ��������� �� �������
	Vector3D tempVec = array_of_vectors[0];
	for (int i = 1; i < num_vectors; i++) {
		tempVec = tempVec - array_of_vectors[i];
	}
	return tempVec;
}
void negVectors(Vector3D* array_of_vectors, int num_vectors) { //�������, ����� ������� ��������� � �������� �� ����
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << -array_of_vectors[i] << " ";
	}
	cout << -array_of_vectors[num_vectors - 1];
}
void multVectorAndNum(Vector3D* array_of_vectors, int num_vectors, double mult) { //�������, ����� ������� ������ ������� � �����
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << array_of_vectors[i] * mult << " ";
	}
	cout << array_of_vectors[num_vectors - 1] * mult;
}
void multNumAndVector(Vector3D* array_of_vectors, int num_vectors, double mult) { //�������, ����� ������� ����� �������� �� ������ 
	for (int i = 0; i < num_vectors - 1; i++) {
		cout << mult*array_of_vectors[i] << " ";
	}
	cout << mult*array_of_vectors[num_vectors - 1];
}
double get_double(char* number, char func) { //�������, ����� �������� ��� � ������ �����
	char temp[18];
	temp[0] = func;
	int len = strlen(number);
	for (int i = 1; i < len + 1; i++) {
		temp[i] = number[i - 1];
	}
	return atof(temp);
}