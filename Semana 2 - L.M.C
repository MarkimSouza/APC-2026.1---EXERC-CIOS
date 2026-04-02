- Little Man Computer: Função matemática - Exponenciação.

*ASSEMBLY*

INP
        STA N
        STA COUNT

        LDA ZERO
        STA RESULTADO 

LOOP    LDA RESULTADO
        ADD N
        STA RESULTADO

        LDA COUNT
        SUB ONE
        STA COUNT

        BRZ END
        BRA LOOP

END     LDA RESULTADO
        OUT         
        HLT
