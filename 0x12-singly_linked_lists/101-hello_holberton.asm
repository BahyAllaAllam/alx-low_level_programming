section		.text
	global	main
	extern	printf
main:
	mov		edi, format
	mov		eax, 0
	call	printf
	ret

section		.data
	format db 'Hello, Holberton', 0xa,0
