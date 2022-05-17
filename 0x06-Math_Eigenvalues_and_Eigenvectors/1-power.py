#!/usr/bin/env python3
import numpy as np

def power(A, tol):
    n = np.shape(A)[0]
    x = np.random.rand(n)
    Ax = np.dot(A, x)
    nAx = np.linalg.norm(Ax)
    l = nAx / np.linalg.norm(x)
    i=1
    while(np.linalg.norm(Ax - l * x) > tol):
        x = Ax / nAx
        Ax = np.dot(A, x)
        nAx = np.linalg.norm(Ax)
        l = nAx / np.linalg.norm(x)
        print('Iteration no. ', i) 
        print(x)
        i= i+1        
    return l, x
