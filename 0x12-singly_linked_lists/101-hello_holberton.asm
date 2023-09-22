section 	.text
	global	main
	extern	printf
main:
	mov	edi, format
	call	printf
	mov	eax, 0

section 	.data
	format db 'Hello, Holberton', 0xa,0
