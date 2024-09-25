#include <iostream>
using namespace std;

int main(){

    int i, j, min;
    int array[5] = {100,85,45,250,99};
    int arraySize = sizeof (array) / (sizeof(array[0]));

    for (int i = 0; i < arraySize -1 ; i++) {
        int min = i;
        for(int j = i + 1; j < arraySize; j++){
            if (array[j] > array[min]){ //Changed '<' to '>'
                min = j;
            }
        }
        if (min != i){
            int temp = array[i];
            array[i]=array[min];
            array[min] = temp;
        }
    }

    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
