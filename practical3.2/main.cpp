#include <iostream>
#include <chrono>
#include "array_sum.h"
using namespace std;
using namespace std::chrono;

int main()
{
    int n, a[50];
    array_sum a1;

    cout << "Enter the total number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    a1.input_data(n, a);

    auto start_iter = high_resolution_clock::now();
    a1.iterative_array(n, a);
    auto end_iter = high_resolution_clock::now();
    auto duration_iter = duration_cast<nanoseconds>(end_iter - start_iter);
    cout << "\nTime taken by iterative sum: " << duration_iter.count() << " nanoseconds" << endl;

    auto start_rec = high_resolution_clock::now();
    int rec_sum = a1.recursive_array(n, a);
     int recMax = a1.recursive_max(n, a);
    cout << "\nRecursive maximum = " << recMax << endl;

    auto end_rec = high_resolution_clock::now();
    auto duration_rec = duration_cast<nanoseconds>(end_rec - start_rec);
    cout << "Recursive sum = " << rec_sum << endl;
    cout << "Time taken by recursive sum: " << duration_rec.count() << " nanoseconds" << endl;

    return 0;
}
