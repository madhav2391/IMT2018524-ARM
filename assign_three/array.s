
    AREA    appcode, CODE, READONLY
    EXPORT __main
    IMPORT printMsg
    ENTRY

__main FUNCTION
    MOV R0, #0x20000000 ; base adress
    MOV R1,#5; length of array
    MOV R5,#0 ; final val

    MOV R2,R0;
    MOV R4,#13 ; first element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#45; second element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#59 ; third element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#11 ; forth element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#1 ; fifth element in arr
    STR R4, [R2]

    MOV R2,R0
    LDR R6,[R2]
    MOV R7 ,R6      ;assuming first elemnt is max
    ADD R2, R2,#4 
	SUB R1,#1;

loop LDR R6,[R2]    ; looping for next 4 elemnts
    ADD R2, R2,#4 
	SUB R1,#1;

	CMP R7,R6			; comparing a,b
	MOVLT R7,R6			;if a<b then copy b into R5 by now we have the max of first two elements

    CMP R1,#00
	BNE loop

; our final val will be in R7
    MOV R0,R7
    BL printMsg
    
STOP B STOP
    ENDFUNC
    END

