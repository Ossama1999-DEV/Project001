import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from statsmodels.stats.weightstats import DescrStatsW

# Charger les données
path = r"C:\Users\OD52415657\Downloads\ozone.csv"
data = pd.read_csv(path, sep=';')

# Remplacer ',' par '.' dans les variables quantitatives
quantitative_variables = data.select_dtypes(include=['int64', 'float64']).columns
data[quantitative_variables] = data[quantitative_variables].replace(',', '.', regex=True).apply(pd.to_numeric, errors='coerce')

# Tracer l'évolution journalière, les points aberrants et la distribution pour 'maxO3'
plt.figure(figsize=(15, 5))

# journalière
plt.subplot(1, 3, 1)
sns.lineplot(x='obs', y='maxO3', data=data)
plt.title('Évolution journalière de maxO3')
plt.xlabel('Observation')
plt.ylabel('maxO3')
plt.tight_layout()
plt.show()

# (boxplot)
plt.subplot(1, 3, 2)
sns.boxplot(x='obs', y='maxO3', data=data)
plt.title('Boxplot de maxO3')
plt.xlabel('Observation')
plt.ylabel('maxO3')
plt.tight_layout()
plt.show()

# Distribution (histogramme et KDE)
plt.subplot(1, 3, 3)
sns.histplot(data['maxO3'].dropna(), kde=True)
plt.title('Distribution de maxO3')
plt.xlabel('maxO3')
plt.ylabel('Fréquence')
plt.tight_layout()
plt.show()

# Lien entre la pluie et le vent
scatter = sns.scatterplot(x='pluie', y='vent', hue='pluie', data=data, palette='viridis')
plt.title('Lien entre la pluie et le vent')
plt.xlabel('Pluie')
plt.ylabel('Vent')
plt.tight_layout()
plt.show()

# Construire un intervalle de confiance pour la moyenne de maxO3
maxO3_stats = DescrStatsW(data['maxO3'].dropna())
ci_maxO3 = maxO3_stats.tconfint_mean()
print(f"Intervalle de confiance pour la moyenne de maxO3 : {ci_maxO3}")
# Tracer l'histogramme de la variable Vent à 9h
plt.figure(figsize=(8, 6))
sns.histplot(data['maxO3'].dropna(), kde=True)
plt.title('Titre oussama')
plt.xlabel('xxxxxxxxxxx')
plt.ylabel('Fréquence')
plt.tight_layout()
plt.show()



# Construire un intervalle de confiance pour la moyenne de Vent à 9h
vent_9h_stats = DescrStatsW(data['Vx9'].dropna())
ci_vent_9h = vent_9h_stats.tconfint_mean()
print(f"Intervalle de confiance pour la moyenne de Vent Vx9 à 9h : {ci_vent_9h}")

# Tracer l'histogramme de la variable Vent à 9h
plt.figure(figsize=(8, 6))
sns.histplot(data['Vx9'].dropna(), kde=True)
plt.title('Histogramme de Vent à 9h')
plt.xlabel('Vent à 9h')
plt.ylabel('Fréquence')
plt.tight_layout()
plt.show()