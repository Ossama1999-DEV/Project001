import numpy as np

A = np.array([[1, 4, 5, 7], 
              [7, 8 , 9, 10], 
              [2, 26, 14, 56], 
              [78, 11, 43, 12]])
print(A)

# rien
A[2, 3]

####### Affichage
print("Premiere ligne :", A[0, :])
print("Dernier ligne :", A[:, 3])

### Transposer
print("Transposer de La matrice A :\n", np.transpose(A))

####Valeur superieure
[L, C] = np.where(A>75)
print(f"Ligne {L} Colone {C}")
print("La valeur superieure a 75 est :", A[L[0], C[0]])

########
[S, K] = np.where(A>50)
print(f"Ligne {S} Colone {K}")
print("La valeur superieure a 50 est :", A[S[0], K[0]])
