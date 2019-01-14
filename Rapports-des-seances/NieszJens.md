
************************
<h1> Rapports de Séances</h1>

************************
 
 <h2> Travail personnel du 10 Décembre</h2>
 <ul>
  <li>Création du projet sous Github pour la remise des comptes rendus ainsi que le dépot de nos codes.</li>
  <li>Etude puis destruction du travail effectué par les étudiants de l'année dernière. 
    <br><center><img src="../Ressources/Jens/20181210_111428.jpg" alt="brouillon" height="200"></center> 
  <li>Une fois la nacelle detruite, on connecte les fils des moteurs avec la puce L2936D selon le schéma du cours. Pour cela il a fallu resoudé les fils usés des moteurs afin de les connecté a notre plaque, et donc a notre puce. 
   <p> Nous avons réussi le montage, les moteurs tournents. On a cependant pas eu le temps de connecté le moteur de controle hauteur de vol mais uniquement les moteurs de direction.
   <br><img src="../Ressources/Jens/20181210_122840.jpg" alt="brouillon" height="200"></p>
   <br><img src="../Ressources/Jens/20181210_123353 (1).jpg" alt="brouillon" height="200"></p>
   <p> Cette partie été facile car elle est similaire au Td vu en cours sur les moteurs.</p>
 </li>
 </ul>
  <h2> Travail personnel du 17 Décembre</h2>
 <ul>
 <br><center><img src="../Ressources/Jens/Capture.PNG" alt="brouillon" height="200"></center> 
  <li>Tout d'abord, comme sur les moteurs précédents, il a fallu resouder les fils du moteurs de controle de hauteur de vol. On a ensuite brancher le moteur a une deuxieme puce L2936D .  
    <br><center><img src="../Ressources/Jens/20181217_105137.jpg" alt="brouillon" height="200"></center> 
   </li>
 <li> Cependant il ne tournait toujours pas. Malgrés les echanges methodiques de puces, de cables, ou de moteur, on a pas reussi a localiser le probleme. C'est uniquement à la fin que nous avions vu que la masse et le 5V de la deuxieme puce n'etait pas brancher correctement. 
 </li>
 <li>Et enfin à la fin de la séance nous avons créé le premier prototype de télécommandes sur Bluetooth Electronics. Mais nous avions pas réussi à la finir et à la faire fonctionner. 
 </li>
  
 </ul>
 <h2> Travail personnel du 7 Janvier</h2>
 <ul>
 <li>On continue la communication bluetooth que nous avions debuter à la derniere séance. Cependant cela ne fonctionne pas. La communication est établie car lors des commandes "AT", le zeppelin repond nous requete. Cependant les moteurs ne tournent pas. 
 
 </li>
 <li> Aprés de nombreux tests ( on a chercher le probleme, avec peut etre un soucis de TIMER, un soucis de code ou encore un soucis de cablage), mais il semblerais que le code est juste car avec un autre moteur cela fonctionne, c'est uniquement le moteur C qui ne marche pas. On a donc verifier les cablages de la deuxieme puces, et meme utiliser un oscilloscope pour verifier l'input sur le PWM. 
</li>

<h2> Travail personnel du 14 Janvier</h2>
<ul>
 <li>
  Les moteurs ne fonctionnent pas parfaitement. Monsieur Masson a vérifié les cablâges, et nous nous étions plantés. C'est-à-dire que le cable "enable" du moteur C et du moteur B étaient inversés. Il y avait également un soucis d'OUTPUT sur le arduino.
  On a donc maintenant des moteurs qui fonctionnent, et on créé la télécommande pour contrôler les moteurs. (avant, arrière, gauche, droite, haut, bas).
  <br><center><img src="../Ressources/Jens/50437939_747635198950581_1879622261623750656_n.jpg" alt="brouillon" height="200"></center>


