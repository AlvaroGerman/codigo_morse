#include <iostream>
#include <string>
#include <cctype>   // toupper

using namespace std;
int main()
{
    string codigo;

    cout << "\n Ingresar la palabra o palabras: ";
    //getline,nos permite  almacena frases con y sin espacios.
    getline(cin, codigo);

    cout << endl;

    for (int i = 0; i < codigo.size(); i++)
    {
        //toupper me devuelve una copia de esta cadena convertida en may�sculas.
        char c = toupper(codigo[i]);

        switch (c)
        {
                case 'A': cout << ".- "; break;
                case 'B': cout << "-... "; break;
                case 'C': cout << "-.-. "; break;
                case 'D': cout << "-.. "; break;
                case 'E': cout << ". "; break;
                case 'F': cout << "..-. "; break;
                case 'G': cout << "--. "; break;
                case 'H': cout << ".... "; break;
                case 'I': cout << ".. "; break;
                case 'J': cout << ".--- "; break;
                case 'K': cout << "-.- "; break;
                case 'L': cout << ".-.. "; break;
                case 'M': cout << "-- "; break;
                case 'N': cout << "-. "; break;
                case 'O': cout << "--- "; break;
                case 'P': cout << ".--. "; break;
                case 'Q': cout << "--.- "; break;
                case 'R': cout << ".-. "; break;
                case 'S': cout << "... "; break;
                case 'T': cout << "- "; break;
                case 'U': cout << "..- "; break;
                case 'V': cout << "...- "; break;
                case 'W': cout << ".-- "; break;
                case 'X': cout << "-..- "; break;
                case 'Y': cout << "-.-- "; break;
                case 'Z': cout << "--.. "; break;
                case ' ': cout << " / "; break;
                case '0': cout << "----- "; break;
                case '1': cout << ".---- "; break;
                case '2': cout << "..--- "; break;
                case '3': cout << "...-- "; break;
                case '4': cout << "....- "; break;
                case '5': cout << "..... "; break;
                case '6': cout << "-.... "; break;
                case '7': cout << "--... "; break;
                case '8': cout << "----. "; break;


        }
    }

    cout <<endl;

    return 0;

}
