import numpy as np

A = np.array([[1, 1, 2], 
              [1, 2, 1], 
              [2, 1, 1]])

print("Matrix A:")
print(A)

Sol = np.array([3, 1, 0])
print("Vector Sol:")
print(Sol)

x = np.linalg.solve(A, Sol)

print("Solution du système:")
print(x)
