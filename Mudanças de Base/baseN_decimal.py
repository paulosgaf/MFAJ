base = int(input("Base: "))
inteiro = input("Inteiro (Letras Maiusculas): ")

alfabeto = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

base_decimal = 0
inteiro_vetor = []

for i in range(0,len(inteiro)):
	inteiro_vetor.append(alfabeto.index(inteiro[i]))

n = len(inteiro_vetor)-1;
for i in range(0,len(inteiro_vetor)):
	base_decimal = base_decimal + inteiro_vetor[i]*pow(base,n)
	n = n - 1

print(base_decimal)	
