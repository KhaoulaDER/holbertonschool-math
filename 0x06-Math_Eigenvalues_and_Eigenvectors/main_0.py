#!/usr/bin/python3

import numpy as np
eigenFunction = __import__('0-eigen_function').eigenFunction

if __name__ == "__main__":
  mat= np.array([[0.9,10.2,0.7],
[3.3,0.9,1.2],
[0.01,7.4,2.5]], float)
  valp = eigenFunction(mat)[0]
  vecp = np.transpose(eigenFunction(mat)[1]) 
  List= []
  
  for i in range(len(valp)):
    List.append((np.dot(mat,vecp[i]) - vecp[i]*valp[i] < 10 ** (-3) ).all())
  print(all(p == True for p in List))

  print("\n********\n")  
  mat = np.array([[9, 4], [4, 3]])
  print("The matrix A:\n", mat)
 
  
  valp = eigenFunction(mat)[0]
  vecp = np.transpose(eigenFunction(mat)[1]) 
  List= []
  
  for i in range(len(valp)):
    List.append((np.dot(mat,vecp[i]) - vecp[i]*valp[i] < 10 ** (-3) ).all())
  print(all(p == True for p in List))
  
  
  mat=np.array([[7, 9], [9, 7]])
  valp = eigenFunction(mat)[0]
  vecp = np.transpose(eigenFunction(mat)[1]) 
  List= []
  
  for i in range(len(valp)):
    List.append((np.dot(mat,vecp[i]) - vecp[i]*valp[i] < 10 ** (-3) ).all())
  print(all(p == True for p in List))
  
