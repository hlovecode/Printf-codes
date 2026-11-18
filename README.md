# Printf

*This activity has been created as part of the 42 curriculum by hualei.*

Ce projet exige la compréhension de plusieurs mécanismes fondamentaux du langage C:
- Les fonctions à arguments variables (Variadic Functions)
- Les pointeurs et la gestion de la mémoire
- L'analyse de chaînes de caractères (Parsing)
- Les types de données et les conversions de types
- La conversion de nombres entre différentes bases
- La sortie formatée (Formatting)

Le travail de la function ft_printf est le suivant:
1. Recevoir la chaîne de format et les arguments variables
2. Parcourir la chaîne de format du début à la fin
3. En cas de caractère ordinaire, l'afficher directement
4. En cas de %, identifier le spécificateur de conversion qui suit
5. Selon le spécificateur de conversion, lire la donnée du type correct parmi les arguments variables
6. Convertir la donnée en caractères correspondants et l'afficher
7. Compter le nombre de caractères réellement affichés
8. Retourner ce nombre de caractères



