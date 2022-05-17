#!/usr/bin/python3

import numpy as np
power = __import__('1-power').power

if __name__ == '__main__':
    np.random.seed(0)
    mat = np.random.rand(5, 5)
    result = power(mat, 0.001)
    List = [abs(max(np.linalg.eig(mat)[0]) - result[0]) < 0.001, (mat @ result[1] - result[1] * result[1] < 0.001).all()]
    print(List)    
    print ('********')
    mat = np.array([[1, 9, 8], [2, 7, 6], [7, 20, 9]])
    result = power(mat, 0.001)
    print ('The matrix A:\n', mat)
    print ('\nUsing the power method, the largest eigen value: {} '
    'and the eigen vector of the largest eigen value:\n {}'
    .format(result[0], result[1]))
    print ('********')
    mat = np.array([[1, 3], [2, 2]])
    result = power(mat, 0.001)
    print ('The matrix A:\n', mat)
    print ('\nUsing the power method, the largest eigen value: {} '
    'and the eigen vector of the largest eigen value:\n {}'.
    format(result[0], result[1]))

