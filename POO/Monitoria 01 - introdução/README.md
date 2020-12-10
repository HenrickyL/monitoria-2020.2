# **Introdução a Java**

## **Sintaxe padrão:**
```java
//import de bibliotecas
public class ClassName{//mesmo nome do arquivo
    //equivalente a main do C
    public static void main(String args[]){
        //codigo
    }
}
```

-------------------------
## **Tipos de Dados:**


<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;}
.tg td{border-color:black;border-style:solid;border-width:1px;font-family:Arial, sans-serif;font-size:14px;
  overflow:hidden;padding:10px 5px;word-break:normal;}
.tg th{border-color:black;border-style:solid;border-width:1px;font-family:Arial, sans-serif;font-size:14px;
  font-weight:normal;overflow:hidden;padding:10px 5px;word-break:normal;}
.tg .tg-9wq8{border-color:inherit;text-align:center;vertical-align:middle}
.tg .tg-uzvj{border-color:inherit;font-weight:bold;text-align:center;vertical-align:middle}
.tg .tg-nrix{text-align:center;vertical-align:middle}
</style>
<table class="tg" style="width:80vw;">
<thead>
  <tr>
    <th class="tg-9wq8"></th>
    <th class="tg-uzvj">Tipos</th>
    <th class="tg-uzvj">Tamanho(bits)</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td class="tg-uzvj">Lógico</td>
    <td class="tg-9wq8">Bool</td>
    <td class="tg-9wq8">----</td>
  </tr>
  <tr>
    <td class="tg-uzvj">Caracteres</td>
    <td class="tg-9wq8">Char</td>
    <td class="tg-9wq8">16</td>
  </tr>
  <tr>
    <td class="tg-uzvj" rowspan="4">Inteiro</td>
    <td class="tg-9wq8">Byte</td>
    <td class="tg-9wq8">8</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Short</td>
    <td class="tg-9wq8">16</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Int</td>
    <td class="tg-9wq8">32</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Long</td>
    <td class="tg-9wq8">64</td>
  </tr>
  <tr>
    <td class="tg-uzvj">Decimal</td>
    <td class="tg-9wq8">Float</td>
    <td class="tg-9wq8">32</td>
  </tr>
  <tr>
    <td class="tg-nrix"><span style="font-weight:bold">Literal</span></td>
    <td class="tg-nrix">String</td>
    <td class="tg-nrix">---</td>
  </tr>
</tbody>
</table>

```java
int a, b;
char caractere;
String texto, msg;
boolean flag;
```


<hr style="page-break-after: always;">

-------------------------
## **Operadores:**



<style type="text/css">
.tg  {border-collapse:collapse;border-spacing:0;}
.tg td{border-color:black;border-style:solid;border-width:1px;font-family:Arial, sans-serif;font-size:14px;
  overflow:hidden;padding:10px 5px;word-break:normal;}
.tg th{border-color:black;border-style:solid;border-width:1px;font-family:Arial, sans-serif;font-size:14px;
  font-weight:normal;overflow:hidden;padding:10px 5px;word-break:normal;}
.tg .tg-9wq8{border-color:inherit;text-align:center;vertical-align:middle}
.tg .tg-uzvj{border-color:inherit;font-weight:bold;text-align:center;vertical-align:middle}
</style>
<table class="tg" style="width:80vw;">
<thead>
  <tr>
    <th class="tg-uzvj">Operador</th>
    <th class="tg-uzvj">Simbolo</th>
    <th class="tg-uzvj">Tipo</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td class="tg-9wq8">Negação</td>
    <td class="tg-9wq8">!</td>
    <td class="tg-9wq8">Unário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Adição</td>
    <td class="tg-9wq8">+</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Inversão de sinal</td>
    <td class="tg-9wq8">-</td>
    <td class="tg-9wq8">Unário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Subtração</td>
    <td class="tg-9wq8">-</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Multiplicação</td>
    <td class="tg-9wq8">*</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Divisão</td>
    <td class="tg-9wq8">/</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Resto da divisão</td>
    <td class="tg-9wq8">%</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Atribuição</td>
    <td class="tg-9wq8">=</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Menor que</td>
    <td class="tg-9wq8">&lt;</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Maior que</td>
    <td class="tg-9wq8">&gt;</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Menor ou igual</td>
    <td class="tg-9wq8">&lt;=</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Maior ou igual</td>
    <td class="tg-9wq8">&gt;=</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Igual a</td>
    <td class="tg-9wq8">==</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Diferente</td>
    <td class="tg-9wq8">!=</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Conjunção(e)</td>
    <td class="tg-9wq8">&amp;&amp;</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
  <tr>
    <td class="tg-9wq8">Disjunção(ou)</td>
    <td class="tg-9wq8">||</td>
    <td class="tg-9wq8">Binário</td>
  </tr>
</tbody>
</table>


<hr style="page-break-after: always;">

-------------------------
## **Conversão de valores:**

```java
int a = (int) 10.0;
double b = (double) (a * 4);
byte c = (byte) a;
//Conversão de String para byte:
Byte.parseByte ( string )
//Conversão de String para short:
Short.parseShort ( string )
//Conversão de String para int:
Integer.parseInt ( string )
//Conversão de String para long:
Long.parseLong ( string )
//Conversão de String para float:
Float.parseFloat ( string )
//Conversão de String para double:
Double.parseDouble ( string )
//Conversão de String para boolean: 
Boolean.parseBoolean ( string )
//Conversão de byte para String:
Byte.toString ( byte )
//Conversão de short para String:
Short.toString ( short )
//Conversão de int para String:
Integer.toString ( int )
//Conversão de long para String:
Long.toString ( long )
//Conversão de float para String:
Float.toString ( float )
//Conversão de double para String:
Double.parseDouble ( double )
//Conversão de boolean para String:
Boolean.parseBoolean ( boolean )
```

-------------------------
## **Saída do Console:**

```java
//Com quebra automática de linha:
System.out.println( variável ou valor String );
//Sem quebra automática de linha:
System.out.print( variável ou valor String );
```

<hr style="page-break-after: always;">

-------------------------
## **Saída em Janela:**
```java
import javax.swing.*;
//
JOptionPane.showMessageDialog(null, variável ou valor String );
```

-------------------------
## **Entrada no Console:**
```java
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner entrada = new Scanner(System.in);
        //
        int i = entrada.nextInt();
        double d = entrada.nextDouble();
        String s = entrada.next();
        boolean b = entrada.nextBoolean();
        //ou
        double D2 = Double.parseDouble(entrada.nextLine());
    }
}
```

-------------------------
## **Entrada em Janela:**

```java
import javax.swing.*;
//
JOptionPane.showInputDialog( variável ou valor String );
```


<hr style="page-break-after: always;">

-------------------------
## **Estraturas de Controle:**

### **Estrutura If:**
```java
if ( condição ){
    //conjunto de instruções 1
}
else{
    //conjunto de instruções 2
}
```
### **Estrutura switch:**
```java
switch ( expressão ){
    case valor1:
        //conjunto de instruções 1;
        break;
    case valor2:
        //conjunto de instruções 1;
        break;
    ...
    default:
        //conjunto de instruções n;
}
```

-------------------------
## **Operador Ternário:**
```java

tipo variavel = condição ? valor_verdadeiro : valor_falso;
```

<hr style="page-break-after: always;">

-------------------------
## **Estruturas de Repetição**

### **Estrutura While:**
```java
while ( condição ){
    //conjunto de instruções;
}
```
### **Estrutura For:**
```java
for(início; condição; fim){
    //conjunto de instruções;
}
```

-------------------------
## **Arranjos em Java (Array):**

### **Declaração**
```java
tipo [] nome_variável; ou tipo nome_variável [];
```
### **Inicialização e Alocação**
```java
nome_variável = new tipo[tamanho];
```
### **Acesso a um Elemento específico**
```java
nome_variável[índice]
```

### **Número de Elementos do Arranjo**
```java
nome_variável.length
```

<hr style="page-break-after: always;">

-------------------------
## **Compilação em Linux**
```shell
# Instalação
sudo apt-get install openjdk-8-jdk

# Compilador
javac HelloWorld.java

# Execução
java HelloWorld
```

-----------------------
## **Referências**

[Java Resumo ](http://academico.riogrande.ifrs.edu.br/~azamba/1o.sem/Logica_de_Programacao/Resumo_da_Linguagem_Java.pdf)