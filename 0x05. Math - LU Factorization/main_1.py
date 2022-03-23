#!/usr/bin/python3

import numpy as np
plu = __import__('1-plu').plu

if __name__ == "__main__":
  A = np.array([[0, 1, 4], [1, 2, 2], [3, 1, 3]])
  print("The matrix A:\n",A)
  print("After factorization using PLU method, we can write PA = LU where: \n P\n{} \nL\n{} \n U\n{}".format(plu(A)[0], plu(A)[1], plu(A)[2]))
  
  A = np.array([[2, 4, 3, 5], [-4, -7, -5, -8], [6, 8, 2, 9], [4, 9, -2, 14]])
  print("The matrix A:\n",A)
  print("After factorization using PLU method, we can write PA = LU where: \n P\n{} \nL\n{} \n U\n{}".format(plu(A)[0], plu(A)[1], plu(A)[2]))
