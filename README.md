# cryptographie-ROT13-et-XOR-en-c
Modalité : les étudiants doivent travailler en binôme. 
Soit un fichier typé intitulé etudiants.txt qui comporte les enregistrements relatifs aux étudiants de 
votre club. Chaque enregistrement est composé de : NCIN, NOM, PRENOM, AGE, FILIERE, 
NIVEAU, COTISATIONS : où ces attributs (hors mis COTISATIONS) désignent respectivement le 
numéro de la CIN, le nom, le prénom, l’âge, la filière, le niveau de l’étudiant. COTISATIONS est un 
tableau de cinq réels représentant les différentes cotisations des frais de fonctionnement faites par 
l’étudiants. Dans le fichier les données sont séparées par point-virgule (;).
Travail demandé :
1. Déclarer les structures de données pour la gestion de ce club.
2. Définir la fonction saisir() qui permet de remplir les données relatives aux étudiants dans le 
fichier etudiants.txt. 
3. Ecrire les procédures permettant de gérer le fichier des candidats : ajouter() qui permet 
d’ajouter les données d’un candidat dans le fichier concours.txt ; modifier() qui permet de 
corriger les données d’un candidat déjà existant dans le fichier ; et supprimer(NCIN) qui 
permet de supprimer les données du fichier les données du candidat donc le NCIN est passé en 
paramètre.
4. Ecrire une fonction qui affiche la liste des étudiants et le montant total de leurs cotisations.
5. Définir la fonction solvable() qui permet créer le fichier etat.txt comportant pour chaque 
étudiant le montant total de ses cotisations. Il faut aussi afficher la liste de ces étudiants.
6. Définir la fonction insolvable() qui permet créer le fichier mauvais.txt comportant rien que les 
noms des étudiants qui ont encore des cotisations non effectuées. Il faudra aussi afficher la liste 
des étudiants insolvables.
7. Définir la fonction statistiques() qui permet de retourner le pourcentage des étudiants n’ayant 
pas fait toutes les cotisations. 
8. Définir la fonction supprimer() qui supprimera du fichier etudiants.txt les étudiants n’ayant 
rien cotisé. La suppression doit aussi se faire dans les fichiers état.txt et mauvais.txt si cet 
étudiant y figure
9. Ecrire une fonction recherche (NCIN) qui permet de recherche et d’afficher les données de 
l’étudiants dont le NCIN est passé en paramètre.
10. Ecrire un programme principal qui présente un menu (sous forme de liste de numéros) 
permettant d’exécuter les fonctions écrites précédemment.
N.B : On suppose que les fichiers seront mis dans votre répertoire de travail
