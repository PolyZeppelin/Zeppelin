<h1><strong> Rapports de séances de RAIGE-VERGER Julien, PeiP2 G1 </strong>  </h1>
<hr>
<h2> Séance du 10 décembre 2018 </h2>
<hr>

 - Création du compte GitHub associé au projet, j'ai créé une "organization" pour que l'on puisse modifier les fichiers en même temps, sur deux ordinateurs différents avec deux comptes différents 
 
- Récupération de ce qu'il reste de la nacelle du zeppelin, on a juste récupéré la pile, le reste n'étant pas utile pour nous (car nous voulons contrôler le zeppelin avec le téléphone, par Bluetooth notamment) et monsieur Masson nous a donné un double pont en H.
<br>
<img src="../Ressources/Julien/20181210_111724.jpg" />

- J'ai dénudé un ancien fil du moteur et je l'ai re-soudé car il était en mauvais état, ce qui rendait les branchements compliqués
- Une fois les branchements des moteurs latéraux sur la carte arduino réalisés, j'ai ré-utilisé un ancien programme (celui pour la voiture) afin de tester le fonctionnement des moteurs. 
- J'ai été agréablement surpris, tout a marché comme prévu du premier coup,le branchement était bon et les moteurs ont très bien fonctionné, voici une vidéo youtube illustrant le fonctionnement des moteurs. 
https://www.youtube.com/watch?v=F8a-x4bFFEo&feature=youtu.be 
- La semaine prochaine, il faudra brancher le dernier moteur (celui du dessous), et vérifier son fonctionnement.

<br>
<hr>
<h2> Séance du 17 décembre 2018 </h2>
<hr>
- J'ai écrit le cahier des charges du projet
- Après que Jens ait branché le dernier moteur (celui du dessous) et que monsieur Masson nous ait donné la puce qu'il nous manquait, j'ai adapté le code de test des moteurs pour qu'il puisse tester le dernier moteur. 
<img src="../Ressources/Julien/20181217_105212.jpg" />
- Echec pour faire fonctionner le dernier moteur
- Après de nombreux essais pour trouver le problème, on a compris qu'il venait du branchement pour la deuxième puce (celle où il n'y a 
que le dernier moteur). <img src="../Ressources/Julien/20181217_105200.jpg"" />
 - Je me suis rendu compte que nous n'avions relié la puce au 5V et à la masse que d'un côté, alors qu'il faut le faire pour les deux, même si on fait fonctionné un seul côté.
 - Après cette correction, le moteur s'est bien mit à tourner correctement.
