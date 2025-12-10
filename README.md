# holbertonschool-binary_trees

Ce dépôt contient des implémentations en langage C de structures
d'arbres binaires et d'algorithmes afférents --- arbres binaires
basiques, BST, AVL, tas (heaps), etc.\
Ce projet a été réalisé dans le cadre du cursus Holberton School.

------------------------------------------------------------------------

## Table des matières

1.  Description générale\
2.  Contenu du dépôt\
3.  Prérequis / Environnement\
4.  Compilation & Tests\
5.  Usage / Exemples\
6.  Contributions\
7.  Licence

------------------------------------------------------------------------

## Description générale

Ce projet vise à implémenter plusieurs opérations et structures liées
aux arbres binaires en C : insertion, suppression, parcours (pré‑ordre,
in‑ordre, post‑ordre), calcul de hauteur, profondeur, nombre de
nœuds/feuilles, vérifications (arbre parfait, arbre complet, arbre
plein, etc.), et plus encore.

------------------------------------------------------------------------

## Contenu du dépôt

-   `binary_trees.h` --- header définissant la structure d'arbre binaire
    et les prototypes de fonctions.\
-   Plusieurs fichiers `.c` implémentant diverses fonctionnalités :
    insertion, suppression, parcours, calcul de profondeur/hauteur,
    vérifications structurelles, relations entre nœuds (parent, sibling,
    uncle), etc.

------------------------------------------------------------------------

## Prérequis & Environnement

-   Compilateur C (GCC, Clang...)\
-   Environnement Linux/Unix ou équivalent\
-   Outils facultatifs : valgrind, gdb

------------------------------------------------------------------------

## Compilation & Tests

``` bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o binary_tree_test
./binary_tree_test
```

------------------------------------------------------------------------

## Usage / Exemples

``` c
#include "binary_trees.h"

int main(void) {
    binary_tree_t *root = binary_tree_node(NULL, 10);
    binary_tree_insert_left(root, 5);
    binary_tree_insert_right(root, 15);

    binary_tree_inorder(root, your_print_func);

    binary_tree_delete(root);
    return (0);
}
```

------------------------------------------------------------------------

## Contributions

1.  Fork le repo\
2.  Crée une branche\
3.  Commit propre\
4.  Ouvre une Pull Request

------------------------------------------------------------------------

## Licence

Projet non licencié explicitement --- soumis au droit d'auteur par
défaut.
