#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>
using namespace std;

// const int ARRAY_SIZE = 5;
// const int SIZE_ROW ;
// const int SIZE_COL;
// example 1 
 void pointer_ref(){

    // declare the variable
    int num = 12;
    char sym = '$';
    string n = "Peter";

    // declare the pointers
    int* pointer_num;
    char* pointer_char;
    string* pointer_string;
    // check what the pointer is equivalent to 
    cout<<"check a pointer after declaration = "<<pointer_string<<endl;

    // ointer intialized with memory address of a variable
    pointer_num = &num;
    pointer_char = &sym;
    pointer_string = &n;

    cout<<"check a pointer reference = "<<pointer_string<<endl;

    // dereference operator to get the value of memory address

    cout<<"dereference a pointer = "<<*pointer_string<<endl;


 }

//  example 2: passing an address into a function
// function to print a value 
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
}

// function to pass a reference
void printbyref(string& v){
    cout<<"Passed by reference = "<<v<<endl;
}

// function to pass memory address
void printaddress(string* v){
    cout<<"Passed memory address = "<<v<<endl;

}


// example 3: pointer in an array
void pointer_array(){
    int s = 5;
    int arr[s] = {1,2,3,4,5};

    // pointer to an array
    int *ptr = arr;

    // loop through ann array using a pointer
    for(int i = 0; i<s; i++){

        // access to an array element using a pointer
        cout<<"value = "<<*(ptr + 1)<<endl;
    }

}

// example 4: passing an array into a function
void fillUp(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
}

void printelements(int sizearray, int *arr){
    for(int i = 0; i < sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// example 5: search application 
// function to collect up to 5 positive numbers. if the user enters a negative number or zero, the cellecting of numbers will stop.

// numberuserindex --> value of the total consecutive positive numbers entered by the user

void fillarray(int *arr, int &numberuserindex){
   int number, index = 0;
   do{
        cout<<"Enter positive numbers: ";
        cin>>number;
            if(number>0){
                arr[index] = number;
                index ++;
            }

   } 


    while(number>0 && index<ARRAY_SIZE);

    // UPDATE VALUE OF USERNUMBERINDEX
    numberuserindex = index;
    // cout<<numberuserindex<<endl;
}

// function to return an index of the target number or -1 if the number was not found 

int search(int *arr, int numberuserindex, int target){
    int index = 0; // the index of the target number
    bool found = false; //flag
    while(!(found) && index<numberuserindex){
        if(target == arr[index]){
            found = true;
        }else{
            index++;
        }
    }
    if(found){
        return index;
    }else{
        return -1;
    }
}

// example 6: multidimensional array 2D array

void array_2d(){

    int array2d [3][5] = {
        {1,2,3,4,5}, //row1
        {-10,-5,6,3,1}, //row 2
        {6,7,8,9,10} //row3
    };

    // loop through each element in array
    for(int row = 0; row <3; row++){
        for(int col = 0; col < 5; col++){
            cout<<array2d[row][col]<<"\t";
        }
        cout<<endl;
    }



}

// example 7: passing a 2D array into a function 

void fillup_2d(int a[][SIZE_COL]){
    for(int row = 0; row < SIZE_ROW; row++){
        for(int col = 0; col< SIZE_COL; col++){
            cout<<"Enter a number for row "<< row + 1 <<" and col "<< col + 1<<" = ";
            cin>>a[row][col];
        }
    }
    
}

// function to print elements in 2darray
void print_2d(int a[][SIZE_COL]){
        for(int row = 0; row < SIZE_ROW; row++){
            for(int col = 0; col< SIZE_COL; col++){
            cout<<a[row][col]<<"\t";

        }
        cout<<endl;
    }
}

// function that counts and returns the total of even numbers ina 2D array
int count_even(int a[][SIZE_COL]){
    int counter = 0;
    for(int row = 0; row < SIZE_ROW; row++){
        for(int col = 0; col < SIZE_COL; col++){
            if(a[row][col] % 2 == 0 && a[row][col] != 0){
                counter++;
            }
        }
    }
    return counter;
}

// exercise 1, function that fins and returns the maximum number

/*
Exercise a:  define a function to find the maximum number in array 'a'. The function will return the maximum number. The call in the main() function should be as:

int maxnumber = findmax(a);
cout<<"The maximum number is "<<maxnumber<<endl;

*/

int findmax(int *arr){
    int current_index;

    for(int i = 0; i <= ARRAY_SIZE; i++){
        // return arr[i];
        current_index = arr[i];
        cout<<current_index<<endl;

    }
    return current_index;
}


/*
Exercise b: define two functions:

    one function to populate a 2D array of size 5-by-5 with random numbers between 1 and 255.
    one function that returns the total number of numbers in between the minimum and maximum range in a 5-by-5 array.
    The call in the main() function should be as:
    int arraynumber2d[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int max = 200;
    int min = 150;
    call function 'populatearray2d' to populate array with random numbers between 1 and 255 
    populatearray2d(arraynumber2d);
     call function to find the numbers in array 'populatearray2d' that are between the max and min 
    int totalnumber = range2d(arraynumber2d, max, min);
    cout<<"\vArray has "<<totalnumber<<" numbers between "<<min<<" and "<<max<<endl;




*/

void populatearray2d(int num2d[][ARRAY_SIZE]){
    srand(time(0));
    for(int row = 0; row < ARRAY_SIZE; row++){
        for(int col = 0; col < ARRAY_SIZE; col++){
            num2d[row][col] = rand () % 255 + 1;
        }
    }
}

int range2d(int num2d[][ARRAY_SIZE], int max, int min){
int count = 0;
    for(int row = 0; row < ARRAY_SIZE; row++){
        for(int col = 0; col < ARRAY_SIZE; col++){
            if(num2d[row][col] >= min && num2d[row][col] <= max){
                count++;
            }
        }
    }
    return count;
}