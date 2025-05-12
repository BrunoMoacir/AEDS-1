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
    // fechar arquivo (nunca esquecer)
        fclose(f); 

        // exemplo 
        FILE *F;
        F = Fopen ("arquivo.txt", "r"); // o arquivo tem que existir
        F = Fopen("arquivo.txt", "w"); // cria se nao tiver arquivo
        F = Fopen ("arquivo.txt", "rb"); // leitura de arquivo binario

        O FILE * F SEMPRE É INICIALIZADO COMO PONTEIRO

        // exemplo basico
        #include <stdio.h>

            int main() {
                FILE *f = fopen("dados.txt", "w");
                
                if (f == NULL) {
                    printf("Erro ao abrir.\n");
                    return 1;
                }

                fprintf(f, "Olá, mundo!\n");
                fclose(f);

                return 0;
            }

            // resumo basico 2
            int main (){
                FILE *f; // declara um ponteiro para arquivo
                f = fopen ("exemplo.txt","w"); // abre ou cria o arquivo no modo escrita

                if (f == NULL){
                    printf("erro ao abrir o arquivo para escrita.\n");
                    return 1;
                }

                fprintf(f, "1.a escrita no arquivo!\n")// escreve um linha no arquivo
                fprintf(f, "mais uma linha.\n")

                fclose (f); // fechamento do arquivo

                return 0;
            }