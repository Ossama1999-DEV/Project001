import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from scipy.stats import shapiro
from statsmodels.stats.weightstats import DescrStatsW

# Charger les données
path = r"C:\Users\OD52415657\Downloads\ozone.csv"
data = pd.read_csv(path, sep=';')

# Remplacer ',' par '.' dans les variables quantitatives
quantitative_variables = data.select_dtypes(include=['int64', 'float64']).columns
data[quantitative_variables] = data[quantitative_variables].replace(',', '.', regex=True).apply(pd.to_numeric, errors='coerce')

# Tracer 3 graphiques pour les variables quantitatives
for variable in quantitative_variables[:3]:
    plt.figure(figsize=(12, 6))

    # Évolution journalière
    plt.subplot(1, 3, 1)
    sns.lineplot(x='obs', y=variable, data=data)
    plt.title(f'Évolution journalière de {variable}')
    plt.xlabel('obs')
    plt.ylabel(variable)

    # Points aberrants (boxplot)
    plt.subplot(1, 3, 2)
    sns.boxplot(x=variable, data=data)
    plt.title(f'Boxplot de {variable}')

    # Distribution (histogramme et KDE)
    plt.subplot(1, 3, 3)
    sns.histplot(data[variable], kde=True)
    plt.title(f'Distribution de {variable}')
    plt.xlabel(variable)
    plt.ylabel('Fréquence')

    plt.tight_layout()
    plt.show()

# Tracer 1 ou 2 graphiques pour les variables qualitatives
for variable in data.select_dtypes(include=['object']).columns[:2]:
    plt.figure(figsize=(8, 6))
    sns.countplot(x=variable, data=data)
    plt.title(f'Distribution de {variable}')
    plt.xlabel(variable)
    plt.ylabel('Fréquence')
    plt.show()

# Tracer les graphiques pour les liens entre les variables
plt.figure(figsize=(12, 6))

# Lien entre le vent, la température et la concentration maximale en ozone
sns.scatterplot(x='Vx9', y='T9', hue='maxO3', data=data, palette='viridis')
plt.title('Lien entre le vent, la température et la concentration maximale en ozone')
plt.xlabel('Vent à 9h')
plt.ylabel('Température à 9h')
plt.legend(title='Concentration maximale en ozone')
plt.show()

# Lien entre la pluie et la concentration maximale en ozone
plt.figure(figsize=(8, 6))
sns.boxplot(x='Pluie', y='maxO3', data=data)
plt.title('Lien entre la pluie et la concentration maximale en ozone')
plt.xlabel('Pluie')
plt.ylabel('Concentration maximale en ozone')
plt.show()

# Lien entre la pluie et le vent
plt.figure(figsize=(8, 6))
sns.boxplot(x='Pluie', y='Vx9', data=data)
plt.title('Lien entre la pluie et le vent à 9h')
plt.xlabel('Pluie')
plt.ylabel('Vent à 9h')
plt.show()

# Construire un intervalle de confiance pour la moyenne de Vent à 9h
vent_9h_stats = DescrStatsW(data['Vx9'].dropna())
ci_vent_9h = vent_9h_stats.tconfint_mean()
print(f"Intervalle de confiance pour la moyenne de Vent à 9h : {ci_vent_9h}")

# Tracer l'histogramme de la variable Vent à 9h
plt.figure(figsize=(8, 6))
sns.histplot(data['Vx9'].dropna(), kde=True)
plt.title('Histogramme de Vent à 9h')
plt.xlabel('Vent à 9h')
plt.ylabel('Fréquence')
plt.show()

# Effectuer le test de normalité (Shapiro)
stat, p_value = shapiro(data['Vx9'].dropna())
print(f"Test de Shapiro pour la normalité de Vent à 9h - Statistique : {stat}, P-valeur : {p_value}")
