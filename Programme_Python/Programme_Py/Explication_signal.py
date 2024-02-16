import matplotlib.pyplot as plt
import pandas as np
import numpy as np

# Génération de données pour le signal
frequence = 5  # Fréquence en Hz
echantillons_par_seconde = 1000
temps = np.arange(0, 1, 1/echantillons_par_seconde)
signal = np.sin(2 * np.pi * frequence * temps)

# plt.plot(temps, signal)
# plt.title('Signal sinusoïdal dans le domaine temporel')
# plt.xlabel('Temps (s)')
# plt.ylabel('Amplitude')
# # plt.show()

# Calcul de la FFT
spectre = np.fft.fft(signal)

# Fréquences correspondantes
frequences = np.fft.fftfreq(len(signal)) * echantillons_par_seconde

# Tracé du signal et de son spectre
plt.subplot(2, 1, 2)
plt.plot(frequences, np.abs(spectre))
plt.title('Spectre du signal')
plt.xlabel('Fréquence (Hz)')
plt.ylabel('Amplitude')
plt.show()