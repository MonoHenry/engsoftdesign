O que é um Decorator?

O Decorator é um padrão de de projeto estrutural que permite o acoplamento de novos comportamentos para objetos ao colocá-los dentro de invólucros de objetos que contém os commportamentos.

Problemas que o Decorator resolve:

Suponha que exista um aplicativo de notificações, e dentro desee aplicativo possui uma classe chamada Notificar, com seus devidos métodos, então cada aplicativo deve implementar essa classe de sua devida forma para atender a sua necessidade.
Porém, e se o cliente deseja diversas formas de notificação ao mesmo tempo, por qualquer razão, dessa forma seu código vai crescendo exponencialmente, enquanto no começo possivelmente era só email, agora cliente deseja mais de 10 tipos diferentes de notificações.

Solução:

Criar um invólucro onde o código cliente vai precisar envolver um objeto notificador básico em um conjunto de decoradores que coincidem com a preferência do cliente, assim o objeto resultando seria estruturado como numa pilha.

UML:

![image](https://refactoring.guru/images/patterns/diagrams/decorator/structure.png)

Pseudo-código:

![image](https://github.com/MonoHenry/engsoftdesign/assets/142462239/ea417408-a3c7-4a76-aff5-aaea6b677109)


Nesse código, primeiramente criamos uma interface chamada componente, com seus métodos públicos, logo abaixo, a classe ConcreteComponent herda a classe componente e a implementa.

Depois criamos uma classe Decorator que também herda a classe Component, e por fim, duas classes são criadas que herdão a classe Decorator.

Suponha o seguinte código: 

   ```cpp
   Concrete* simple = new ConcreteComponent;
   Concrete* decorator1 = new ConcreteDecoratorA(simple);
   Concrete* decorator2 = new ConcreteDecoratorB(decorator1);
   ```

Estamos dessa forma criando um invólucro para um objeto do tipo Concrete, decorator2 possui mais camadas que o objeto simple, o resultado de Operation() de decorator2 seria:

>ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))

Enquanto o de simple seria:

>ConcreteComponent

