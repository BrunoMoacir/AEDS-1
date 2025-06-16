// polimorfismo fraco: varias funcoes com o mesmo nome, mas com parametros diferentes
double area(double lado);
double area(double base, double altura);
// polimorfismo forte: uma funcao que aceitam um array de Animal
// funciona para Cachorro, Gato, e qualquer animal 
void listaAnimal(Animal animal[]){
    for(int i = 0; i < 3; i++){
        cout<<endl<<animal[i].getNome();
    }
}
// funcao virtual: autoriza que sua implementacao seja sobrescrita(especializada)nas classes derivadas, quando chamada atraves de um ponteiro ou referencia da classe base, a versao da funcao da classe sera executada
exemplo com o metodo fala():
1. na classe Animal, o metodo fala() é declarado como virtual
2. na classe Cachorro, fala() é implementado para imprimir "au au"
3. na classe Gato, fala() é implementado para imprimir "miau"
void falaAnimais(Animal animal[]){
    for(int i = 0; i < 3; i++){
        animal[i].fala();
    }
}
// funcao virtual pura: é uma funcao virtual que nao tem implementacao na classe base, ela é declarada igualando sua assinatura a zero. Isso obriga as classes derivadas a fornecerem sua implementacao propria
// classe abstrada: uma classe que possui pelo menos uma funcao virtual se torna abstrata. nao é possivel criar instancias de uma classe abstrata
class Animal{
    public:
    virtual void fala() = 0;
};