O que é um Singleton?

O Singleton é um padrão de projeto que garante que uma classe tenha apenas uma instância, enquanto provê acesso global a ela.

Problemas que o Singleton resolve:

1. Garante que uma classe tenha apenas uma instância, caso alguem queira controlar o acesso a um recurso compartilhado, como uma base de dados por exemplo.
2. Fornece um ponto de acesso global para aquela instância sem o perigo da instância ser sobrescrita por outro código.

Solução:

 - Fazer um contrutor padrão privado.
 - Criar um método estático de criação que age como um construtor, chamando o construtor e salvando o objeto em um campo estático.


UML:
![image](https://refactoring.guru/images/patterns/diagrams/singleton/structure-pt-br.png)


 Pseudo-código:
![image](https://github.com/MonoHenry/engsoftdesign/assets/142462239/54a8d56d-3d7e-4962-b9db-88752d811d5c)

Aqui vemos que declaramos uma classe, mas o construtor é protegido, quando normalmente os contrutores são públicos, pois dessa forma apenas a própria classe pode criar um objeto.
Logo em seguida percebemos que há métodos públicos, o primeiro impede que o Singleton seja clonado, o segudo é  um operator overload para impedir que o Singleton seja atribuível, em seguida temos o método para pegarmos a instância, e depois temos a lógica de negócio, que não possui nada dentro por que é apenas um exemplo, não necessariamente funcional.

E em baixo vemos a implementação do GetInstance, onde percebemos que caso pisntance_ = nullptr, ou seja, ele não possua valor, então um Singleton é criado, dessa forma, toda vez que esse método for chamado, como pinstace_ não será mais nullptr depois da primeira vez, o Singleton retornado sempre será o mesmo

Percebe-se que há duas linhas de código acima da implementação do metódo, elas são apenas as definições dos métodos estáticos.

