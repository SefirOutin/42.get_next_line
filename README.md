# Get_next_line - 42

Get_next_line est un projet du cursus 42 qui consiste à **lire un fichier ligne par ligne en C**, sans connaître à l’avance la taille des lignes.  

## Objectifs principaux

- Maîtriser la lecture de fichiers avec `read()`.  
- Gérer la **mémoire dynamique** pour stocker chaque ligne.  
- Manipuler des **buffers** pour une lecture efficace.  
- Retourner `NULL` correctement à la fin du fichier ou en cas d’erreur.  

## Compilation

    make

Exemple d'utilisation
```C
char *line;
while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
