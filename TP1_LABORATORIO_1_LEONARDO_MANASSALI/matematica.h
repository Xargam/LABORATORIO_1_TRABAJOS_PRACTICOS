#ifndef MATEMATICA_H_INCLUDED
#define MATEMATICA_H_INCLUDED

float add(float A, float B);
float divide(float A, float B);
float subtract(float A, float B);
float multiply(float A, float B);
int factorial(int A);
void indexGenerator(int totalOptions,...);
void rangedGetInt(int* number,int minimum,int maximum,char message[],char errorMessage[]);

#endif
