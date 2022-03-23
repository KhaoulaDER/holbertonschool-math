#!/usr/bin/python3

import numpy as np
determinant = __import__('2-determinant').determinant

if __name__ == "__main__":
  A= np.array([[1,0,4,-6],[2,5,0,3],[-1,2,3,5],[2,1,-2,3]])
  print("The matrix A:\n",A)
  print("The determinant of the matrix A using PLU is : {} where: \n P\n{} \nL\n{} \n U\n{}".format(determinant(A)[3], determinant(A)[0], determinant(A)[1], determinant(A)[2]))
  print("\n********\n")  
  A= np.array([[1, 1, 6],[2, 3, -2],[3, -2, 7]])
  print("The matrix A:\n",A)
  print("The determinant of the matrix A using PLU is : {} where: \n P\n{} \nL\n{} \n U\n{}".format(determinant(A)[3], determinant(A)[0], determinant(A)[1], determinant(A)[2]))
