import matplotlib.pyplot as plt
import pandas as pd
donnees = pd.read_csv('https://api.slingacademy.com/v1/sample-data/files/salaries.csv')
# Créer un histogramme pour visualiser la distribution des salaires
# plt.figure(figsize=(10, 6))
# plt.hist(donnees['Salary'], bins=20, color='pink', edgecolor='black')
# plt.title('Distribution des Salaires')
# plt.xlabel('Salaire')
# plt.ylabel('Nombre d\'employés')
# plt.show()

# Créer un diagramme de boîte pour visualiser la distribution et les outliers
# plt.figure(figsize=(10, 6))
# plt.boxplot(donnees['Salary'])
# plt.title('Diagramme de Boîte des Salaires')
# plt.ylabel('Salaire')
# plt.show()

# Créer un diagramme en barre pour la répartition des salaires par job
# plt.bar(donnees['Job'],donnees['Salary'], color='blue')
# plt.title('Répartition des Job')
# plt.xlabel('Job')
# plt.ylabel('Salaire Moyen')
# plt.xticks(rotation=45)
# plt.tight_layout()
# plt.show()


# Compter le nombre d'occurrences de chaque job
job_counts = donnees['Job'].value_counts()
plt.figure(figsize=(8, 8))
plt.pie(job_counts, labels=job_counts.index, autopct='%1.1f%%', startangle=140, colors=plt.cm.Paired.colors)
plt.show()






