O que é um Singleton?

O Singleton é um padrão de projeto que garante que uma classe tenha apenas uma instância, enquanto provê acesso global a ela.

Problemas que o Singleton resolve:

1. Garante que uma classe tenha apenas uma instância, caso alguem queira controlar o acesso a um recurso compartilhado, como uma base de dados por exemplo.
2. Fornece um ponto de acesso global para aquela instância sem o perigo da instância ser sobrescrita por outro código.

Solução:

 >Fazer um contrutor padrão privado.
 >Criar um método estático de criação que age como um construtor, chamando o construtor e salvando o objeto em um campo estático.

 Pseudo-código:

