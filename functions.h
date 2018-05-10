#ifndef VECTOR3D_1_FUNCTIONS_H_
#define VECTOR3D_1_FUNCTIONS_H_

#include <iostream>
#include <cstring>
#include "vector3D.h"
using namespace std;

void inputArray(Vector3D* array_of_vectors, int num_vectors); //функция за въвеждане на векторите
	
Vector3D inputArrayAndAddition(Vector3D* array_of_vectors, int num_vectors);  //функция, която се използва само ако трябва да се събират вектори
	                                                                          //функцията ги въвежда и намира сбора им 
	
Vector3D subtractionVectors(Vector3D* array_of_vectors, int num_vectors); //функция, която намира разликата на вектори

void negVectors(Vector3D* array_of_vectors, int num_vectors); //функция, която извежда векторите с обратния им знак

void multVectorAndNum(Vector3D* array_of_vectors, int num_vectors, double mult); //функция, която извежда вектор умножен с число

void multNumAndVector(Vector3D* array_of_vectors, int num_vectors, double mult); //функция, която извежда число умножено по вектор 

double get_double(char* number, char func); //функция, която превръща низ в реално число
	
#endif
