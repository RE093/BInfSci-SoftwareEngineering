/**

3. Write a program that reads in two arrays each with 4 integer elements, then adds them to form the
Corresponding elements of a third array. The program must display the results in this form:
Index 0: 4 + 15 = 19
Index 1: 67 + 3 = 70 etc

 */


 #include<iostream>
 using namespace std;

int array_one[4], array_two[4], array_three[4];

int main() {
    for (int i=0; i < 4; i++) {
        cout << "Enter 4 numbers for the first array: ";
        cin >> array_one[i];
        
    }

    for (int i=0; i < 4; i++) {
        cout << "Enter 4 numbers for the second array: ";
        cin >> array_two[i];
    }

    for (int i=0; i < 4; i++) {
        array_three[i] = array_one[i] + array_two[i];
        cout << "Index " << i << ": " << array_one[i] << " + " << array_two[i] << " = " << array_three[i] << endl;
    }

    
}