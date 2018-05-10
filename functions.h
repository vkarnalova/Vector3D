#ifndef VECTOR3D_1_FUNCTIONS_H_
#define VECTOR3D_1_FUNCTIONS_H_

#include <iostream>
#include <cstring>
#include "vector3D.h"
using namespace std;

void inputArray(Vector3D* array_of_vectors, int num_vectors); //������� �� ��������� �� ���������
	
Vector3D inputArrayAndAddition(Vector3D* array_of_vectors, int num_vectors);  //�������, ����� �� �������� ���� ��� ������ �� �� ������� �������
	                                                                          //��������� �� ������� � ������ ����� �� 
	
Vector3D subtractionVectors(Vector3D* array_of_vectors, int num_vectors); //�������, ����� ������ ��������� �� �������

void negVectors(Vector3D* array_of_vectors, int num_vectors); //�������, ����� ������� ��������� � �������� �� ����

void multVectorAndNum(Vector3D* array_of_vectors, int num_vectors, double mult); //�������, ����� ������� ������ ������� � �����

void multNumAndVector(Vector3D* array_of_vectors, int num_vectors, double mult); //�������, ����� ������� ����� �������� �� ������ 

double get_double(char* number, char func); //�������, ����� �������� ��� � ������ �����
	
#endif
