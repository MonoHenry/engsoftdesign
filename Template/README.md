O que é o Template Method?

O Template Method é um padrão de projeto comportamental que define o esqueleto de um algoritmo na superfclasse mas deixa as subclasses sobrescreverem etapas específicas do algoritmo sem modificar sua estrutura.

Problemas que o Template Method resolve:

Suponha um aplicativo que analisa documentos, de diversos tipos, mesmo a implementação da análise de dados em si sendo diferente, em geral o código entre os diferentes métodos (análise de csv, análise de pdf, por exemplo), há bastante código duplicado(openFile, analyseData, reportData, closeFile), dessa forma, criar uma superclasse, e implementar os métodos específicos em subclasses, além de resolver o problema da duplicidade de código, ainda possibilita resolver o problema de diversas condicionais com o uso de polimorfismo.

Solução:

O Template Method sugere que o algoritmo seja quebrado em diversas etapas, transforme essas etapas em métodos, e coloque uma série de chamadas para esses métodos dentro de um método padrão.

UML:

![image](https://refactoring.guru/images/patterns/diagrams/template-method/structure.png
)

Pseudo-código:

![image](https://github.com/MonoHenry/engsoftdesign/assets/142462239/49916db6-9af1-45fe-a0c1-0700df542069)

Primeiro criamos a classe base, nesse caso a AbstractClass, e definimos seu método de template, mais pra baixo, implementamos as baseOperations e criamos funções virtuais para serem implementadas pelas subclasses.

Logo abaixo temos as duas implementeções da AbstractClass, dessa forma, quando o cliente for chamar o método, ele usará o tempalteMethod() independente se é um objeto ConcreteClass1 ou ConcreteClass2, fazendo que o mesmo código funcione com diversas subclasses diferentes.
