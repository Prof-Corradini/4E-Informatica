# Corso di Informatica della classe 4E
Cartella di lavoro della classe di informatica 4E

## Perchè GitHub?
Git e GitHub rappresentano una conoscenza essenziale per chi lavora nel mondo del software e proprio per questo motivo tengo al fatto che voi ne impariate almeno le basi. In più, una volta impostata la repository sul vostro computer, basteranno un paio di click per avere il materiale del corso sempre aggiornato, senza dover scaricare e spostare neanche un file. 

### Git
[Git](https://en.wikipedia.org/wiki/Git) è un [Software di Controllo Versione](https://it.wikipedia.org/wiki/Controllo_versione) (VCS), nato per mano dei programmatori che nel 2005 hanno lavorato al kernel di Linux. I VCS permettono di salvare localmente e su server lo storico delle "versioni" di un progetto, in questo modo si ha sempre l'opportunità di tornare ad una precedente forma del codice nel caso in cui sorgano dei problemi bloccanti o apparentemente irrisolvibili. 
Questa possibilità si dimostra estremamente efficace e permette di snellire di molto il processo di sviluppo facendo risparmiare un'enorme quantità di tempo, di errori e di imprecazioni. 

Git divide il lavoro in più rami detti **branch** ([```git branch```](https://git-scm.com/docs/git-branch)), come impostazione base la cartella si aggiorna su un ramo principale detto **main branch** in cui, solitamente, si salvano tutte le versioni stabili del progetto.
Una commit ha varie fase le principali sono [```git fetch```](https://git-scm.com/docs/git-fetch), con cui l'utente può vedere gli aggiornamenti applicati alla cartella, [```git pull```](https://www.git-scm.com/docs/git-pull), dove l'utente scarica gli aggiornamenti interessati sul proprio calcolatore ed infine [```git push```](https://git-scm.com/docs/git-push) e  [```git commit```](https://git-scm.com/docs/git-commit), che permetto di caricare le eventuali modifiche sul porgetto.
Normalmente un ciclo di sviluppo prevede un **fase di lavoro**, in cui gli sviluppatori si dividono le mansioni ed assegnano ad ognuna un **branch**, ed una **fase di analisi** dove si controlla il codice e si risolvono i conflitti che si sono creati fra le differenti versioni, caricando infine la versione stabile sul ramo principale del progetto ([```git merge```](https://git-scm.com/docs/git-merge)).

### GitHub
GitHub è una piattaforma online a cui si stabilisce un collegamento utilizzando Git, la forza di GitHub è che ognuno può creare uno o più repository ed ogni collaboratore, con gli opportuni permessi, può partecipare al miglioramento del progetto in qualsiasi posto del mondo si trovi. Infatti, su questo sito, esistono progetti creati e mantenuti da sviluppatori di tutto il mondo, pian piano potreste scoprire dei gruppi di lavoro che vi appassionano: buttatevi, anche se vi mancano delle conoscenze le accumulerete nel processo di sviluppo, se vi rendete conto di non riuscire non preoccupatevi perchè tutti sanno che sviluppare codice è un'arte complessa e nessuno vi flagellerà per le vostre carenze. Insomma, siate curiosi e vedrete ceh vi porterà soddisfazioni.
Se trovate dei progetti interessanti premuratevi di farmelo sapere.

**ATTENZIONE: nel caso vogliate creare un repository state attenti perchè di default vengono resi pubblici! Prudenza con i dati che caricate su questa o qualsiasi altra piattaforma.**

## Installazione
Il consiglio, soprattutto all'inizio, è di utilizzare un GitClient che vi permette di gestire queste dinamiche visualmente, per questo motivo vi mostrerò come installare GitFork e come utilizzare le funzioni di base. 
Per i più temerari lascio anche il sito di [Git](https://gitforwindows.org/), l'originale, i comandi vengono eseguiti in [bash](https://it.wikipedia.org/wiki/Bash) che è l'attuale linguaggio utilizzato nel terminale Linux.

[Installazione di GitFork](../../wiki/Installazione-di-GitFork)

## Guida all'utilizzo
In questa guida, molto breve, vi mostro come controllare se sono presenti degli aggiornamenti nel repository e scaricarli.

[Utilizzo base di GitFork](../../wiki/Guida-all'utilizzo-di-base-di-GitFork)
