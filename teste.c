#include <stdio.h>
#include <stdlib.h>

int main () {
	
	printf("Hello World!\n");
	printf("I am learning C.\n");

	printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");

	// this is comment of single line
	
	/*
	 * this is comment multiple line
	 * */

	/*
	 * The code below will print the words Hello World!
	 * to the screen, and it is amazing 
	 *
	 * */

	// int 
	int age = 25;
	printf("%d\n", age);
	
	// float 
	float note = 6.5;
	printf("%f\n", note);

	// char
	char name[30] = "Rafael Andrade Lamonier\n";
	printf("%s", name);

	// subscribe value of variables
	int age2 = 26;
	printf("Idade com um novo atribuído: %d\n", age2);
	age2 = 30;
	printf("nova idade: %d\n", age2);	

	// using %i
	int testeI = 12;
	printf("%i\n", testeI);

	// testando operadores de tipos de variáveis
	// Create variables
	int myNum = 10;
	float myFloatNum = 5.99;
	char myLetter = 'D';

	// print variables
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);

	// Example
	int myNumTeste = 5;
	printf("My favorite number is: %d\n", myNumTeste);

	// testando 
    /*
        int myAge;
	    char myName[25];
	    printf("Digite sua idade: \n");
	    scanf("%d", &myAge);
	    printf("Agora digite seu nome: \n");
	    scanf(" %[^\t\n]s", myName);
	    printf("Seja bem vindo %s. Você tem %d anos de idade.\n", myName, myAge);
    */

    // somando os valores de duas variáveis
    // int x = 10, y = 20;
    // int result = x + y;
    // printf("%d\n", result);

    // variables names
    // Good
    // int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;


    // int => 2 ou 4 bytes
    // float 4 bytes 
    // double 8 bytes
    // char 1 byte
    
    // constantes
    const int minutesPerHour = 60;
    const float PI = 3.14;
    printf("%d\n", minutesPerHour);
    printf("%f\n", PI);
    // minutesPerHour = 120;
    // PI = 15.45;

    // example operators
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    // Arithmetic Operators
    // + => soma
    // - => subtração
    // * => multiplicação
    // % => Modulo (resto da divisão)
    // ++ => increment
    // -- => Decrement

    // Assignment Operators
    int x1 = 10;
    x1 += 5;
    printf("%d\n", x1); // output: 5
    
    // test new atribuition
    printf("testando o operador >>=\n");
    int x3 = 5;
    x3 >>= 3;
    printf("%d\n", x3);

    // using operator of comparation
    int y = 5;
    int k = 3;
    printf("%d\n", y > k);

    // operators logical
    int myInt2;
    float myFloat2;
    double myDouble;
    char myChar2;

    // size of types
    printf("size of each data type\n"); 
    printf("Inteiro\n");
    printf("%lu \n", sizeof(myInt2));
 
    printf("Ponto flutuante (float)\n");
    printf("%lu \n", sizeof(myFloat2));


    printf("Ponto flutuante (double)\n");
    printf("%lu \n", sizeof(myDouble));
 
    printf("charactere (char)\n");
    printf("%lu \n", sizeof(myChar2));

	return 0;
}
