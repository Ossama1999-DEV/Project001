import numpy as np
import matplotlib.pyplot as plt
from scipy.fft import fft, fftfreq

# Paramètres du signal
fo = 50  # Fréquence du signal (Hz)
Fe = 10**3  # Fréquence d'échantillonnage (doit être supérieure à 2 * fo pour respecter le théorème de Nyquist-Shannon)
DT = 1  # Durée du signal (en secondes)
dt = 1 / Fe  # Période d'échantillonnage
N = int(DT / dt)  # Nombre d'échantillons (converti en entier)

t = np.arange(0, DT, dt)
signal = np.sin(2 * np.pi * 5 * t) + 0.5 * np.sin(2 * np.pi * 20 * t)

TFD = fft(signal)

# Calcul du vecteur de fréquence
freq = fftfreq(N, dt)

# Affichage de la TFD
plt.figure(figsize=(10, 4))
plt.plot(freq, np.abs(TFD))
plt.xlabel('Fréquence (Hz)')
plt.ylabel('Amplitude')
plt.title('Module de la TFD')
plt.grid(True)
plt.show()
