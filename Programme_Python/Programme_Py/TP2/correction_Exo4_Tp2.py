import numpy as np
import matplotlib.pyplot as plt

# Paramètres du signal
fo1 = 50  # Fréquence de la première sinusoïde (Hz)
fo2 = 150  # Fréquence de la deuxième sinusoïde (Hz)
Fe = 10**3  # Fréquence d'échantillonnage (doit être supérieure à 2 * fo2 pour respecter le théorème de Nyquist-Shannon)
DT = 1  # Durée du signal (en secondes)
dt = 1 / Fe  # Période d'échantillonnage
N = int(DT / dt)  # Nombre d'échantillons
 
# Génération du signal échantillonné composé de deux sinusoïdes
t = np.linspace(0, DT, N, endpoint=False)  # Crée un vecteur de temps
signal = np.sin(2 * np.pi * fo1 * t) + 0.5 * np.sin(2 * np.pi * fo2 * t)  # Signal composé

# Affichage du signal
plt.figure(figsize=(10, 4))
plt.plot(t, signal)
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signal échantillonné')
plt.grid(True)
plt.show()

# Calcul de la transformée de Fourier du signal
TFD = np.fft.fft(signal)
frequencies = np.fft.fftfreq(N, dt)

# Filtrage : suppression de la composante à 150 Hz (fo2)
TFD_filtered = TFD.copy()
frequencies_filtered = frequencies.copy()
for i in range(N):
    if abs(frequencies_filtered[i]) > fo2:
        TFD_filtered[i] = 0

# Calcul de la transformée de Fourier inverse
signal_filtered = np.fft.ifft(TFD_filtered)

# Affichage du signal filtré dans le domaine temporel
plt.figure(figsize=(10, 4))
plt.plot(t, signal_filtered)
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signal filtré dans le domaine temporel')
plt.grid(True)
plt.show()
