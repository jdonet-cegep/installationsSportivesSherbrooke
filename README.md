# Installations Sportives à Sherbrooke

Application console en C++ permettant de visualiser les installations sportives et récréatives incluant : les arénas, la glissade sur tube, les jeux d'eau, les jeux de fers et de galets, les modules de jeu, les modules pour planches à roulettes, les patinoires, les piscines, les pistes multifonctionnelles, les plages, les préaux et planchers de danse, le site de tir à l'arc et les terrains de baseball, de basketball, de football, de pétanque, de pickleball, de soccer, de tennis, d'ultimate frisbee et de volleyball. 

Les données utilisées dans ce projet sont issues du site open data Québec : https://www.donneesquebec.ca/recherche/dataset/b6498f3436974ecbb8fa636a7d9c0b2f_0 


## Présentation de l’existant
Il vous est fourni ici une solution Visual Studio de démarrage, contenant un projet en mode console qui se connecte à votre base de données et affiche la liste de toutes les installations. 
 
Actuellement le programme se connecte au serveur MySQL, à la base de données « installationssportivesetrecreatives », et récupère tout le contenu de la table « installation » pour l’afficher à l’écran.

Ce qu’il faut créer

-	Des fonctions permettant de rechercher des installations en fonction de leur type, par le nom, par surface, age ou éclairage … avec leurs tests unitaires associés
-	Des fonctions sortant des statistiques (ex : nombre d’installation par catégorie, par sport…), avec leurs tests unitaires associés
-	Des fonctions permettant de modifier ou supprimer un enregistrement
-	Des fonctions permettant de faire une sauvegarde de la BDD dans un fichier texte binaire et de charger des données provenant d’un fichier texte
-	Des menus permettant d’accéder à toutes ces fonctions
-	Des fonctions de connexions avec des comptes utilisateurs existants en bdd, et des profils d’utilisateurs, pour que n’importe qui n’accéde pas à n’importe quoi.
  
## Remarques
Les requêtes sans paramètre se feront avec la fonction executeQuery (comme dans l’exemple)
https://dev.mysql.com/doc/connector-cpp/1.1/en/connector-cpp-examples-results.html

Les requêtes avec paramètre se feront avec la fonction prepareStatement
https://dev.mysql.com/doc/connector-cpp/1.1/en/connector-cpp-examples-prepared-statements.html

Ceci est très important pour éviter les failles d’injections SQL


