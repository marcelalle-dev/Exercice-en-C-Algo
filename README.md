# Exercices en C - Cours Informatique

## 📚 Description générale

Recueil complet d'exercices pratiques en langage C organisé en 4 dossiers thématiques. Ces exercices couvrent les concepts fondamentaux à intermédiaires du langage C, du calcul simple aux manipulations de tableaux et structures de contrôle avancées.

## 📁 Structure du projet

```
Exercice en C 1 & 4/
├── files/           → 10 exercices fondamentaux (exo1-exo10)
├── files (1)/       → 12 exercices progressifs (exo1-exo12)
├── files (2)/       → 15 programmes complets (code1-code15)
├── files (3)/       → 8 exercices de base (exo1-exo8)
└── README.md        → Ce fichier
```

## 📋 Contenu par dossier

### 📂 Dossier 1 : `files/` (10 exercices)
**Concepts** : Variables, calculs, boucles, conditions, tableaux

| Exercice | Sujet |
|----------|-------|
| exo1.c | Calcul d'âge à partir de l'année de naissance |
| exo2.c | Boucles et affichage de séquences numériques |
| exo3.c | Conditions et comparaisons |
| exo4.c | Manipulation de tableaux |
| exo5-10.c | Concepts variés |

### 📂 Dossier 2 : `files (1)/` (12 exercices)
**Concepts** : Itération avancée, structures, fonctions

Progression croissante de 12 exercices explorant des concepts intermédiaires à avancés.

### 📂 Dossier 3 : `files (2)/` (15 programmes)
**Concepts** : Conditions, boucles, tableaux, structures de données, pointeurs

15 programmes nommés `code1.c` à `code15.c` couvrant une large gamme de concepts.

### 📂 Dossier 4 : `files (3)/` (8 exercices)
**Concepts** : Fondamentaux, tableaux, boucles, entrées/sorties

8 exercices de base pour la maîtrise des concepts fondamentaux du C.

## 🚀 Démarrage rapide

### Compiler un exercice
```bash
# Naviguez dans le dossier souhaité
cd files

# Compilez un exercice
gcc -o exo1 exo1.c

# Exécutez le programme
./exo1
```

### Compiler tous les exercices d'un dossier (Linux/Mac/Git Bash)
```bash
cd files
gcc -o exo*.c *.c
```

## 🎯 Progression suggérée

1. **Débuter** : Commencez par `files (3)/` et `files/` pour les fondamentaux
2. **Progresser** : Continuez avec `files (1)/` pour approfondir les concepts
3. **Maîtriser** : Terminez avec `files (2)/` pour les concepts avancés

## 💻 Concepts couverts globalement

- ✅ Variables et types de données (int, float, char, etc.)
- ✅ Structures de contrôle (if/else, switch)
- ✅ Boucles (for, while, do-while)
- ✅ Tableaux et manipulation de données
- ✅ Entrées/sorties (scanf, printf)
- ✅ Fonctions et modularité
- ✅ Pointeurs et gestion mémoire
- ✅ Structures de données

## 📝 Notes importantes

- Chaque fichier est un programme C **complet et autonome**
- Les exercices dans chaque dossier sont **progressifs** en difficulté
- Consultez les README spécifiques de chaque dossier pour plus de détails
- Tous les programmes utilisent `#include <stdio.h>` pour les entrées/sorties de base

## 🔧 Environnement recommandé

- **Compilateur** : GCC ou Clang
- **Système d'exploitation** : Windows (Git Bash/MinGW), Linux, macOS
- **Éditeur** : VS Code avec C/C++ Extension

## 📖 Références

- [Documentation officielle C](https://en.cppreference.com/w/c)
- Manuel de référence GCC

## 👤 Auteur
Exercices du cours informatique - Base Centrale

---

**Dernière mise à jour** : 23 mai 2026
