decimal = int(input("Decimal: "))
base = int(input("Base: "))

alfabeto = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

decimal_base = decimal
base_vetor = []

if(base == 1):
	base_vetor = ['1']*decimal

else:
	while decimal_base >= 1:
		div = decimal_base%base
		decimal_base = int(decimal_base/base) 
		base_vetor.append(alfabeto[div])

base_vetor.reverse()
base_final = "".join(base_vetor)
print(base_final)