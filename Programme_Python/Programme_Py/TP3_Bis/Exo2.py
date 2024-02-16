# Convertir une note scolaire N quelconque, entreb par l'utulisateur sous forme
# de points (Ex 27 sur 85), en une note standardisée suivant le code ci-aprés : 


note = int(input("Rentre une note : "))

if note >= 80:
    resultat = 'A'
    appreciation = 'Excellent Job'
elif 80 > note >= 60:
    resultat = 'B'
    appreciation = 'Bien Good work'
elif 60 > note >= 50:
    resultat = 'C'
    appreciation = 'Acceptable, Not enf'
elif 50 > note >= 40:
    resultat = 'D'
    appreciation = 'Insuffisant, Nulle'
else:
    resultat = 'E'
    appreciation = 'KO'

print(f"note standardise pour {note} points est : {resultat}")
print(f"Appreciation : {appreciation}")

