import numpy as np
import matplotlib.pyplot as plt
 
# Paramètres du signal
fo = 50  # Fréquence du signal (Hz)
Fe = 10**3  # Fréquence d'échantillonnage (doit être supérieure à 2 * fo pour respecter le théorème de Nyquist-Shannon)
DT = 1  # Durée du signal (en secondes)
dt = 1 / Fe  # Période d'échantillonnage
N = int(DT / dt)  # Nombre d'échantillons

# Génération du signal échantillonné
t = np.linspace(0, DT, N, endpoint=False)  # Crée un vecteur de temps
signal = np.sin(2 * np.pi * fo * t)  # Signal sinusoïdal
 
# Affichage du signal
plt.figure(figsize=(10, 4))
plt.plot(t, signal)
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signal échantillonné (N échantillons)')
plt.grid(True)
plt.show()

# Supprimer quelques échantillons pour réduire la résolution
N_reduced = N // 2  # Réduire de moitié le nombre d'échantillons
t_reduced = t[:N_reduced]
signal_reduced = signal[:N_reduced]

# Affichage du signal échantillonné réduit
plt.figure(figsize=(10, 4))
plt.plot(t_reduced, signal_reduced)
plt.xlabel('Temps (s)')
plt.ylabel('Amplitude')
plt.title('Signal échantillonné réduit (N/2 échantillons)')
plt.grid(True)
plt.show()

# Calcul de la transformée de Fourier du signal échantillonné
TFD = np.fft.fft(signal)
frequencies = np.fft.fftfreq(N, dt)

# Calcul de la transformée de Fourier du signal échantillonné réduit
TFD_reduced = np.fft.fft(signal_reduced)
frequencies_reduced = np.fft.fftfreq(N_reduced, dt)

# Affichage des transformées de Fourier
plt.figure(figsize=(10, 4))
plt.plot(frequencies, np.abs(TFD))
plt.xlabel('Fréquence (Hz)')
plt.ylabel('Amplitude')
plt.title('Transformée de Fourier du signal échantillonné')
plt.grid(True)
plt.show()

plt.figure(figsize=(10, 4))
plt.plot(frequencies_reduced, np.abs(TFD_reduced))
plt.xlabel('Fréquence (Hz)')
plt.ylabel('Amplitude')
plt.title('Transformée de Fourier du signal échantillonné réduit')
plt.grid(True)
plt.show()
