
# 🐚 Junior Shell

Mini projet de développement d'un shell personnalisé en langage **C**, enrichi de plusieurs **scripts utilitaires en Bash** pour Linux.

---

## 🎯 Objectif du projet

Ce projet a pour but de créer un **mini-shell interactif** capable d’exécuter des commandes basiques sous Linux, avec des fonctionnalités supplémentaires ajoutées via des **scripts Bash** (génération de mots de passe, affichage des infos système, etc.).

Il a été développé dans un environnement Debian 12 (machine virtuelle) et mis en version finale avec gestion via Git/GitHub.

---

## 🛠️ Contenu du projet

Voici les fichiers inclus dans ce dépôt :

| Fichier | Description |
|--------|-------------|
| `main.c` | Le cœur du mini-shell en langage C. |
| `junior-shell` | Exécutable généré à partir du fichier `main.c`. |
| `sysinfo.sh` | Script Bash qui affiche des informations système utiles. |
| `password_generate.sh` | Générateur simple de mots de passe. |
| `secure_genpass.sh` | Générateur de mots de passe sécurisés. |
| `complex_genpass.sh` | Générateur de mots de passe complexes (avec symboles, majuscules, etc.). |

---

## 🚀 Utilisation

### Lancer le shell
```bash
./junior-shell
````

### Scripts intégrés utilisables depuis le shell :

* `./sysinfo.sh` → affiche les infos système
* `./password_generate.sh` → mot de passe aléatoire simple
* `./secure_genpass.sh` → mot de passe sécurisé
* `./complex_genpass.sh` → mot de passe complexe

---

## 🧠 Compétences mobilisées

* Programmation en **langage C**
* Scripting Bash sous **Linux**
* Gestion de projet avec **Git & GitHub**
* Travail en **environnement virtualisé (VM Debian 12)**

---

## 🔗 Auteur

👤 [aouissisaesso](https://github.com/aouissisaesso)

---

## 📌 À venir

* Ajout de la gestion de redirections et pipes
* Interface de démarrage plus stylisée
* Intégration de commandes internes personnalisées

---
```
---

