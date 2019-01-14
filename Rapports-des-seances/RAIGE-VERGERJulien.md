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
 • J'ai écrit le cahier des charges du projet <br>
 • Après que Jens ait branché le dernier moteur (celui du dessous) et que monsieur Masson nous ait donné la puce qu'il nous manquait, j'ai adapté le code de test des moteurs pour qu'il puisse tester le dernier moteur. 
<img src="../Ressources/Julien/20181217_105212.jpg" />
 • Echec pour faire fonctionner le dernier moteur <br>
 • Après de nombreux essais pour trouver le problème, on a compris qu'il venait du branchement pour la deuxième puce (celle où il n'y a 
que le dernier moteur). <img src="../Ressources/Julien/20181217_105200.jpg"" />
  • Je me suis rendu compte que nous n'avions relié la puce au 5V et à la masse que d'un côté, alors qu'il faut le faire pour les deux, même si on fait fonctionné un seul côté. <br>
  • Après cette correction, le moteur s'est bien mit à tourner correctement.

<br>
<hr>
<h2> Travail personnel pendant les vacances de Noël </h2>
<hr>
Réalisation du planning <br>
Léger test des moteurs

<br>
<hr>
<h2> Séance du 07 janvier 2019 </h2>
<hr>
• Je reprends un code précédemment utilisé en cours (pour relier la voiture au module bluetooth), et je l'adapte pour que ça 
colle au zeppelin. <br>
• J'ai quelques problèmes avec le Bluetooth, mais je parviens à régler le problème (problème de code). <br>
• Cependant, maintenant, le Bluetooth fonctionne bien mais le moteur ne répond pas au message Bluetooth. <br>
• Avec l'aide de monsieur Masson, on s'est rendus compte que le problème ne venait pas du Bluetooth, car on a réussit à faire fonctionner un autre moteur avec le Bluetooth. <br>
• Le problème ne peut pas non plus venir du moteur car il fonctionne sans Bluetooth, donc la dernière solution est le branchage de ce moteur, qui est le moteur branché tout seul (le moteur du dessous) contrairement aux deux autres. <br>
• A la fin de la séance, pendant que Jens essayait de réparer le dernier moteur, j'ai adapté le programme pour faire en sorte que l'on puisse déjà contrôler les deux moteurs latéraux par Bluetooth, ce qui fonctionne bien.

<br>
<hr>
<h2> Séance du 14 janvier 2019 </h2>
<hr>
•
