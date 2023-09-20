/******************************************************************
 * Author:       Platonov A.A.                                    *
 * Group:        ПИ-231                                           *
 * Variant:      14                                               *
 * Date:         20.09.2023                                       *
 * Project name: Copulation of Arrays and the Birth of a New Life *
 ******************************************************************/

#include <iostream>

double positiveSum(double *arr, int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) sum += arr[i];
  }
  return sum;
}

int main()
{
  int size;
  
  std::cout << "Enter arrays' size: ";
  std::cin >> size;
  
  double *X = new double[size];
  double *Y = new double[size];
  double *Z = new double[size];

  std::cout << "Enter elements of X array (mommy): ";
  for (int i = 0; i < size; i++) std::cin >> X[i];

  std::cout << "Enter elements of Y array (daddy): ";
  for (int i = 0; i < size; i++) std::cin >> Y[i];

  std::cout << "We got a Z! (baby): ";

  for (int i = 0; i < size; i++) {
    Z[i] = X[i] * Y[i];
    std::cout << Z[i] << ' ';
  }

  std::cout << "\nSum of the positive numbers of X = " << positiveSum(X, size) << '\n';
  std::cout << "Sum of the positive numbers of Y = " << positiveSum(Y, size) << '\n';
  std::cout << "Sum of the positive numbers of Z = " << positiveSum(Z, size) << '\n';

  return 0;
}
