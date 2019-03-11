#include<iostream>
    using std::endl;
    using std::cout;
    using std::cin;
#include"DynamicArray.h"
#include<iomanip>

void displayArray(const int* const array, int size){
   const int* end = array + size;                               // mark the end of the array
   cout << "Array values:  \n";
   for (const int* current = array; current != end; current++){ // "moves" current toward end
      cout << *current << endl;
   }
   cout << endl;
}

int* getData (int &sizeOfDynArray){
   cout << "How many more values would you like to enter?  ";
   cin >> sizeOfDynArray;
   int* dynamicArray = new int[sizeOfDynArray];
   for (int i = 0; i < sizeOfDynArray; ++i){
      cout << "Enter value " << (i + 1) << ":  ";
      cin  >> dynamicArray[i];
   }
   return dynamicArray;
}

int main(){
    int  values[5] = {325, 879, 120, 459, 735};
    int* valuePtr  = values;  // valuePtr is a pointer to values.
    cout << "valuePtr:   " << valuePtr  << endl;
    cout << "*valuePtr:  " << *valuePtr << endl << endl;
    double  payRate = 10.25;
    double* ratePtr = &payRate;
    cout << std::fixed << std::setprecision(2);
    cout << "address of payRate:      " << ratePtr  << endl;
    cout << "value stored in payRate: " << *ratePtr << endl << endl;
    *ratePtr = 12.50;
    cout << "altered value of payRate:  " << payRate << endl << endl;
    double grossPay;
    grossPay = payRate * 40;
    cout << "grossPay calculated with payRate:   " << grossPay << endl;
    grossPay = *ratePtr * 40;
    cout << "grossPay calculated using ratePtr:  " << grossPay << endl << endl;
    cout << "values[0]:  " << values[0] << endl;
    cout << "*valuePtr:  " << *valuePtr << endl;
    valuePtr++;
    cout << "values[1]:  " << values[1] << endl;
    cout << "*valuePtr after increment:  " << *valuePtr << endl << endl;
    
    displayArray(values, 5);
    double* price = new double;
    *price = 88.25;
    cout << "address of price:  " <<  price << endl;
    cout << "value of price:    " << *price << endl << endl;
    delete price;     // de-allocates the memory (the OS will mark it as "available")
    price = nullptr;  // null the pointer so that it cannot be dereferenced again.
    int sizeOfDynArray;
    int* dynArray = getData(sizeOfDynArray);
    displayArray(dynArray, sizeOfDynArray);
    delete [] dynArray;
    dynArray = nullptr;   // null the pointer for safety.
    
    DynamicArray array1(40);
    for(int i = 0; i < array1.size(); ++i){
        array1.at(i) = 100;
    }
    int value = array1.at(2);
    cout << value << endl;
    array1.at(2) = 70;
    value = array1.at(2);
    cout << value;
    
    return 0;
}  