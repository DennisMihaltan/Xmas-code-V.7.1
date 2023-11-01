#include <iostream>
#include <string>
#include <windows.h>  // for colors and sleep function

using namespace std;

int main() {
    
    bool keepGoing = true;

    while (keepGoing) {
        
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        printf(" [a] Name1    [f] Name6    [k] Name11\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        printf(" [b] Name2    [g] Name7                \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        printf(" [c] Name3    [h] Name8               \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        printf(" [d] Name4    [i] Name9                 \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        printf(" [e] Name5    [j] Name10                \n\n\n");

        
        cout << "Qual'è la lettera corrispondente al tuo nome?: ";
        char lettera;
        cin >> lettera;

        
        switch (lettera)
        {
        case 'a':

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;


        case 'b':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'c':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);


            break;

        case 'd':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'e':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'f':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'g':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'h':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'i':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;

        case 'j':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);
            break;



        case 'k':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("                A                \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("               AAA               \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("              AAAAA              \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("             AAAAAAA             \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("            AAAAAAAAA            \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("           AAAAAAAAAAA           \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("          AAAAAAAAAAAAA          \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("         AAAAAAAAAAAAAAA         \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            printf("        AAAAAAAAAAAAAAAAA        \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            printf("       AAAAAAAAAAAAAAAAAAA       \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |       |            \n");
            printf("            |_______|            \n\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cout << "\tB";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "N";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "t";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << ".";
            Sleep(10);
            cout << " ";
            Sleep(10);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "E";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "f";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << "l";
            Sleep(10);
            cout << "i";
            Sleep(10);
            cout << "c";
            Sleep(10);
            cout << "e";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "a";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << " ";
            Sleep(10);
            cout << "n";
            Sleep(10);
            cout << "u";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "v";
            Sleep(10);
            cout << "o";
            Sleep(10);
            cout << "!";
            Sleep(20);
            cout << "!";
            Sleep(20);
            cout << "!\n\n\n";

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cout << "Cara/o...\n";
            cout << "... \n";
            cout << "...\n";

            Sleep(5000);

            break;

            }

        
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "Vuoi continuare? (s/n): ";
        char choice;
        cin >> choice;
        cout << "\n";

        
        if (choice == 'n') {
            keepGoing = false;
        }
    }

    system("cls");
    Sleep(3000);
    cout << "\n\n\nD";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "v";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "p";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "d";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "b";
    Sleep(10);
    cout << "y";
    Sleep(10);
    cout << ":";
    Sleep(10);
    cout << "                ";
    Sleep(10);
    cout << "D";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "s";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "M";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "h";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << "t";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << ".";
    Sleep(3000);
    cout << "\n";
    Sleep(10);
    cout << "D";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "v";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "p";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << "d";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "f";
    Sleep(10);
    cout << "r";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "m";
    Sleep(10);
    cout << ":";
    Sleep(10);
    cout << "              ";
    Sleep(10);
    cout << "10";
    Sleep(10);
    cout << "/";
    Sleep(10);
    cout << "12";
    Sleep(10);
    cout << "/";
    Sleep(10);
    cout << "2022";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "t";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "24";
    Sleep(10);
    cout << "/";
    Sleep(10);
    cout << "12";
    Sleep(10);
    cout << "/";
    Sleep(10);
    cout << "2022   (New changes on 30/10/2023)";
    Sleep(3000);
    cout << "\nI";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "c";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "b";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "r";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "t";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "w";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "t";
    Sleep(10);
    cout << "h:";
    Sleep(10);
    cout << "       ";
    Sleep(10);
    cout << "V";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "s";
    Sleep(10);
    cout << "u";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "l";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "s";
    Sleep(10);
    cout << "t";
    Sleep(10);
    cout << "u";
    Sleep(10);
    cout << "d";
    Sleep(10);
    cout << "i";
    Sleep(10);
    cout << "o";
    Sleep(10);
    cout << " ";
    Sleep(10);
    cout << "2";
    Sleep(10);
    cout << "0";
    Sleep(10);
    cout << "2";
    Sleep(10);
    cout << "2";
    Sleep(3000);
    cout << "\nL";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "n";
    Sleep(10);
    cout << "g";
    Sleep(10);
    cout << "u";
    Sleep(10);
    cout << "a";
    Sleep(10);
    cout << "g";
    Sleep(10);
    cout << "e";
    Sleep(10);
    cout << ":";
    Sleep(10);
    cout << "                    ";
    Sleep(10);
    cout << "C";
    Sleep(10);
    cout << "+";
    Sleep(10);
    cout << "+\n";
    Sleep(3000);
        cout << "V";
        Sleep(10);
        cout << "e";
        Sleep(10);
        cout << "r";
        Sleep(10);
        cout << "s";
        Sleep(10);
        cout << "i";
        Sleep(10);
        cout << "o";
        Sleep(10);
        cout << "n";
        Sleep(10);
        cout << ":";
        Sleep(10);
        cout << "                     ";
        Sleep(10);
        cout << "V";
        Sleep(10);
        cout << ".";
        Sleep(10);
        cout << "7";
        Sleep(10);
        cout << ".";
        Sleep(10);
        cout << "1";
        Sleep(10);
        cout << " ";
        Sleep(10);
        cout << "(";
        Sleep(10);
        cout << "N";
        Sleep(10);
        cout << "e";
        Sleep(10);
        cout << "w";
        Sleep(10);
        cout << " ";
        Sleep(10);
        cout << "r";
        Sleep(10);
        cout << "e";
        Sleep(10);
        cout << "l";
        Sleep(10);
        cout << "e";
        Sleep(10);
        cout << "a";
        Sleep(10);
        cout << "s";
        Sleep(10);
        cout << "e on 30/10/2023";
        Sleep(10);
        cout << ")\n";
        cout << "Total strings:               1684\n";
        Sleep(3000);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);

    system("cls"); //   Fake loading bar
    printf("[*]1/100");
    Sleep(1000);
    system("cls");
    printf("[**]15/100");
    Sleep(500);
    system("cls");
    printf("[***]20/100");
    Sleep(500);
    system("cls");
    printf("[****]25/100");
    Sleep(500);
    system("cls");
    printf("[*****]50/100");
    Sleep(500);
    system("cls");
    printf("[******]65/100");
    Sleep(500);
    system("cls");
    printf("[*******]71/100");
    Sleep(500);
    system("cls");
    printf("[********]85/100");
    Sleep(500);
    system("cls");
    printf("[*********]99/100");
    Sleep(600);
    system("cls");
    printf("[**********]100/100");



    Sleep(3);
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    system("start     michael-buble-winter-wonderland-official-hd.mp3"); //   Audio

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona

    system("start     ...jpg"); //   Image
    Sleep(2000);
    system("taskkill /F /IM     ...jpg");   //   Non funziona


    system("cls");
    system("exit");

    return 0;
}       
