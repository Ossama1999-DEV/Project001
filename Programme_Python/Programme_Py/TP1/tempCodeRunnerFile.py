import numpy as np

A = np.array([[1, 1, 2], 
              [1, 2, 1], 
              [2, 1, 1]])
print(A)
Sol = np.array([[3],
                [1],
                [0]])
print(Sol)

x = np.linalg.solve(A, Sol)
print("Solution du système :")
print(x)
