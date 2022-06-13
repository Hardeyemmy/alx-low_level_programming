#include <stdio.h>
#include <stdlib.h>
#include "main.h"
 
void connect()
{
    printf("Connected to C extension...\n");
}
 
//return random value in range of 0-50
int randNum()
{
    int nRand = rand() % 50; 
    return nRand;
}
 
//add two number and return value
int addNum(int a, int b)
{
    int nAdd = a + b;
    return nAdd;
}

//subtract two number and retain value
int subNum(int a, int b)
{
	int nSub = a - b;
	return nSub;
}

//multiply two numbers and return value
int mulNum(int a, int b)
{
	int nMul = a * b;
	return nMul;
}

//divide two numbers and return the value
int divNum(int a, int b)
{
	int nDiv = a / b;
	return nDiv;
}
