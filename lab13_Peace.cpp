/*
lab 13: pointer, function, array application
McKenna Cruz - Peace
june 16, 2025
*/

#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>
const int ARRAY_SIZE = 5;
const int SIZE_ROW = 2;
const int SIZE_COL = 3;

#include "lab13_Peace_functions.cpp"

using namespace std;

int main(){


cout<<"----------------Example 1: points and references--------"<<endl;

pointer_ref();

cout<<"----------------Example 2: points and references in functions--------"<<endl;

string something = "Hello World";
printvalue(something);
printbyref(something);
printaddress(&something);

cout<<"----------------Example 3: points and references in any array--------"<<endl;

pointer_array();




cout<<"----------------Example 4: passing an array using derefences --------"<<endl;

    int array_size = 3;
    int arr_nums[array_size];
    fillUp(array_size, arr_nums);

    printelements(array_size, arr_nums);

    
cout<<"----------------Example 5: searching a value --------"<<endl;

    int a[ARRAY_SIZE];
    int listsize;
    int searchnumber;

    fillarray(a, listsize);
    printelements(listsize, a);
    int search_number = search(a, listsize, searchnumber);
    cout<<"What is the index of the number "<<searchnumber<<"? = "<<search_number<<endl;;
cout<<"----------------Example 6: 2d array --------"<<endl;

    array_2d();

    
cout<<"----------------Example7: passing 2d array into function --------"<<endl;



    int numbers_2d[SIZE_ROW][SIZE_COL];
    fillup_2d(numbers_2d);
    print_2d(numbers_2d);
    int total_even = count_even(numbers_2d);
    cout<<"There is a total of "<< total_even<< " even numbers"<<endl;

cout<<"----------------Exercise 1 function that fins and returns the maximum number --------"<<endl;

    int maxnumber = findmax(a);
    cout<<"The maximum number is "<<maxnumber<<endl;

cout<<"----------------Exercise 2 --------"<<endl;

    int arraynumber2d[ARRAY_SIZE][ARRAY_SIZE]= {0};
    int max = 200;
    int min = 150;
    populatearray2d(arraynumber2d);
    int totalnumber = range2d(arraynumber2d, min, max);
    cout<<"Array has "<<totalnumber<<" numbers between "<<min<<" and "<<max<<endl;


    return 0;


}