# holbertonschool-binary_trees

![C Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Project-Active-success.svg)
![Holberton](https://img.shields.io/badge/Holberton-School-red.svg)
![License](https://img.shields.io/badge/License-Unspecified-lightgrey.svg)

Projet réalisé dans le cadre du cursus **Holberton School**, ce dépôt
contient une implémentation complète d'arbres binaires et de leurs
dérivés en langage C : Binary Trees, Binary Search Trees (BST), AVL,
Heaps, et diverses opérations avancées.

------------------------------------------------------------------------

## 📌 Table des matières

-   [Description générale](#description-générale)
-   [Fonctionnalités](#fonctionnalités)
-   [Architecture du dépôt](#architecture-du-dépôt)
-   [Prérequis](#prérequis)
-   [Compilation](#compilation)
-   [Exemples d'utilisation](#exemples-dutilisation)
-   [Bonnes pratiques](#bonnes-pratiques)
-   [Contribuer](#contribuer)
-   [Licence](#licence)

------------------------------------------------------------------------

## 🧩 Description générale

Ce projet implémente une large gamme de fonctionnalités permettant de
manipuler des arbres binaires :

-   Création et suppression de nœuds\
-   Insertion gauche/droite\
-   Parcours : pré‑ordre, in‑ordre, post‑ordre, niveau\
-   Calculs : hauteur, profondeur, balance factor, nombre de nœuds,
    feuilles...\
-   Vérifications : arbre parfait, complet, plein, BST valide\
-   Structures avancées : BST, AVL, Heap Max\
-   Fonctions de rotation pour équilibrage

L'objectif est de fournir une base solide pour comprendre et manipuler
des arbres binaires en C.

------------------------------------------------------------------------

## 📁 Architecture du dépôt

    holbertonschool-binary_trees/
    │
    ├── binary_trees.h        # Définitions de structures et prototypes
    ├── *.c                   # Implémentations des fonctions
    ├── README.md             # Documentation

------------------------------------------------------------------------

## 🔧 Prérequis

-   Compilateur **GCC**\
-   Outils recommandés :
    -   `valgrind` (analyse mémoire)\
    -   `gdb` (debugger)

------------------------------------------------------------------------

## 🛠️ Compilation

Compiler tous les fichiers :

``` bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o binary_tree_test
```

Exécuter :

``` bash
./binary_tree_test
```

------------------------------------------------------------------------

## 💡 Exemples d'utilisation

``` c
#include "binary_trees.h"

void print_node(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);

    binary_tree_insert_left(root, 12);
    binary_tree_insert_right(root, 402);

    printf("In-order traversal:\n");
    binary_tree_inorder(root, print_node);

    binary_tree_delete(root);
    return (0);
}
```

------------------------------------------------------------------------

## 🧭 Bonnes pratiques

-   Respecter la norme **C89/C90**\
-   Toujours vérifier les retours d'allocation mémoire\
-   Free systématique avec `binary_tree_delete()`\
-   Favoriser un code **clair**, **commenté** et **modulaire**

------------------------------------------------------------------------

## 🤝 Contribuer

Les contributions sont ouvertes !

1.  Fork du projet\
2.  Création d'une branche `feature/...` ou `fix/...`\
3.  Commits propres et explicites\
4.  Pull request détaillée

------------------------------------------------------------------------

## 📄 Licence

Aucune licence explicite --- le dépôt est soumis au droit d'auteur par
défaut.

------------------------------------------------------------------------

## 👤 Auteur

- [Blee Leny](https://github.com/LenyBl)
- [Ethane Zimmermann](https://github.com/ZimEthane)

Projet créé par **LenyBl** et **ZimEthane** dans le cadre de Holberton School.
