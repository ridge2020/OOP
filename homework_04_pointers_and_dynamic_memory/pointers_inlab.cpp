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
    DynamicArray source_array{5};
    DynamicArray destination_array{5};

    for(int i = 0; i < source_array.size(); ++i){
        source_array.at(i) = (i + 1); // fills with {1,2,3,4,5}
    }
        // Try to copy:
    destination_array = source_array;    // doesn't do what you want it to do...

// change the supposed "copy":
    for(int i = 0; i < destination_array.size(); ++i){
        destination_array.at(i) *= 2;      // double all the values in the "copy"
    }

// Now let's have a look at the original array. (It *should* be the same
// as before... but is it?)
    std::cout << "Original array should be:\n";
    std::cout << "1\t2\t3\t4\t5\n";
    std::cout << "It is:\n";
    for(int i = 0; i < source_array.size(); ++i){
    std::cout << source_array.at(i) << '\t';
    }
    std::cout << std::endl;
    
    return 0;
}  