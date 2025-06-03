1. Se não especificou é privado(em C++, membros de classe são privados por padrão)

2. privado: dados | publico: funções

3. This conta quem é o objeto
exemplo: void setNome(string nome){
    this->nome = nome; // Distingue atributo do parâmetro
}
4. Mesmo nome, preferencia é a variavel local(variaveis locais têm prioridade sobre atributos da classe. Use this para acessar o atributo)