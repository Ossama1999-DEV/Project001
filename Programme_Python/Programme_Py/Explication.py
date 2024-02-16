# Explication 
import pandas as pd


donnees = pd.read_csv('https://api.slingacademy.com/v1/sample-data/files/salaries.csv')


print(donnees.head())


informations = donnees.info()

# Statistiques descriptives
stats = donnees.describe()
print(stats)

# Filtrer les données en fonction d'une condition
print("Filtre pour l'age de > 25")
donnees_filtrees = donnees[donnees['Age'] > 25]
print(donnees_filtrees)

# Grouper et agréger des données
print("Grouper et agréger des données")
groupe_par_job = donnees.groupby('Job')['Salary'].mean()
print(groupe_par_job)


