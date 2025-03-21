#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	const int arraySize = 10;
	float Array[arraySize][arraySize];
    cout << "The array contains the following elements: " << endl << endl;
	for (int i = 0; i < arraySize; i++) {
        cout << "row " << i << "\t";
		for (int j = 0; j < arraySize; j++) {
			Array[i][j] = rand()%100 + float(rand()) / float(rand());
            cout << Array[i][j]<<"\t";
		}
        cout << endl;
	}


    float max1, max2, min1, min2;
    max1 = max2 = min1 = min2 = Array[0][0];

        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                float value = Array[i][j];
                if (value > max1) {
                    max2 = max1;
                    max1 = value;
                }
                else if (value > max2) {
                    max2 = value;
                }
                if (value < min1) {
                    min2 = min1;
                    min1 = value;
                }
                else if (value < min2) {
                    min2 = value;
                }
            }
        }

        cout << endl << "Product of the two maximum elements of a two-dimensional array: " << max1 * max2;
        cout << endl << "Difference of the two minimum elements of a two-dimensional array: " << min2 - min1<<endl<<endl<<endl;

        cout << "Sums of row elements of a two-dimensional array: " << endl << endl;
        float Array1[arraySize] = { 0,0,0,0,0,0,0,0,0,0 };
        for (int i = 0; i < arraySize; i++) {
            for (int j = 0; j < arraySize; j++) {
                Array1[i] += Array[i][j];
            }
            cout <<"row " << i << ": "<< Array1[i] << endl;
        }

       



}
