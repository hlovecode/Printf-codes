# Printf

*This activity has been created as part of the 42 curriculum by hualei.*

### Description

Le travail du Printf est:

1. Recevoir la chaîne de format et les arguments variables
2. Parcourir la chaîne de format du début à la fin
3. En cas de caractère ordinaire, l'afficher directement
4. En cas de %, identifier le spécificateur de conversion qui suit
5. Selon le spécificateur de conversion, lire la donnée du type correct parmi les arguments variables
6. Convertir la donnée en caractères correspondants et l'afficher
7. Compter le nombre de caractères réellement affichés
8. Retourner ce nombre de caractères

| Fonction               | Utilités                                                                                   |
| ---------------------- | ------------------------------------------------------------------------------------------ |
| ft_printf.c          | Contrôlez l'intégralité du processus d'exécution, gérez `va_list` et les valeurs de retour |
| ft_printf_dispatch.c | Identifier les spécificateurs de conversion                                                |
| ft_print_char.c      | Fournit une sortie de caractères                                                           |
| ft_print_string.c    | Traitement de %s                                                                         |
| ft_print_number.c    | Traitement de %d et %i                                                                 |
| ft_print_unsigned.c  | Traitement de %u                                                                        |
| ft_print_hex.c       | Traitement de %x et %X                                                                 |
| ft_print_pointer.c   | Traitement de %p                                                                                                                            |
| Makefile             | Compilation des fonctions et l'archive finale                                           |

### Instructions

- Run make to compile the library

- Simple clean that will only remove the object files : make clean

- Full clean that will remove object files as well as the library : make fclean

### Resources

- testeur du projet: [Github-Tripouille / printfTester](https://github.com/Tripouille/printfTester)
