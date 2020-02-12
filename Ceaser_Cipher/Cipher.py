st=input()
def encrypt(string):
	s=list(string)
	for i in range(len(s)):
		if(ord(s[i])>=65 and ord(s[i])<=90):
			s[i]=chr(((ord(s[i])-65+1)%26)+65)
		if(ord(s[i])>=97 and ord(s[i])<=122):
			s[i]=chr(((ord(s[i])-97+1)%26)+97)
	return ''.join(s)
def decrypt(string):
	s=list(string)
	for i in range(len(s)):
		if(ord(s[i])>=65 and ord(s[i])<=90):
			a=ord(s[i])-65-1
			if(a<0):
				s[i]=chr(26+a+65)
				continue
			s[i]=chr(a%26+65)
		if(ord(s[i])>=97 and ord(s[i])<=122):
			a=ord(s[i])-97-1
			if(a<0):
				s[i]=chr(26+a+97)
				continue
			s[i]=chr(a%26+97)
	return ''.join(s)
en=encrypt(st)
print(encrypt(st))
print(decrypt(en))
