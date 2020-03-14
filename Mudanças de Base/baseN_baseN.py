inteiro = input("Inteiro (Letras Maiusculas): ")
base = int(input("Base do inteiro: "))
base_c = int(input("Base conversora: "))

alfabeto = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

#BASE PARA DECIMAL

base_decimal = 0
inteiro_vetor = []

for i in range(0,len(inteiro)):
	inteiro_vetor.append(alfabeto.index(inteiro[i]))

n = len(inteiro_vetor)-1;
for i in range(0,len(inteiro_vetor)):
	base_decimal = base_decimal + inteiro_vetor[i]*pow(base,n)
	n = n - 1

#DECIMAL PARA BASE CONVERSORA

decimal = base_decimal
decimal_base_c = decimal
base_c_vetor = []

if(base_c == 1):
	base_c_vetor = ['1']*decimal

else:
	while decimal_base_c >= 1:
		div = decimal_base_c%base_c
		decimal_base_c = int(decimal_base_c/base_c) 
		base_c_vetor.append(alfabeto[div])

base_c_vetor.reverse()
base_c_final = "".join(base_c_vetor)
print(base_c_final)