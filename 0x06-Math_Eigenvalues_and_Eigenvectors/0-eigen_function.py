#!/usr/bin/python3

import numpy as np

def eigenFunction(mat):
  eigvalues, eigvectors = np.linalg.eig(mat)
  return eigvalues, eigvectors  
  
