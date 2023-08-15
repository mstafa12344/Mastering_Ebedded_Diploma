/*
	ENG:Mustafa Ali
	              */
.section .vectors

.word 0x20001000      // Stack Pointer
.word _reset 
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler
.word vector_handler

.section .text
_reset:
	bl main
	b .
vector_handler:
	b _reset
	

