; intution behind is using dp
; we only need the last two elements to calcute fib(n)= fib(n-1)+fib(n-2)
; using only those two in registers r1 and r2 we get our result

    AREA    appcode, CODE, READONLY
    EXPORT __main
    ENTRY

__main FUNCTION
    MOV R1,#0;
    MOV R2,#1;
    MOV R3,#10; loop variable

fibo CMP R3, #0
    BLE STOP

    ADD R2,R2,R1;
    SUB R1,R2,R1;

    SUB R3,#1;

    B fibo

STOP B STOP
    ENDFUNC
    END


