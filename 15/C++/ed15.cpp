/*
Aluno: Gabriel Xavier Borges
Matricula: 805347
atividade finalizada
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
// #include <string> // para cadeias de caracteres
#include "string.hpp"

// ----------------------------------------------- definicoes globais

void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl
             << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl
             << std::endl;
} // end pause ( )

// ----------------------------------------------- classes / pacotes

using namespace std;

// ----------------------------------------------- metodos

/**
   Method_00 - nao faz nada.
 */
void method_00()
{
   // nao faz nada
} // end method_00 ( )

/**
   Method_01.
 */
void method_01()
{
   MyString string;
   std::cout << std::endl;
   std::cout << "push back: " << std::endl;
   string.setString("abc");
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_push_back('D') << std::endl;
} // end method_01 ( )

/**
   Method_02.
 */
void method_02()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abc");
   std::cout << "pop back: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_pop_back() << std::endl;
} // end method_02 ( )

/**
   Method_03.
 */
void method_03()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abc");
   std::cout << "push front: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_push_front('A') << std::endl;
} // end method_03 ( )

/**
   Method_04.
 */
void method_04()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abc");
   std::cout << "pop front: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_pop_front() << std::endl;
} // end method_04 ( )

/**
   Method_05.
 */
void method_05()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abde");
   std::cout << "push mid: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_push_mid('C') << std::endl;
} // end method_05 ( )

/**
   Method_06.
 */
void method_06()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abcde");
   std::cout << "pop mid: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_pop_mid() << std::endl;
} // end method_06 ( )

/**
   Method_07.
 */
void method_07()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abde");
   std::cout << "insert: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_insert('X', 3) << std::endl;
} // end method_07 ( )

/**
   Method_08.
 */
void method_08()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abcde");
   std::cout << "remove: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_remove(3) << std::endl;
} // end method_08 ( )

/**
   Method_09.
 */
void method_09()
{
   MyString string;
   std::cout << std::endl;
   string.setString("theldo");
   std::cout << "search: " << std::endl;
   std::cout << string.getString() << std::endl;
   std::cout << "first position: " << string.str_chr('e') << std::endl;
} // end method_09 ( )

/**
   Method_10.
 */
void method_10()
{
   MyString string;
   std::cout << std::endl;
   string.setString("abcdef,ghij");
   std::cout << "delimiter: " << std::endl;
   std::cout << "antes: " << string.getString() << std::endl;
   std::cout << "depois: " << string.str_tok(',') << std::endl;

} // end method_10 ( )

// ----------------------------------------------- acao principal

/*
  Funcao principal.
  @return codigo de encerramento
*/
int main(int argc, char **argv)
{
   // definir dado
   int x = 0; // definir variavel com valor inicial

   // repetir até desejar parar
   do
   {
      // identificar
      std::cout << std::endl;
      cout << "estudo dirigido 15\n    " << endl;

      // mostrar opcoes
      cout << "Opcoes      " << endl;
      cout << " 0 - parar  " << endl;
      cout << " 1 -  str_push_back       " << endl;
      cout << " 2 -  str_pop_back      " << endl;
      cout << " 3 -  str_push_front      " << endl;
      cout << " 4 -  str_pop_front      " << endl;
      cout << " 5 -  str_push_mid      " << endl;
      cout << " 6 -  str_pop_mid      " << endl;
      cout << " 7 -  str_insert     " << endl;
      cout << " 8 -  str_remove      " << endl;
      cout << " 9 -  str_chr      " << endl;
      cout << "10 -  str_tok      " << endl;

      // ler do teclado
      cout << endl
           << "Entrar com uma opcao: ";
      cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_00();
         break;
      case 1:
         method_01();
         break;
      case 2:
         method_02();
         break;
      case 3:
         method_03();
         break;
      case 4:
         method_04();
         break;
      case 5:
         method_05();
         break;
      case 6:
         method_06();
         break;
      case 7:
         method_07();
         break;
      case 8:
         method_08();
         break;
      case 9:
         method_09();
         break;
      case 10:
         method_10();
         break;
      default:
         cout << endl
              << "ERRO: Valor invalido." << endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )