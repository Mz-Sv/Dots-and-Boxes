#include <iostream>
#include <cstdlib>
#include <random>
//baraye randoma
#include <unistd.h>
//baraye sleepa
#include <ctime>
//baraye time srannd
using namespace std;

//ya ali madad.
void titre(char player1[], char player2[], int point1, int point2, int N1, int N2);

int main() {
    srand(time(nullptr));
    while (true) {
        char mode = '0';
        while (mode != '1' && mode != '2') {
            system("cls");
            cout << "#========================================#\n";
            cout << "|                                        |\n";
            cout << "|     select your game mode (1 or 2):    |\n";
            cout << "|                                        |\n";
            cout << "#========================================#\n";
            cout << "|                                        |\n";
            cout << "|             1 : two players            |\n";
            cout << "|      2 : one player with computer      |\n";
            cout << "|                                        |\n";
            cout << "#========================================#\n";
            cin >> mode;
        }
        //############################################
        //         halate 2 naafare
        if (mode == '1') {
            system("cls");
            char a_player[10], b_player[10];
            int Na = 0, Nb = 0;
            //name player avval
            system("cls");
            cout << "#========================================#\n";
            cout << "|           Enter your name and          |\n";
            cout << "|         Enter a \".\" at the end         |\n";
            cout << "|           Example : mehrzad.           |\n";
            cout << "|          Maximum 20 character          |\n";
            cout << "#========================================#\n";
            cout << "|                                        |\n";
            cout << "|             name player 1 :            |\n";
            cout << "|                                        |\n";
            cout << "#========================================#\n";
            while (true) {
                cin >> a_player[Na];
                if (a_player[Na] == '.' || Na == 20) {
                    break;
                }
                Na++;
            }
            //name player dovvom
            system("cls");
            cout << "#========================================#\n";
            cout << "|           Enter your name and          |\n";
            cout << "|         Enter a \".\" at the end         |\n";
            cout << "|           Example : mehrzad.           |\n";
            cout << "|          Maximum 20 character          |\n";
            cout << "#========================================#\n";
            cout << "|                                        |\n";
            cout << "|             name player 2 :            |\n";
            cout << "|                                        |\n";
            cout << "#========================================#\n";
            while (true) {
                cin >> b_player[Nb];
                if (b_player[Nb] == '.' || Nb == 20) {
                    break;
                }
                Nb++;
            }
            //taarife map
            char map[19][28]{'*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ',
                             ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                             ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*',};
            // size
            char size = '0';
            while ((size != '1') && (size != '2') && (size != '3')) {
                system("cls");
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|       select size (1 or 2 or 3) :      |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|             1 : normal (4*4)           |\n";
                cout << "|          2 : professional (6*6)        |\n";
                cout << "|            3 : custom (n*n)            |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cin >> size;
            }
            int satrARR, stonARR, box;
            static int N;
            if (size == '1') {
                system("cls");
                N = 4;
            }
            if (size == '2') {
                system("cls");
                N = 6;
            }
            if (size == '3') {
                char number = '0';
                while ((number != '2') && (number != '3') && (number != '4') && (number != '5') && (number != '6') && (number != '7') && (number != '8') && (number != '9')) {
                    system("cls");
                    cout << "#========================================#\n";
                    cout << "|                                        |\n";
                    cout << "|           send size (2 - 9) :          |\n";
                    cout << "|                                        |\n";
                    cout << "#========================================# \n";
                    cin >> number;
                    N = number - 48;
                    system("cls");
                }
            }
            satrARR = N * 2 - 2;
            stonARR = N * 3 - 3;
            box = N - 1;
            //taeene nobat
            static int nobat;
            char nbt = '0';
            while (nbt != 'A' && nbt != 'B') {
                system("cls");
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|            Who starts first?           |\n";
                cout << "|       \"A\" for you  or  \"B\" for PC      |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cin >> nbt;
            }
            if (nbt == 'A')
                nobat = 0;
            if (nbt == 'B')
                nobat = 1;
            // mire too game
            while (true) {
                system("cls");
                static int pointA, pointB;
                //titre
                titre(a_player, b_player, pointA, pointB, Na, Nb);
                //map
                for (int i = 0; i <= satrARR; i++) {
                    cout << "|";
                    if (N % 2 == 0) {
                        for (int p = 0; p < ((-1.5) * N + 21); p++) {
                            cout << " ";
                        }
                    }
                    if (N % 2 == 1) {
                        for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                            cout << " ";
                        }
                    }
                    for (int j = 0; j <= stonARR; ++j) {
                        cout << map[i][j];
                    }
                    if (N % 2 == 0) {
                        for (int p = 0; p < ((-1.5) * N + 21); p++) {
                            cout << " ";
                        }
                    }
                    if (N % 2 == 1) {
                        for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                            cout << " ";
                        }
                    }
                    cout << "|";
                    cout << endl;
                }
                //nobat
                if (nobat % 2 == 0) {
                    cout << "#========================================#\n";
                    cout << "|              nobate A ast              |\n";
                    cout << "#========================================#\n";
                }
                if (nobat % 2 == 1) {
                    cout << "#========================================#\n";
                    cout << "|              nobate B ast              |\n";
                    cout << "#========================================#\n";
                }
                //give mokhtasate karbar
                int type, satrUSR = 0, stonUSR = 0, x, y, z;
                cout << "|          send your mokhtasat :         |\n";
                cout << "#========================================#\n";
                cin >> type >> satrUSR >> stonUSR;
                cout << "";
                system("cls");
                //check mokhtasate karbar
                if (type == 0) {
                    if (((satrUSR <= (satrARR + 2) / 2) && (satrUSR > 0) && (stonUSR > 0) && (stonUSR < (stonARR + 3) / 3)) &&
                        (map[(satrUSR * 2 - 2)][(stonUSR * 3 - 2)] != '-')) {
                        x = (satrUSR * 2 - 2);
                        y = (stonUSR * 3 - 2);
                        z = y + 1;
                        map[x][y] = '-';
                        map[x][z] = '-';
                        nobat++;
                    }
                }
                if (type == 1) {
                    if (((stonUSR <= (satrARR + 2) / 2) && (satrUSR > 0) && (stonUSR > 0) && (satrUSR < (stonARR + 3) / 3)) &&
                        (map[(satrUSR * 2 - 1)][(stonUSR * 3 - 3)] != '|')) {
                        x = (satrUSR * 2 - 1);
                        y = (stonUSR * 3 - 3);
                        map[x][y] = '|';
                        nobat++;
                    }
                }
                // check emtiaz
                int I, J, K = 0;
                for (I = 1; I < 19; ++I) {
                    for (J = 0; J < 28; J = J + 3) {
                        if ((map[I][J] == '|') &&
                            (map[I][J + 3] == '|') &&
                            (map[I - 1][J + 1] == '-') &&
                            (map[I + 1][J + 1] == '-')) {
                            if (map[I][J + 1] == ' ') {
                                if (K % 2 == 1) {
                                    nobat++;
                                }
                                if (nobat % 2 == 1) {
                                    map[I][J + 1] = 'A';
                                    pointA++;
                                    K++;
                                }
                                if (nobat % 2 == 0) {
                                    map[I][J + 1] = 'B';
                                    pointB++;
                                    K++;
                                }
                                nobat++;
                            }
                        }
                    }
                }
                // check end game
                if (pointA + pointB == box * box) {
                    system("cls");
                    //titre nahaee
                    titre(a_player, b_player, pointA, pointB, Na, Nb);
                    //map nahaee
                    for (int i = 0; i <= satrARR; i++) {
                        cout << "|";
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                                cout << " ";
                            }
                        }
                        for (int j = 0; j <= stonARR; ++j) {
                            cout << map[i][j];
                        }
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                                cout << " ";
                            }
                        }
                        cout << "|";
                        cout << endl;
                    }
                    //elame barandeh
                    if (pointA > pointB) {
                        cout << "#========================================#\n";
                        cout << "|            *** A  Win!!! ***           |" << endl;
                    }
                    if (pointA < pointB) {
                        cout << "#========================================#\n";
                        cout << "|            *** B  Win!!! ***           |"
                             << endl;
                    }
                    if (pointA == pointB) {
                        cout << "#========================================#\n";
                        cout << "|            *** Mosavi!!! ***           |"
                             << endl;

                    }
                    pointA = 0;
                    pointB = 0;
                    nobat = 0;
                    break;
                }
            }
        }
        //############################################
        //         halate 1 nafare ba pc
        if (mode == '2') {
            char a_player[10];
            char pc_player[10];
            //name player avval
            system("cls");
            cout << "#========================================#\n";
            cout << "|           Enter your name and          |\n";
            cout << "|         Enter a \".\" at the end         |\n";
            cout << "|           Example : mehrzad.           |\n";
            cout << "|          Maximum 20 character          |\n";
            cout << "#========================================#\n";
            cout << "|                                        |\n";
            cout << "|             name player 1 :            |\n";
            cout << "|                                        |\n";
            cout << "#========================================#\n";
            int Na = 0;
            while (true) {
                cin >> a_player[Na];
                if (a_player[Na] == '.' || Na == 20) {
                    break;
                }
                Na++;
            }
            //name PC
            pc_player[0] = 'c';
            pc_player[1] = 'o';
            pc_player[2] = 'm';
            pc_player[3] = 'p';
            pc_player[4] = 'u';
            pc_player[5] = 't';
            pc_player[6] = 'e';
            pc_player[7] = 'r';
            //taarife map
            char map[19][28]{'*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ',
                             ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                             ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', '*',};
            // size
            char size = '0';
            while ((size != '1') && (size != '2') && (size != '3')) {
                system("cls");
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|       select size (1 or 2 or 3) :      |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|             1 : normal (4*4)           |\n";
                cout << "|          2 : professional (6*6)        |\n";
                cout << "|            3 : custom (n*n)            |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cin >> size;
            }
            int satrARR, stonARR, box;
            static int N;
            if (size == '1') {
                system("cls");
                N = 4;
            }
            if (size == '2') {
                system("cls");
                N = 6;
            }
            if (size == '3') {
                char number = '0';
                while ((number != '2') && (number != '3') && (number != '4') && (number != '5') && (number != '6') && (number != '7') && (number != '8') && (number != '9')) {
                    system("cls");
                    cout << "#========================================#\n";
                    cout << "|                                        |\n";
                    cout << "|          send size (2 - 9) :           |\n";
                    cout << "|                                        |\n";
                    cout << "#========================================# \n";
                    cin >> number;
                    N = number - 48;
                    system("cls");
                }

            }
            satrARR = N * 2 - 2;
            stonARR = N * 3 - 3;
            box = N - 1;
            //taeene nobat
            static int nobat;
            char nbt = '0';
            while (nbt != 'A' && nbt != 'B') {
                system("cls");
                cout << "#========================================#\n";
                cout << "|                                        |\n";
                cout << "|            Who starts first?           |\n";
                cout << "|       \"A\" for you  or  \"B\" for PC      |\n";
                cout << "|                                        |\n";
                cout << "#========================================#\n";
                cin >> nbt;
            }
            if (nbt == 'A')
                nobat = 0;
            if (nbt == 'B')
                nobat = 1;
            // mire too game
            while (true) {
                system("cls");
                static int pointA, pointPC;
                //titre
                titre(a_player, pc_player, pointA, pointPC, Na, 8);
                // nobat karbar
                if (nobat % 2 == 0) {
                    //map
                    for (int i = 0; i <= satrARR; i++) {
                        cout << "|";
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                                cout << " ";
                            }
                        }
                        for (int j = 0; j <= stonARR; ++j) {
                            cout << map[i][j];
                        }
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                                cout << " ";
                            }
                        }
                        cout << "|";
                        cout << endl;
                    }
                    cout << "#========================================#\n";
                    cout << "|              nobate A ast!             |\n";
                    cout << "#========================================#\n";
                }
                //give mokhtasate karbar
                int type, satrUSR = 0, stonUSR = 0, x, y, z;
                if (nobat % 2 == 0) {
                    cout << "|          send your mokhtasat :         |\n";
                    cout << "#========================================#\n";
                    cin >> type >> satrUSR >> stonUSR;
                    system("cls");
                    cout << "";
                }
                //check mokhtasate karbar
                if (nobat % 2 == 0) {
                    if (type == 0) {
                        if (((satrUSR <= (satrARR + 2) / 2) && (satrUSR > 0) && (stonUSR > 0) && (stonUSR < (stonARR + 3) / 3)) &&
                            (map[(satrUSR * 2 - 2)][(stonUSR * 3 - 2)] != '-')) {
                            x = (satrUSR * 2 - 2);
                            y = (stonUSR * 3 - 2);
                            z = y + 1;
                            map[x][y] = '-';
                            map[x][z] = '-';
                            nobat++;
                        }
                    }
                    if (type == 1) {
                        if (((stonUSR <= (satrARR + 2) / 2) && (satrUSR > 0) && (stonUSR > 0) && (satrUSR < (stonARR + 3) / 3)) &&
                            (map[(satrUSR * 2 - 1)][(stonUSR * 3 - 3)] != '|')) {
                            x = (satrUSR * 2 - 1);
                            y = (stonUSR * 3 - 3);
                            map[x][y] = '|';
                            nobat++;
                        }
                    }
                    // check emtiaz
                    int I, J, K = 0;
                    for (I = 1; I < 19; ++I) {
                        for (J = 0; J < 28; J = J + 3) {
                            if ((map[I][J] == '|') &&
                                (map[I][J + 3] == '|') &&
                                (map[I - 1][J + 1] == '-') &&
                                (map[I + 1][J + 1] == '-')) {
                                if (map[I][J + 1] == ' ') {
                                    if (K % 2 == 1) {
                                        nobat++;
                                    }
                                    if (nobat % 2 == 1) {
                                        map[I][J + 1] = 'A';
                                        pointA++;
                                        K++;
                                    }
                                    nobat++;
                                }
                            }
                        }
                    }
                    // check end game
                    if (pointA + pointPC == box * box) {
                        system("cls");
                        //titre nahaee
                        titre(a_player, pc_player, pointA, pointPC, Na, 8);
                        //map nahaee
                        for (int i = 0; i <= satrARR; i++) {
                            cout << "|";
                            if (N % 2 == 0) {
                                for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                    cout << " ";
                                }
                            }
                            if (N % 2 == 1) {
                                for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                                    cout << " ";
                                }
                            }
                            for (int j = 0; j <= stonARR; ++j) {
                                cout << map[i][j];
                            }
                            if (N % 2 == 0) {
                                for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                    cout << " ";
                                }
                            }
                            if (N % 2 == 1) {
                                for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                                    cout << " ";
                                }
                            }
                            cout << "|";
                            cout << endl;
                        }
                        //elame barandeh
                        if (pointA > pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** A  Win!!! ***           |" << endl;
                        }
                        if (pointA < pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** B  Win!!! ***           |"
                                 << endl;
                        }
                        if (pointA == pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** Mosavi!!! ***           |"
                                 << endl;
                        }
                        pointPC = 0;
                        pointA = 0;
                        nobat = 0;
                        break;
                    }
                }
                // nobat PC
                if (nobat % 2 == 1) {
                    system("cls");
                    //titre
                    titre(a_player, pc_player, pointA, pointPC, Na, 8);
                    //map
                    for (int i = 0; i <= satrARR; i++) {
                        cout << "|";
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                                cout << " ";
                            }
                        }
                        for (int j = 0; j <= stonARR; ++j) {
                            cout << map[i][j];
                        }
                        if (N % 2 == 0) {
                            for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                cout << " ";
                            }
                        }
                        if (N % 2 == 1) {
                            for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                                cout << " ";
                            }
                        }
                        cout << "|";
                        cout << endl;
                    }
                    cout << "#========================================#\n";
                    cout << "|              nobate B ast!             |\n";
                    cout << "#========================================#\n";
                    cout << "|          send your mokhtasat :         |\n";
                    cout << "#========================================#\n";
                    int s = 0;
                    int I1, J1;
                    //khoone begir
                    for (I1 = 1; I1 < 19; ++I1) {
                        for (J1 = 0; J1 < 28; J1 = J1 + 3) {
                            if ((map[I1][J1] == '|') && (nobat % 2 == 1) &&
                                (map[I1][J1 + 3] == '|') &&
                                (map[I1 - 1][J1 + 1] == '-') &&
                                (map[I1][J1 + 1] == ' ')) {
                                map[I1 + 1][J1 + 1] = '-';
                                map[I1 + 1][J1 + 2] = '-';
                                //usleep(100000);
                                cout << "0" << " ";
                                //usleep(100000);
                                cout << (I1 + 3) / 2 << " ";
                                //usleep(100000);
                                cout << (J1 + 3) / 3 << " " << "\n";
                                nobat++;
                                s++;
                            }
                            if ((map[I1][J1] == '|') && (nobat % 2 == 1) &&
                                (map[I1][J1 + 3] == '|') &&
                                (map[I1 + 1][J1 + 1] == '-') &&
                                (map[I1][J1 + 1] == ' ')) {
                                map[I1 - 1][J1 + 1] = '-';
                                map[I1 - 1][J1 + 2] = '-';
                                //usleep(100000);
                                cout << "0" << " ";
                                //usleep(100000);
                                cout << (I1 + 1) / 2 << " ";
                                //usleep(100000);
                                cout << (J1 + 3) / 3 << " " << "\n";
                                nobat++;
                                s++;
                            }
                            if ((map[I1][J1 + 3] == '|') && (nobat % 2 == 1) &&
                                (map[I1 - 1][J1 + 1] == '-') &&
                                (map[I1 + 1][J1 + 1] == '-') &&
                                (map[I1][J1 + 1] == ' ')) {
                                map[I1][J1] = '|';
                                //usleep(100000);
                                cout << "1" << " ";
                                //usleep(100000);
                                cout << (I1 + 1) / 2 << " ";
                                //usleep(100000);
                                cout << (J1 + 3) / 3 << " " << "\n";
                                nobat++;
                                s++;
                            }
                            if ((map[I1][J1] == '|') && (nobat % 2 == 1) &&
                                (map[I1 - 1][J1 + 1] == '-') &&
                                (map[I1 + 1][J1 + 1] == '-') &&
                                (map[I1][J1 + 1] == ' ')) {
                                map[I1][J1 + 3] = '|';
                                //usleep(100000);
                                cout << "1" << " ";
                                //usleep(100000);
                                cout << (I1 + 1) / 2 << " ";
                                //usleep(100000);
                                cout << (J1 + 6) / 3 << " " << "\n";
                                nobat++;
                                s++;
                            }
                        }
                    }
                    //natoonesti khoone bgiri kamtarin khoone ro bede
                    if (nobat % 2 == 1 && s == 0) {
                        char maptmp[19][28];
                        int pointTMP, mini = 0;
                        while (mini <= (box * box)) {
                            int bar = 0, kam = 0;
                            while (bar < (10 * N * N)) {
                                type = (rand() % 2);
                                for (int i = 0; i < 19; ++i) {
                                    for (int j = 0; j < 28; ++j) {
                                        maptmp[i][j] = map[i][j];
                                    }
                                }
                                // too mape temp , test kon
                                while (true) {
                                    if (type == 0) {
                                        satrUSR = (rand() % N) + 1;
                                        stonUSR = (rand() % box) + 1;
                                        if ((maptmp[(satrUSR * 2 - 2)][(stonUSR * 3 - 2)] != '-')) {
                                            x = (satrUSR * 2 - 2);
                                            y = (stonUSR * 3 - 2);
                                            z = y + 1;
                                            maptmp[x][y] = '-';
                                            maptmp[x][z] = '-';
                                            break;
                                        }
                                    }
                                    if (type == 1) {
                                        satrUSR = (rand() % box) + 1;
                                        stonUSR = (rand() % (N)) + 1;
                                        if ((maptmp[(satrUSR * 2 - 1)][(stonUSR * 3 - 3)] != '|')) {
                                            x = (satrUSR * 2 - 1);
                                            y = (stonUSR * 3 - 3);
                                            maptmp[x][y] = '|';
                                            break;
                                        }
                                    }
                                }
                                // too mape temp khoone bgir
                                int i = 0;
                                while (i < (box * box)) {
                                    for (I1 = 1; I1 < 19; ++I1) {
                                        for (J1 = 0; J1 < 28; J1 = J1 + 3) {
                                            if ((maptmp[I1][J1] == '|') &&
                                                (maptmp[I1][J1 + 3] == '|') &&
                                                (maptmp[I1 - 1][J1 + 1] == '-') &&
                                                (maptmp[I1][J1 + 1] == ' ')) {
                                                maptmp[I1 + 1][J1 + 1] = '-';
                                                maptmp[I1 + 1][J1 + 2] = '-';
                                            }
                                            if ((maptmp[I1][J1] == '|') &&
                                                (maptmp[I1][J1 + 3] == '|') &&
                                                (maptmp[I1 + 1][J1 + 1] == '-') &&
                                                (maptmp[I1][J1 + 1] == ' ')) {
                                                maptmp[I1 - 1][J1 + 1] = '-';
                                                maptmp[I1 - 1][J1 + 2] = '-';
                                            }
                                            if ((maptmp[I1][J1 + 3] == '|') &&
                                                (maptmp[I1 - 1][J1 + 1] == '-') &&
                                                (maptmp[I1 + 1][J1 + 1] == '-') &&
                                                (maptmp[I1][J1 + 1] == ' ')) {
                                                maptmp[I1][J1] = '|';
                                            }
                                            if ((maptmp[I1][J1] == '|') &&
                                                (maptmp[I1 - 1][J1 + 1] == '-') &&
                                                (maptmp[I1 + 1][J1 + 1] == '-') &&
                                                (maptmp[I1][J1 + 1] == ' ')) {
                                                maptmp[I1][J1 + 3] = '|';
                                            }
                                        }
                                    }
                                    i++;
                                }
                                // too mape temp
                                pointTMP = 0;
                                int I, J;
                                i = 0;
                                while (i < (box * box)) {
                                    for (I = 1; I < 19; ++I) {
                                        for (J = 0; J < 28; J = J + 3) {
                                            if ((maptmp[I][J] == '|') &&
                                                (maptmp[I][J + 3] == '|') &&
                                                (maptmp[I - 1][J + 1] == '-') &&
                                                (maptmp[I + 1][J + 1] == '-') &&
                                                (maptmp[I][J + 1] == ' ')) {
                                                maptmp[I][J + 1] = 'T';
                                                pointTMP++;
                                            }
                                        }
                                    }
                                    i++;
                                }
                                //cout << "pointTMP:" << pointTMP << " mini:" << mini << " kam:" << kam << " nobat:" << nobat << " bar:" << bar << " typesatrUSR:" << type << " " << satrUSR << " " << stonUSR << "\n";
                                //bbin be tedade mini khone dadi ya na
                                if (pointTMP == mini) {
                                    //usleep(100000);
                                    cout << type << " ";
                                    //usleep(100000);
                                    cout << satrUSR << " ";
                                    //usleep(100000);
                                    cout << stonUSR << " " << "\n";
                                    if (type == 0) {
                                        x = (satrUSR * 2 - 2);
                                        y = (stonUSR * 3 - 2);
                                        z = y + 1;
                                        map[x][y] = '-';
                                        map[x][z] = '-';
                                        kam = 1;
                                        nobat++;
                                        break;
                                    }
                                    if (type == 1) {
                                        x = (satrUSR * 2 - 1);
                                        y = (stonUSR * 3 - 3);
                                        map[x][y] = '|';
                                        nobat++;
                                        kam = 1;
                                        break;
                                    }
                                }
                                bar++;
                            }
                            if (kam == 1) {
                                break;
                            }
                            mini++;
                        }
                    }
                    //usleep(600000);
                    // check emtiaz
                    int I, J, K = 0;
                    for (I = 1; I < 19; ++I) {
                        for (J = 0; J < 28; J = J + 3) {
                            if ((map[I][J] == '|') &&
                                (map[I][J + 3] == '|') &&
                                (map[I - 1][J + 1] == '-') &&
                                (map[I + 1][J + 1] == '-')) {
                                if (map[I][J + 1] == ' ') {
                                    if (K % 2 == 1) {
                                        nobat++;
                                    }
                                    if (nobat % 2 == 0) {
                                        map[I][J + 1] = 'B';
                                        pointPC++;
                                        K++;
                                    }
                                    nobat++;
                                }
                            }
                        }
                    }
                    // check end game
                    if (pointA + pointPC == box * box) {
                        system("cls");
                        //titre nahaee
                        titre(a_player, pc_player, pointA, pointPC, Na, 8);
                        //map nahaee
                        for (int i = 0; i <= satrARR; i++) {
                            cout << "|";
                            if (N % 2 == 0) {
                                for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                    cout << " ";
                                }
                            }
                            if (N % 2 == 1) {
                                for (int p = 0; p < ((-1.5) * N + 20.5); p++) {
                                    cout << " ";
                                }
                            }
                            for (int j = 0; j <= stonARR; ++j) {
                                cout << map[i][j];
                            }
                            if (N % 2 == 0) {
                                for (int p = 0; p < ((-1.5) * N + 21); p++) {
                                    cout << " ";
                                }
                            }
                            if (N % 2 == 1) {
                                for (int p = 0; p < ((-1.5) * N + 21.5); p++) {
                                    cout << " ";
                                }
                            }
                            cout << "|";
                            cout << endl;
                        }
                        // check emtiaz
                        if (pointA > pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** A  Win!!! ***           |" << endl;
                        }
                        if (pointA < pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** B  Win!!! ***           |" << endl;
                        }
                        if (pointA == pointPC) {
                            cout << "#========================================#\n";
                            cout << "|            *** Mosavi!!! ***           |" << endl;
                        }
                        pointPC = 0;
                        pointA = 0;
                        nobat = 0;
                        break;
                    }
                    system("cls");
                }
            }
        }
        //payane game
        char Again = '0';
        while (Again != 'y' && Again != 'n') {
            cout << "#========================================#\n";
            cout << "|             Dobare? (y/n) :            |\n";
            cout << "#========================================#\n";
            cin >> Again;
            system("cls");
        }
        if (Again == 'n') {
            cout << "#========================================#\n";
            cout << "|              be salamat (:             |\n";
            cout << "#========================================#\n";
            cout << "|                 @Mz_Sv                 |\n";
            cout << "#========================================#\n";
            system("pause");
            break;
        }
        if (Again == 'y') {
            continue;
        }
    }
    return 0;
}

void titre(char player1[], char player2[], int point1, int point2, int N1, int N2) {
    cout << "#========================================#\n";
    cout << "|                                        |\n";
    cout << "|";
    int lb = 0, la = 0;
    if (point1 < 10) {
        la = 1;
    } else
        la = 3;
    if (point2 < 10) {
        lb = 1;
    } else
        lb = 3;
    if (N1 % 2 == 0) {
        for (int f = 0; f < (((30 - (1 + N1)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    if (N1 % 2 == 1) {
        for (int f = 0; f < (((30 - (1 + N1)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    cout << "\"A\" for ";
    for (int i = 0; i < N1; i++) {
        cout << player1[i];
    }
    cout << " is " << "" << point1;
    if (N1 % 2 == 0) {
        for (int f = 0; f < (((30 - (la + N1)) / 2)); f++) {
            cout << " ";
        }
    }
    if (N1 % 2 == 1) {
        for (int f = 0; f < (((30 - (la + N1)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    cout << "|" << endl;
    cout << "|";
    if (N2 % 2 == 0) {
        for (int f = 0; f < (((30 - (1 + N2)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    if (N2 % 2 == 1) {
        for (int f = 0; f < (((30 - (1 + N2)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    cout << "\"B\" for ";
    for (int i = 0; i < N2; i++) {
        cout << player2[i];
    }
    cout << " is " << "" << point2;
    if (N2 % 2 == 0) {
        for (int f = 0; f < (((30 - (lb + N2)) / 2)); f++) {
            cout << " ";
        }
    }
    if (N2 % 2 == 1) {
        for (int f = 0; f < (((30 - (lb + N2)) / 2) - 1); f++) {
            cout << " ";
        }
    }
    cout << "|" << endl;
    cout << "|                                        |\n";
    cout << "#========================================#\n";
}