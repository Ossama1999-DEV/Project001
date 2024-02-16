import numpy as np
import matplotlib.pyplot as plt

fo = 50  # Fréquence du signal (Hz)
Fe = 10**3  # Fréquence d'échantillonnage (doit être supérieure à 2 * fo pour respecter le théorème de Nyquist-Shannon)
DT = 1  # Durée du signal (en secondes)
dt = 1 / Fe  # Période d'échantillonnage
N = int(DT / dt)  # Nombre d'échantillons (converti en entier)

t = np.arange(0, DT, dt)
signal = np.sin(2 * np.pi * fo * t)

# Affichage
plt.figure(figsize=(10, 4))
plt.plot(t, signal)
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signal échantillonné')
plt.grid(True)
plt.show()
