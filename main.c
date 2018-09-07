//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

int main() {
    double number=0; //Declaration and initialization of the variable "number".
     double sum,average; //Declaration of the variables "sum" and "average"
    int i=-1; //Declaration and initialization of the variable "i".

    printf("This program will help you to calculate the average of a lot of numbers. \n ");
    printf("Insert '0' to Exit or to finalize the program.");
    do{

        printf("\ngive me a number: \n");
        scanf("%lf",&number); //variable "number" request
        sum=sum+number; //Here the program sum all the values of the variable "number".
        i++; //this part gives to the variable "i" +1 on its value
    }while(number!=0);
    //Basically, the loop ends when number is equals to 0


    if(i>=1) { //this way of the program works when the user inserts at least 1 number different of 0
        average = sum / i; //Operation of the average
        printf("The average is %lf \n", average);
        printf("The amount of the processed numbers is %d", i); //average output
    }
    else{ //This way works when the user doesn't insert a number.

        printf("You didn't give a number, bye bye");
    }
    return 0;
}