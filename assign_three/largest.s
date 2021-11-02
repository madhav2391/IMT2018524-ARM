; intution behind is the same as my c program in assign 1
; assume first number is max then compare with second if less than then make it max repeat same for third

    AREA    appcode, CODE, READONLY
    EXPORT __main
    IMPORT printMsg
    ENTRY

__main FUNCTION
    MOV R1,#463;
    MOV R2,#346; moving values into registers
    MOV R3,#10; 

    MOV R5,R1;
	CMP R5,R2			; comparing a,b
	MOVLT R5,R2			;if a<b then copy b into R5 by now we have the max of first two elements
	CMP R5,R3			;Comparing max_sofar and C
	MOVLT R5,R3			;if max_Sofar<c then copy C into R5, by now we have the max of all three 

    MOV  R4, #0x20000000;Address to store result

    STR R5,[R4]			;Storing into mem

    MOV R0,R5 ; for printing

    BL printMsg

STOP B STOP
    ENDFUNC
    END


