# Soit la liste suivante :
# ['Jean-Michel', 'Marc', 'Vanessa', 'Anne', 'Maximilien',
# 'Alexandre-Benoit', 'Louise']
# Ecrivez un script qui affiche chacun de ces noms avec le nombre de caractères correspondant.



names = ['Jean-Michel', 'Marc', 'Vanessa', 'Anne', 'Maximilien', 'Alexandre-Benoit', 'Louise']

for name in names:
    print(f"{name} : {len(name)} car")
