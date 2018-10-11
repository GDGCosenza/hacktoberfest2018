import random

random_array = ['S', 'C', 'F']

play = ''

while play not in random_array:
  play = raw_input('(S)asso, (C)arta o (F)orbice? -> ').upper()

enemy = random.choice(random_array)

print  "Tu: " + play + " avversario: " + enemy

result = 'Pari'
vinto = 'Hai vinto'
perso = 'Hai perso'

if play == 'S' and enemy == 'C' or play == 'C' and enemy == 'F' or play == 'F' and enemy == 'S':
  result = perso
elif play == 'C' and enemy == 'S' or play == 'F' and enemy == 'C' or play == 'S' and enemy == 'F':
  result = vinto

print result
