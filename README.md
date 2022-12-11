# Corso di Informatica della classe 4E
Cartella di lavoro della classe di informatica

## Perchè GitHub?
Git e GitHub rappresentano una conoscenza essenziale per chi lavora nel mondo del software e proprio per questo motivo tengo al fatto che voi ne impariate almeno le basi. In più, una volta impostata la repository sul vostro computer, basteranno un paio di click per avere il materiale del corso sempre aggiornato, senza dover scaricare e spostare neanche un file. 

### Git
[Git](https://en.wikipedia.org/wiki/Git) è un [Software di Controllo Versione](https://it.wikipedia.org/wiki/Controllo_versione) (VCS), nato per mano dei programmatori che nel 2005 hanno lavorato al kernel di Linux. I VCS permettono di salvare localmente e su server lo storico delle "versioni" di un progetto, in questo modo si ha sempre l'opportunità di tornare ad una precedente forma del codice nel caso in cui sorgano dei problemi bloccanti o apparentemente irrisolvibili. 
Questa possibilità si dimostra estremamente efficace e permette di snellire di molto il processo di sviluppo facendo risparmiare un'enorme quantità di tempo, di errori e di imprecazioni. 

Git, inoltre dà la possibilità di dividere il lavoro in più rami detti **branch** (```git branch```](https://git-scm.com/docs/git-branch). Normalmente un ciclo di sviluppo prevede un **fase di lavoro**, in cui gli sviluppatori si dividono le mansioni ed assegnano ad ognuna un **branch**, ed una **fase di analisi** dove si controlla il codice e si risolvono i conflitti che si sono creati fra le differenti versioni, caricando infine la versione stabile sul ramo principale del progetto ([```git merge```](https://git-scm.com/docs/git-merge)).

### GitHub
Github è una piattaforma creata per portare la logica dei VCS online: migliaia di programmatori ogni giorno lavorano su piccoli e grandi progetti, condividendo informazioni ed aiutandosi a vicenda. 
Questo portale vi permette di aprire un repository online in cui caricare i vostri file (1GB di storage gratuito), clonare la cartella sul vostro computer ([```git clone```](https://www.git-scm.com/docs/git-clone)) e lavorare sui file scaricandoli ([```git pull```](https://www.git-scm.com/docs/git-pull)), modificandoli e ricaricandoli ([```git push```](https://git-scm.com/docs/git-push)). Tutti i partecipanti hanno la capacità di vedere le modifiche, le annotazioni e gli eventuali errori lasciati dagli altri programmatori senza utilizzare supporti di memoria come chiavette o [Floppy Disks](https://it.wikipedia.org/wiki/Floppy_disk).
Il lato più affascinante della piattaforma è che esistono migliaia di progetti creati e mantenuti da persone che non si sono neanche mai viste. Ognuno di noi può clonare un qualsiasi progetto pubblico, migliorarlo ed infine ricaricarlo.

**ATTENZIONE: i repository di default vengono resi pubblici! Prudenza ai dati che caricate su questa o qualsiasi altra piattaforma.**


## Installazione
Il consiglio, soprattutto all'inizio, è di utilizzare un GitClient che vi permette di gestire queste dinamiche visualmente, per questo motivo vi mostrerò come installare GitFork e come utilizzare le funzioni di base. 
Per i più temerari lascio anche il sito di [GitWindows](https://gitforwindows.org/), l'originale, i comandi vengono eseguiti in [bash](https://it.wikipedia.org/wiki/Bash) che è l'attuale linguaggio utilizzato nel terminale Linux.

### Passaggi (cliccate per ingrandire)
1. Scaricare, installare e avviare [GitFork](https://git-fork.com/).
2. Inserire il percorso di default per i repository (**gli altri dati sono facoltativi**)
  <img src="https://user-images.githubusercontent.com/106427269/206873229-07e99efb-57a6-40bd-b7bf-b82bc3697bf1.JPG" width=60% height=60%>
3. Cliccare su File > Accounts
  <img src="https://user-images.githubusercontent.com/106427269/206873243-c17040dc-4c06-4fd4-8efd-c3359bf0b911.jpg" width=70% height=70%>
4. Aggiungere il vostro account GitHub
  <div style="display: flex;">
    <img src="https://user-images.githubusercontent.com/106427269/206873262-e622a08d-4677-41d2-99ba-5ec58864ebf5.JPG" width=70% height=70%>
    <img src="https://user-images.githubusercontent.com/106427269/206873275-ee6961db-cc6d-4728-bfde-695dc2f4471c.JPG" width=70% height=70%>
  </div>
5.  Cliccate su File > Clone...
   <img src="https://user-images.githubusercontent.com/106427269/206873351-26c1d730-b36a-4a84-bf4e-394c2e8ca923.jpg" width=70% height=70%>
   <img src="https://user-images.githubusercontent.com/106427269/206873371-a14471ca-a5e2-4a46-90d2-837db99a2a59.JPG" width=70% height=70%>
6. Copiate il link in alto a destra in questa pagina
  <img src="https://user-images.githubusercontent.com/106427269/206873409-7e096b81-4544-4cc0-995b-4d9a65c7008c.JPG" width=70% height=70%>
9. Fine.
  <img src="https://user-images.githubusercontent.com/106427269/206873420-9b4b901d-58bd-417a-b8fa-429aa6fb32b1.JPG" width=70% height=70%>

## Guida all'utilizzo
Per scaricare le ultime modifiche fatte al progetto seguite leseguenti azioni.
### Passaggi (cliccate per ingrandire)
1. Cliccate su Fetch per verificare se effettivamente sono presenti degli aggiornamenti
  <img src="https://user-images.githubusercontent.com/106427269/206874053-880ddc66-2ee7-449d-8331-7e08380f07b3.JPG" width=70% height=70%>
2. Cliccate su Pull per scaricarli
  <img src="https://user-images.githubusercontent.com/106427269/206874081-d87614ab-0a49-4fc1-9859-e4a8f20c504f.JPG" width=70% height=70%>
  <img src="https://user-images.githubusercontent.com/106427269/206874102-9920c0bc-3f02-4e42-b910-5086e83cf7ce.JPG" width=70% height=70%>
3. Fine
  <img src="https://user-images.githubusercontent.com/106427269/206874142-a8e0349b-b173-4226-94c1-d26666ab38c7.JPG" width=70% height=70%>
