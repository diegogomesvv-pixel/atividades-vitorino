#include <iostream> 

int soma(int a, int b)
{
return a + b;

}

int subtracao(int a, int b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b) 
{
    return a / b ;
}

int main()
{
    int resultado1 = soma (5,10);
int resultado2 = subtracao (5,10);
int resultado3 = multiplicacao (5,10);
int resultado4 = divisao (5,10);



std:: cout <<"o resultado da cauculo = " << resultado1<< std:: endl;
std:: cout <<"o resultado da cauculo = " << resultado2<< std:: endl;
std:: cout <<"o resultado da cauculo = " << resultado3<< std:: endl;
std:: cout <<"o resultado da cauculo= " << resultado4<< std:: endl;
}