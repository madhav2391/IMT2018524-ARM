; intution behind is using dp
; we only need the last two elements to calcute fib(n)= fib(n-1)+fib(n-2)
; using only those two in registers r1 and r2 we get our result

    AREA    appcode, CODE, READONLY
    EXPORT __main
    IMPORT printMsg
    ENTRY

__main FUNCTION
    MOV R7,#0;
    MOV R8,#1;
    MOV R6,#10; loop variable

fibo CMP R6, #0 ; loop will be printing from second element hence here we get values from fib(2) to fib(11) both inclusive
    BLE STOP

    ADD R8,R8,R7;
    MOV R0,R8
    BL printMsg
    SUB R7,R8,R7;

    SUB R6,#1;

    B fibo

STOP B STOP
    ENDFUNC
    END


