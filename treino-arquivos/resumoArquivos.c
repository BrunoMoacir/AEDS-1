// ARQUIVOS EM C

// Arquivos permitem ler e gravar dados no disco(como.txt). Usamos isso para armazenar informações de forma permanente.
    // principais tipos:
        FILE *f // ponteiro para arquivo
    //Abrir um arquivo: fopen()
        f=fopen("arquivo.txt","modo")
        Modos:
        r - leitura
        w - escrita (apaga a anterior se existir)
        a - acrescenta 
        r+ - leitura + escrita
        w+ escrita + leitura (zera o arquivo)