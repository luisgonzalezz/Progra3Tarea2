#include "Evaluador.h"
#include <iostream>
#include <math.h>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    int valor=*ptr; //desreferencia ptr
    return valor; //retorna valor
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    int suma=*a+*b; //Hace la suma de a* y b*
    return suma;  //devuelve suma
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b) //condicion si ambos son iguales
    return true; //devuelve true si es verdader la condicion
    return false;//devuelve falso si no.
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    string v1=*a; //desreferencia
    string v2=*b;
    if(v1==v2)  //condicion si ambos son iguales
    return true; //si es verdadero
    return false; //si es falso
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    string letra=*a; //desreferencia

    return letra[0]; //retorna la primera letra
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{    string texto=*a; //desreferencia *a
     string texto2= string(texto.rbegin(),texto.rend());  //http://stackoverflow.com/questions/7199241/reversing-a-string-in-c-using-a-reverse-iterator
     if(texto==texto2) //condicion si ambos son iguales
        return true; //retorna true
    return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int base1=*base; //Desreferencia
    int exponente1=*exponente;
    int result= pow(base1,exponente1); //http://www.forosuse.org/forosuse/showthread.php?t=29119

    return result; //retorna el resultado
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
