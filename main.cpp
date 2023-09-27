/******************************************************************
 * Author:       Platonov A.A.                                    *
 * Group:        ПИ-231                                           *
 * Variant:      14                                               *
 * Date:         20.09.2023                                       *
 * Project name: Copulation of Arrays and the Birth of a New Life *
 * OnlineGDB: https://onlinegdb.com/5m-cvvrQ5                     *
 ******************************************************************/

#include <iostream>

using namespace std;

double positiveSum(double *arr, int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) sum += arr[i];
  }
  return sum;
}

int main() {
  int size;
  
  cout << "Enter arrays' size: ";
  cin >> size;
  
  double *X = new double[size];
  double *Y = new double[size];
  double *Z = new double[size];

  cout << "Enter elements of X array (mommy): ";
  for (int i = 0; i < size; i++) cin >> X[i];

  cout << "Enter elements of Y array (daddy): ";
  for (int i = 0; i < size; i++) cin >> Y[i];

  cout << "We got a Z! (baby): ";

  for (int i = 0; i < size; i++) {
    Z[i] = X[i] * Y[i];
    cout << Z[i] << ' ';
  }

  cout << "\nSum of the positive numbers of X = " << positiveSum(X, size) << '\n';
  cout << "Sum of the positive numbers of Y = " << positiveSum(Y, size) << '\n';
  cout << "Sum of the positive numbers of Z = " << positiveSum(Z, size) << '\n';

  return 0;
}
