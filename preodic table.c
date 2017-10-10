                                            ///  PREODIC TABLE
                                           ///created. 23-DECEMBER-2013

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int atomic_no(void);
int symbol_compare(void);
int devoloper(void);
int table_draw(void);
int data(int num);
int gotoxy(int x, int y);
int clearWindow(void);

COORD coord = {0,0};
char ch;

char  *symbol[]  =   {"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V",
                     "Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh",
                     "Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho",
                     "Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Ti","Pb","Bi","Po","At","Rn","Fr","Ra","Ac",
                     "Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg",
                     "Uub","Uut","Uuq","Uup","Uuh","Uus","Uuo"};



int main()
{
    int choice,
        x = 3;

    time_t time_val;
    char *time_string;

    SetConsoleTitle("royel, t.r.royel@gmail.com ");

    table_draw();

    gotoxy(31,2);
    printf("PREODIC TABLE");

    gotoxy(22,4);
    printf("ROYEL,CSE,VARENDRA UNIVERSITY");

    while(1)
    {

        time(&time_val);///time_val = time(NULL);
        time_string = ctime(&time_val);

        gotoxy(12,8);
        printf("MENU");

        gotoxy(x,10);
        printf("1. SEARCH BY SYMBOL");

        gotoxy(x,12);
        printf("2. SEARCH BY ATOMIC NO.");

        gotoxy(x,14);
        printf("3. ABOUT DEVOLOPER. ");

        gotoxy(x,16);
        printf("0. Exit");

        gotoxy(x,24);
        printf("%s",time_string);

        gotoxy(6,19);
        printf("SELECT CHOICE:- ");

        fflush(stdin);
        ch = getch();

        printf("\n\n");

        switch(ch)
        {
        case '1':
            symbol_compare();
            break;

        case '2':
            atomic_no();
            break;

        case '3':
            devoloper();
            break;

        case '0':
            exit(0);
            break;

        default:
            ///printf("\n\n\t\t\t   YOU PRESS WRONG KEY!!!!!! ");
            break;

        }

    }

    return 0;
}


int data(int num)
{

    char   *name[]  =  {"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluroine","Neon",
                        "Sodium","Magnesium","Aluminium","Silicon","Phosphorus","Sulphur","Chlorine","Argon","Potassium",
                        "Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper",
                        "Zinc","Gallium","Germenium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium",
                        "Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium",
                        "Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Caesium","Barium","Lanthanum","Cerium",
                        "Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium",
                        "Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium",
                        "Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium",
                        "Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium",
                        "Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium",
                        "Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Ununbium","Ununtrium",
                        "Ununquadium","Ununpentium","Ununhexium","Ununseptium(Not yet observed)","Ununoctium(Not yet observed)"};



    float atomic_mass[] = {1.00794,4.002602,6.941,9.012182,10.811,12.0107,14.0067,15.9994,18.9984032,20.1797,22.989770,24.3050,
                           26.981538,28.0855,30.973761,32.065,35.543,39.948,39.0983,40.078,44.955910,47.867,50.9415,51.9961,
                           54.938049,55.845,58.933200,58.6934,63.546,65.409,69.723,72.64,74.92160,78.96,79.904,83.798,85.4678,
                           87.62,88.90585,91.224,92.90638,95.94,97.9072,101.07,102.90550,106.42,107.8682,112.411,114.818,118.710,
                           121.760,127.60,126.90447,131.293,132.90545,137.327,138.9055,140.116,140.90765,144.24,144.9127,150.36,
                           151.964,157.25,158.92534,162.500,164.93032,167.259,168.93421,173.04,174.967,178.49,180.9479,183.84,
                           186.207,190.23,192.217,195.078,196.96655,200.59,204.3833,207.3,208.98038,208.9824,209.9871,222.0176,
                           223.0197,226.0254,227.0277,232.0381,231.03588,238.02891,237.0482,244.0642,243.0614,247.0704,247.0703,
                           251.0796,252.0830,257.0951,258.0984,259.1010,262.1097,261.1088,262.1141,266.1219,264.12,277,268.1388,
                           271,272,277,284,285,288,292,0000,0000};


   float melti_point[] = {-259.14,-272.2,180.54,1278,2079,3387,-209.86,-218.8,-219.62,-248.67,97.81,648.8,660.37,1410,44.1,112.8,
                           -100.98,189.2,63.65,839,1541,1660,1890,1857,1244,1535,1495,1453,1083,419.6,29.78,937.4,817,217,-7.2,-156.6,
                           38.89,769,1522,1852,2468,2617,2172,2310,1966,1552,961.9,320.9,156.6,232.0,630.7,449.5,113.5,-111.9,28.40,
                           725,921,799,931,1021,1168,1077,822,1313,1356,1412,1474,1497,1545,819,1663,2227,2996,3410,3180,3045,2410,
                           1772,1064,-38.84,303.5,327.5,271.8,254,302,-71,27,700,1050,1750,1600,1132,640,641,994,1340,00,00,00,00,
                           00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00 };


    float boil_point[] = {-252.87,-268.93,1347,2970,2550,4827,-195.8,-182.96,-188.14,-246.05,882.9,1090,2467,2355,280,444.67,-34.6,
                          -185.7,774,1484,2831,3287,3380,2672,1962,2750,2870,2732,2567,907,2403,2830,613,684.9,58.78,-152.3,688,1384,
                          3338,4377,4742,4612,4877,3900,3727,3140,2212,765,2080,2270,1750,990,184.4,-107.1,678.4,1640,3457,3426,3512,
                          3068,2460,1791,1597,3266,3123,2562,2695,2900,1947,1194,3395,4602,5425,5660,5627,5027,4130,3827,2807,356.6,
                          1457,1740,1560,962,337,-61.8,677,1140,3200,4790,00,3818,3902,3232,2607,00,00,00,00,00,00,00,00,00,00,00,
                          00,00,00,00,00,00,00,00,00,00,00,00};


    ///display(name,atomic_mass,num,melti_point,boil_point);

    gotoxy(37,12);
    printf("name: %s",name[num]);

    gotoxy(37,14);
    printf("symbol: %s",symbol[num]);

    gotoxy(37,16);
    printf("Atomic_no: %d", num+1);

    gotoxy(37,18);
    printf("Mass: %.3f",*(atomic_mass+num));

    gotoxy(37,20);
    printf("Melt_point: %.2f",*(melti_point+num));

    gotoxy(37,22);
    printf("Boil_point: %.2f",*(boil_point+num));

    return 0;

}


int gotoxy(int x, int y)
{
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    return 0;
}


int clear_screen(void)
{
    int i,j;

    for(i = 37; i < 78; i++){
        for(j = 7; j < 25; j++){
            gotoxy(i,j);
            printf(" ");
        }
    }

    return 0;
}

int table_draw(void)
{
    int i,j;

    gotoxy(1,1);

    printf("%c",201);

    for(i = 2; i < 78; i++)
    {
        gotoxy(i,1);

        printf("%c",205);
    }

    gotoxy(78,1);

    printf("%c",187);

    for(i = 2; i < 25; i++)
    {
        gotoxy(78,i);

        if(i==6)
            printf("%c",185);

        else
            printf("%c",186);

    }

    gotoxy(78, 25);
    printf("%c",188);

    for(i = 77; i > 1; i--)
    {
        gotoxy(i,25);

        if(i == 31)
            printf("%c",202);

        else
            printf("%c",205);

    }

    gotoxy(1, 25);
    printf("%c",200);

    for(i = 24; i > 1; i--)
    {
        gotoxy(1,i);

        if(i==6)
            printf("%c",204);

        else
            printf("%c",186);

    }

    for(i = 2; i < 78; i++)
    {
        gotoxy(i,6);

        if(i == 31)
            printf("%c",203);

        else
            printf("%c",205);
    }

    for(i = 7; i < 25; i++)
    {
        gotoxy(31,i);
        printf("%c",186);
    }

    return 0;
}


int atomic_no(void)
{
    int num = -1;

    clear_screen();

    gotoxy(45,8);
    printf("ATOMIC NO SEARCH");

    gotoxy(37,10);
    printf("ENTER ATOMIC NUMBER: ");

    scanf("%d",&num);


    if(num > 0 && num <119)
        data(num-1);//calling data function;

    else
    {
       gotoxy(37,12);
       printf("Number does not exist !!!!\n");
    }

    return 0;
}

int symbol_compare(void)//the function that compare symbol & input string;
{

    char strn[32];
    int x,i,sym_num = 118;

    clear_screen();

    gotoxy(45,8);
    printf("SYMBOLIC SEARCH");

    gotoxy(37,10);
    printf("ENTER ATOMIC SYMBOL: ");

    fflush(stdin);///Buffer flush;
    ///scanf("%[^\n]",strn); i can get input by scanf;
    gets(strn);

    for(i=0; i <sym_num; i++)
    {
        x = stricmp(symbol[i],strn);

        if(x==0)
        {
            data(i);
            return 0;
        }

    }
    if(x!=0)
        {
             gotoxy(37,12);
             printf("SYMBOL DOES NOT EXIST.!!!!");
        }

    return 0;

}

int devoloper(void)
{
    clear_screen();

    gotoxy(45,8);
    printf("DEVOLOPER");

    gotoxy(37,11);
    printf("MD. TANVIR RAHMAN ROYEL.");

    gotoxy(37,13);
    printf("PALOPARA,PUTHIA,RAJSHAHI");

    gotoxy(37,15);
    printf("DEPARTMENT OF CSE");

    gotoxy(37,17);
    printf("VARENDRA UNIVERSITY");

    gotoxy(37,19);
    printf("MOBILE: 01923051581");

    gotoxy(37,21);
    printf("E-MAIL: t.r.royel@gmail.com");

    return 0;

}


