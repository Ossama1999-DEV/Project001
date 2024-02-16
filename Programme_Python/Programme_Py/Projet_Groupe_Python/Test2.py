# Importer les modules nécessaires
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix
import statsmodels.api as sm
import sys

# Définir le chemin du fichier de sortie
output_file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/Resultat_accumuler2.txt"

# Rediriger la sortie standard vers le fichier de sortie
sys.stdout = open(output_file_path, 'w')

# Charger les données
file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/2000-2021 SINGLE TURKEY FIRE_M-C61_214067.csv"
data = pd.read_csv(file_path, dtype={'bright_t31': float})

# Gérer les avertissements DtypeWarning
pd.options.mode.chained_assignment = None  # Désactiver le avertissement de copie pour éviter la répétition du message

# Définir le chemin du fichier de sortie
output_file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/Resultat_accumuler2.txt"

# Rediriger la sortie standard vers le fichier de sortie
sys.stdout = open(output_file_path, 'w')

# Charger les données
file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/2000-2021 SINGLE TURKEY FIRE_M-C61_214067.csv"
data = pd.read_csv(file_path, dtype={'bright_t31': float})

# Gérer les avertissements DtypeWarning
# Afficher les valeurs uniques de la colonne 'instrument'
unique_instruments = data['instrument'].unique()
print(f"\nValeurs uniques dans la colonne 'instrument': {unique_instruments}")

# Nettoyer les données
# Supprimer les colonnes non pertinentes
data = data.drop(['scan', 'track', 'version'], axis=1)
# Convertir la colonne 'acq_date' en type datetime
data['acq_date'] = pd.to_datetime(data['acq_date'])
# Gérer les valeurs manquantes (ici, suppression des lignes avec des valeurs manquantes)
data = data.dropna()

# Afficher les informations sur les données
# Afficher les statistiques descriptives des variables quantitatives
print("\nDonnées quantitatives :")
quantitative_variables = data.describe()
print(quantitative_variables)
# Afficher les statistiques descriptives des variables qualitatives
print("\nDonnées qualitatives :")
qualitative_variables = data.select_dtypes(include='object').describe()
print(qualitative_variables)
# Afficher les premières lignes du DataFrame
print("\nToutes les données importantes :")
print(data.head())

# Visualiser l'évolution des feux au fil des années
plt.figure(figsize=(12, 6))
sns.countplot(x=data['acq_date'].dt.year)
plt.title('Evolution des feux au fil des années')
plt.xlabel('Année')
plt.ylabel('Nombre de feux')
plt.show()

# Visualiser les relations entre les variables quantitatives
sns.pairplot(data=data, vars=['latitude', 'longitude', 'brightness', 'bright_t31', 'frp'], hue='type', diag_kind='kde')
plt.suptitle("Nuage de points pour les variables quantitatives")
plt.show()

# ## Intelligence Artificielle

# Traitement de la variable 'type' (classification)

# Diviser les données en ensembles d'entraînement et de test
# Exclure les colonnes 'acq_date' et 'instrument'
X = data.drop(['type', 'acq_date', 'instrument'], axis=1)
y = data['type']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Utiliser un modèle de forêt aléatoire pour prédire les valeurs manquantes de 'type'
classifier = RandomForestClassifier(n_estimators=100, random_state=42)
classifier.fit(X_train, y_train)

# Prédire les valeurs de la variable 'type' pour l'ensemble de test
y_pred = classifier.predict(X_test)

# Evaluer la performance du modèle
# Calculer l'accuracy
accuracy = accuracy_score(y_test, y_pred)
# Afficher la matrice de confusion
conf_matrix = confusion_matrix(y_test, y_pred)
# Afficher le rapport de classification
class_report = classification_report(y_test, y_pred)

# Afficher les résultats dans la console et le fichier de sortie
print(f'\nAccuracy: {accuracy}')
