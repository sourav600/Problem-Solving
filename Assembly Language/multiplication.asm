.model small
.stack 100h
.data
    a db ?
    b db ?
    msg db 0ah, 0dh, 'The multiplication is = $'
.code
main proc
    mov ax, @data
    mov ds, ax 

    mov ah,1
    int 21h
    sub al, 48
    mov a, al

    mov ah, 1
    int 21h
    sub al, 48
    mov b, al

    mul a
    aam 
    mov bx, ax

    mov ah, 2
    mov dl, bh
    add dl, 48
    int 21h

    mov ah, 2
    mov dl, bl
    add dl, 48
    int 21h

    exit:
    mov ah, 4ch
    int 21h
    main endp

end main
    
