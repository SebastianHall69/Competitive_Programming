import sys

while True:
	n = sys.stdin.readline()
	p = sys.stdin.readline()
	if n == '':
		break
	if p == '':
		break
	print(round(int(p)**(1/int(n))))
