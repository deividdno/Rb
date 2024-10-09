#include <stdio.h>

enum interruptores { INTERRUPTOR1, INTERRUPTOR2, INTERRUPTOR3 };
enum lampadas { LAMPADA1, LAMPADA2, LAMPADA3 };

void toggle_interruptor(enum interruptores interruptor_num, int ligar_desligar) {
    // Simule o interruptor sendo ligado ou desligado
    printf("Interruptor %d agora est� %s\n", interruptor_num + 1, ligar_desligar ? "LIGADO" : "DESLIGADO");
}

void observar_lampadas(enum lampadas lampada1, enum lampadas lampada2, enum lampadas lampada3) {
    printf("L�mpada 1 est� %s, L�mpada 2 est� %s, L�mpada 3 est� %s\n",
           lampada1 == LAMPADA1 ? "LIGADA" : lampada1 == LAMPADA2 ? "QUENTE" : "DESLIGADA",
           lampada2 == LAMPADA1 ? "LIGADA" : lampada2 == LAMPADA2 ? "QUENTE" : "DESLIGADA",
           lampada3 == LAMPADA1 ? "LIGADA" : lampada3 == LAMPADA2 ? "QUENTE" : "DESLIGADA");
}

int main() {
    toggle_interruptor(INTERRUPTOR1, 1); // Ligue o interruptor 1 por 5 minutos
    toggle_interruptor(INTERRUPTOR1, 0); // Desligue o interruptor 1
    toggle_interruptor(INTERRUPTOR2, 1); // Ligue o interruptor 2

    observar_lampadas(LAMPADA1, LAMPADA2, LAMPADA3);

    toggle_interruptor(INTERRUPTOR2, 0); // Desligue o interruptor 2
    toggle_interruptor(INTERRUPTOR3, 1); // Ligue o interruptor 3

    observar_lampadas(LAMPADA1, LAMPADA2, LAMPADA3);

    if (/* ... */)
        printf("Interruptor 1 controla a L�mpada 1\n");
    else if (/* ... */)
        printf("Interruptor 2 controla a L�mpada 1\n");
    else
        printf("Interruptor 3 controla a L�mpada 1\n");

    return 0;
}
