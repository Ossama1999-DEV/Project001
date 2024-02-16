phrase = input("Rentre une phrase à chiffrer : \n")

for i in range(len(phrase)):
    if phrase[i] == 'o':
        phrase = phrase[:i] + '0' + phrase[i+1:]
    elif phrase[i] == 'O':
        hrase = phrase[:i] + '0' + phrase[i+1:]
    elif phrase[i] == 'i':
        phrase = phrase[:i] + '1' + phrase[i+1:]
    elif phrase[i] == "e":
        phrase = phrase[:i] + '3' + phrase[i+1:]
    elif phrase[i] == 'a':
        phrase = phrase[:i] + '4' + phrase[i+1:]

print(f"Votre phrase chiffr est : {phrase} \n")



phrase = input("Rentre une phrase à chiffrer : \n")

phrase = phrase.replace('O', '0').replace('o', '0').replace('i', '1').replace('e', '3').replace('a', '4')
# phrase = phrase.replace('o', '0')
# phrase = phrase.replace('i', '1')
# phrase = phrase.replace('e', '3')
# phrase = phrase.replace('a', '4')

print(f"Votre phrase chiffrée est : {phrase} \n")
