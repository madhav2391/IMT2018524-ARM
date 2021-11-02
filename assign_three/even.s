
    AREA    appcode, CODE, READONLY
    EXPORT __main
    IMPORT printMsg
    ENTRY

__main FUNCTION
    MOV R0, #0x20000000 ; base adress
    MOV R1,#5; length of array
    MOV R5,#0 ; final val

    MOV R2,R0;
    MOV R4,#1 ; first element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#4 ; second element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#9 ; third element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#11 ; forth element in arr
    STR R4, [R2]
    ADD R2, R2,#4 

    MOV R4,#18 ; fifth element in arr
    STR R4, [R2]

    MOV R2,R0

loop LDR R6,[R2]          ; loading the ith element
    ADD R2, R2,#4           
	SUB R1,#1

    TST R6,#01; bitwsise and operation

	ADDEQ R5,#0x1;

    CMP R1,#00
	BNE loop

; our final val will be in R5
    MOV R0,R5
    BL printMsg

STOP B STOP
    ENDFUNC
    END

