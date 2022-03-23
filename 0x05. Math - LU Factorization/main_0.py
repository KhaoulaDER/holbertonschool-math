#!/usr/bin/python3

import numpy as np
lu = __import__('0-lu').lu

if __name__ == "__main__":
  A= np.array([[1, 4, -3], [-2, 8, 5], [3, 4, 7]])
  print("The matrix A:\n",A)
  print("After factorization using LU method, we can write A = LU where: \n L\n{} \n U\n{}".format(lu(A)[0], lu(A)[1]))
  
  A = np.array([[2, 4, 3, 5], [-4, -7, -5, -8], [6, 8, 2, 9], [4, 9, -2, 14]])
  print("The matrix A:\n",A)
  print("After factorization using LU method, we can write A = LU where: \n L\n{} \n U\n{}".format(lu(A)[0], lu(A)[1]))
