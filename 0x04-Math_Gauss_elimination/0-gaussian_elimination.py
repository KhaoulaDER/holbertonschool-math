import numpy as np
def gaussian_elimination(A, b): 
    """A must be a quare matrix, b a vector and 
    this alogorithm will solve the linear system A x = b"""
    n, m = np.shape(A)
    assert n == m 
    b = np.reshape(b, (n, 1))
    C = np.concatenate((A, b.astype(float)), axis=1)
    for j in range(n - 1):
        k = j + np.argmax(abs(C)[j:, j])
        if k != j: 
            C[j, :], C[k, :] = C[k, :], C[j, :].copy()
        for i in range(j + 1, n):
            assert C[j, j] != 0 
            mu = - C[i, j] / C[j, j]
            C[i, :] += mu * C[j, :]
    try:
      for i in range(n):
        assert C[i, i] != 0 , "You can't divide by zero!"
        C[i, :] *= 1 / C[i, i]    
      for j in range(n - 1, 0, -1):
          for i in range(j): 
              C[i, :] += -C[i,j] * C[j, :]
      return np.reshape(C[:, n:], n)
    except AssertionError as msg:
        print(msg)
