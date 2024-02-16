# Import des bibliothèques
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix
import statsmodels.api as sm
import sys
import os

output_file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/Resultat_accumuler.txt"

with open(output_file_path, 'w') as file:
    # Rediriger la sortie standard vers le fichier texte
    sys.stdout = file
    # Charger les données
    file_path = "C:/Users/OD52415657/OneDrive - Conduent/Desktop/CESI Ecole/Programmation/Programme_Py/Projet_Groupe_Python/2000-2021 SINGLE TURKEY FIRE_M-C61_214067.csv"
    data = pd.read_csv(file_path, dtype={'bright_t31': float})
    
    # Afficher les détails des données du projet
    print("DONNEES DU PROJET :")
    print("- 21 fichiers *.csv (1 par an) ou 1 fichier '2000-2021 SINGLE TURKEY FIRE_M-C61_214067.csv' de 17 Mb")
    print("- Feux en Turquie de 2000 à 2021")
    print(f"- Le jeu de données contient {len(data)} observations.")
    print("Chaque observation contient les données de 15 facteurs :")
    print("o 'latitude and longitude': Position géographique du feu.")
    print("o 'brightness': Température de luminosité mesurée en kelvins")
    print("o 'scan and track': Résolution spatiale")
    print("o 'acq_date': Date de feu")
    print("o 'acq_time': Heure d'acquisition du satellite (en UTC).")
    print("o 'satellite': Detection par le satellite Terra ou le satellite Aqua")
    print("o 'instrument': The MODIS instrument that tracks the observations is NASA’s Earth Observing System Terra and Aqua satellites.")
    print("o 'confidence': Indicateur de qualité")
    print("o 'version': Traitement de la collecte et de la source des données")
    print("o 'bright_t31': Température de luminosité mesurée en kelvins")
    print("o 'frp': Puissance radiative du feu")
    print("o 'daynight': D pour feu diurne, N pour feu nocturne")
    print("o 'type': 0 pour un feu de végétation présumé, 1 pour un volcan actif, 2 pour d'autres sources terrestres statiques et 3 pour une détection en mer")



    # Nettoyage des données
    data = data.drop(['scan', 'track', 'version'], axis=1)
    data['acq_date'] = pd.to_datetime(data['acq_date'])

    # Présentation des variables quantitatives
    quantitative_variables = data.describe()
    print("\nPrésentation des variables quantitatives:")
    print(quantitative_variables)

    # Présentation des variables qualitatives
    qualitative_variables = data.select_dtypes(include='object').describe()
    print("\nPrésentation des variables qualitatives:")
    print(qualitative_variables)

    # Evolution des feux au fil des années
    plt.figure(figsize=(12, 6))
    sns.countplot(x=data['acq_date'].dt.year)
    plt.title('Evolution des feux au fil des années')
    plt.xlabel('Année')
    plt.ylabel('Nombre de feux')
    plt.show()

    # Intelligence Artificielle
    # Traitement de la variable 'type' (classification)
    # Diviser les données en ensembles d'entraînement et de test, en excluant la colonne 'acq_date'
    X = data.drop(['type', 'acq_date'], axis=1)
    y = data['type']
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    # Utiliser un modèle de forêt aléatoire pour compléter les données manquantes de 'type'
    classifier = RandomForestClassifier(n_estimators=100, random_state=42)
    classifier.fit(X_train, y_train)

    # Prédire les valeurs manquantes
    y_pred = classifier.predict(X_test)

    # Evaluer la performance du modèle
    accuracy = accuracy_score(y_test, y_pred)
    conf_matrix = confusion_matrix(y_test, y_pred)
    class_report = classification_report(y_test, y_pred)

    print(f'\nAccuracy: {accuracy}')
    print(f'Confusion Matrix:\n{conf_matrix}')
    print(f'Classification Report:\n{class_report}')

    # Relation entre X et Y pour une régression linéaire
    X_with_intercept = sm.add_constant(X)  # Ajouter une constante à X pour le terme intercept
    model = sm.OLS(y, X_with_intercept).fit()
    
    print("\nRelation entre X et Y pour une régression linéaire:")
    print(model.summary())

# Restaurer la sortie standard vers la console
sys.stdout = sys.__stdout__
