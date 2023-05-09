//Modèle : 
int grid[9][9];
int soluce[9][9];
void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int lire(char* chaine, int longueur)
{
    char* positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        return 1;
    }
    else
    {
        viderBuffer();
        return 0;
    }
}

long lireLong()
{
    char nombreTexte[100] = { 0 }; // 100 cases devraient suffire

    if (lire(nombreTexte, 100))
    {
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtol(nombreTexte, NULL, 10);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return -1;
    }
}

void createGrid()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = 0;
        }
    }
};

void createSoluce()
{
    soluce[0][0] = 1;
    soluce[0][1] = 2;
    soluce[0][2] = 3;
    soluce[0][3] = 4;
    soluce[0][4] = 5;
    soluce[0][5] = 6;
    soluce[0][6] = 7;
    soluce[0][7] = 8;
    soluce[0][8] = 9;
    soluce[1][0] = 4;
    soluce[1][1] = 5;
    soluce[1][2] = 6;
    soluce[1][3] = 7;
    soluce[1][4] = 8;
    soluce[1][5] = 9;
    soluce[1][6] = 1;
    soluce[1][7] = 2;
    soluce[1][8] = 3;
    soluce[2][0] = 7;
    soluce[2][1] = 8;
    soluce[2][2] = 9;
    soluce[2][3] = 1;
    soluce[2][4] = 2;
    soluce[2][5] = 3;
    soluce[2][6] = 4;
    soluce[2][7] = 5;
    soluce[2][8] = 6;
    soluce[3][0] = 2;
    soluce[3][1] = 3;
    soluce[3][2] = 1;
    soluce[3][3] = 5;
    soluce[3][4] = 6;
    soluce[3][5] = 4;
    soluce[3][6] = 8;
    soluce[3][7] = 9;
    soluce[3][8] = 7;
    soluce[4][0] = 5;
    soluce[4][1] = 6;
    soluce[4][2] = 4;
    soluce[4][3] = 8;
    soluce[4][4] = 9;
    soluce[4][5] = 7;
    soluce[4][6] = 2;
    soluce[4][7] = 3;
    soluce[4][8] = 1;
    soluce[5][0] = 8;
    soluce[5][1] = 9;
    soluce[5][2] = 7;
    soluce[5][3] = 2;
    soluce[5][4] = 3;
    soluce[5][5] = 1;
    soluce[5][6] = 5;
    soluce[5][7] = 6;
    soluce[5][8] = 4;
    soluce[6][0] = 3;
    soluce[6][1] = 1;
    soluce[6][2] = 2;
    soluce[6][3] = 6;
    soluce[6][4] = 4;
    soluce[6][5] = 5;
    soluce[6][6] = 9;
    soluce[6][7] = 7;
    soluce[6][8] = 8;
    soluce[7][0] = 6;
    soluce[7][1] = 4;
    soluce[7][2] = 5;
    soluce[7][3] = 9;
    soluce[7][4] = 7;
    soluce[7][5] = 8;
    soluce[7][6] = 3;
    soluce[7][7] = 1;
    soluce[7][8] = 2;
    soluce[8][0] = 9;
    soluce[8][1] = 7;
    soluce[8][2] = 8;
    soluce[8][3] = 3;
    soluce[8][4] = 1;
    soluce[8][5] = 2;
    soluce[8][6] = 6;
    soluce[8][7] = 4;
    soluce[8][8] = 5;
//Vue :

void afficher()
{
    int i, j;

    printf("   ");
    for (j = 0; j < 9; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (i = 0; i < 9; i++) {
        printf("%2d ", i);

        for (j = 0; j < 9; j++) {
            if (grif[i][j] = 0) {
                printf(" . ");
            }
        }

        printf("\n");
    }
}

//Contrôleur :

int main()
{
    createGrid();
    createSoluce();
    long number;
    int score = 0;
    while (score < 81) {
        afficher()
        printf("Enter x and y coordinates (separated by space): ");
        scanf_s("%d %d", &x, &y);
        while (getchar() != '\n');

        if (x < 0 || x >= 8 || y < 0 || y >= 8) {
            printf("Invalid coordinates!\n");
            continue;
        }
        //permet de choisir l'action
        printf("Choose a number beetween 1 and 9");
        number = lireLong();
        while (number < 1 and number > 9) {
            printf("Choose a number beetween 1 and 9");
            number = lireLong();
        }
        if (soluce[x][y] == number) {
            grid[x][y] == number;
            score++
        }
        else {
            printf("That's not correct !");
        }
    }
    afficher()
    printf("You won, Congrats !")
}
