# Sistemi Operativi (Capitolo 1)

## 1.0 Introduzione

Un **sistema operativo** è un insieme di programmi (**software**)
che gestisce gli elementi fisici del calcolatore (**hardware**).

## 1.1 Che cosa fa un sistema operativo

un **sistema di elaborazione** si può dividire in quattro componenti: **hardware**, **sistema operativo**, **programmi** e **utenti**.

L'**hardware** di base composto `dall'unità centrale di elaborazione` o CPU, dalla **memoria** e dai dispositivi di **I/O**, fornisce al sistema le risorse elaborative fondamentali.

I **programmi** (editor di testo, Browser, ecc...) definiscono il modo in qui si usano queste risorse.

## 1.1.1 Punto di vista dell'utente

La percezione di un calcolatore da parte di un utente dipende dalla sua *UI* e facilità d'uso.

In questi casi il sistema operativo è progettato considerando
maggiormente la **facilità d'uso** e **non l'impiego ottimale della risorse** (Windows).

Altri utenti usano terminali connessi a **mainframe o minicalcolatori** condividendo le risorse con altri utenti.
In questo caso il S.O **è progettato per massimizzare l'uso delle risorse**.

Ci sono poi anche altri sistemi dove il calcolatore non ha nessuna visibilità (**embedded**) come quelli presenti nelle auto o elettrodomestici.

## 1.1.2 Punto di vista del calcolatore

Dal punto di vista del calcolatore il S.O è il programma più strettamente correlato al suo hardware.

Un S.O si può definire come un **assegnatore di risorse** o un **programma di controllo** che gestisce l'esecuzione dei programmi in modo da impedire un uso scorretto del calcolatore da parte dell'utente.

## 1.1.3 Definizione di S.O

Il S.O si può  definire con un programma unico `kernel` (nucleo) che funziona sempre nel calcolatore insieme ai **programmi di sistema** e i **programmi applicativi**.

Nei dispositivi mobili oltre il kernel troviamo un `middleware`,
ovvero una collezione di software per fornire servizi come database, media e grafica.

<img src='https://atadistance.net/wp-content/uploads/2018/08/iOS-12-Apple-Pay-Stacks-Explained-wMIFARE.png' width=45% height=45%>

## 1.2.1 Funzionamento di un sistema elaborativo

Un moderno calcolatore è composto da una o più **CPU** e da un certo numeri di controllori detti `BUS`.
Ciascuno di questi controllori si occupa di un particolare pezzo di hardware.

La **CPU** e questi controllori possono operare in **parallelo**, contendendosi l'accesso ai cicli di memoria, la cui sincronizzazione è garantita da un **controllo di memoria**.

L'avviamento del sistema è gestito da un programma detto `Bootloader`, tipicamente memorizzato all'interno di una `ROM`.

Questo programma e le memoria in cui è contenuto viene chiamato `Firmware`.
Il **firmware** ha il compito di inizializzare i diversi componenti del sistema, dai registri della **CPU**, ai **BUS** fino al contenuto della memoria principale (**RAM**).

Una volta in esecuzione il `Kernel` a sua volta avvierà una serie di servizi chiamati `Deamons`, che restano sempre in esecuzione insieme al kernel.

Una volta avviato il sistema attende che si verifichi un qualche **evento**.
Un evento è in genere segnalato da un'interruzione dell'attuale sequenza di esecuzione della CPU chiamto `Interrupt` che può essere causato dall'hardware (es. riscaldamento eccessivo della cpu) o da un programma (divisione per zero).

Le interruzione sono un elemento fondamentale dell'architettura di un calcolatore.
Ciascun tipo di calcolatore ha una propria **mappatura** per la gestione delle interruzioni ovvero una specifica **tabella di puntatori alle specifiche procedure**.

In genere questa tabella è memorizzata negli indirizzi più bassi (es. 0-100) poichè è sicuro che esiste l'indirzzo zero ma non è sicuro che esista l'indirzzo 1024 esempio, dipende dalla memoria.

L'architettura di gestione delle interruzioni memorizza anche l'indirizzo dell'istruzione interronta, per poi una volta completata la procedura di gestione di essa, ritornare l'indirizzo al `Program Counter` consentendo la ripresa in ordine dei calcoli da parte della CPU.

## 1.2.2 Struttura della memoria

La CPU può caricare istruzioni solamente dalla memoria.

La memoria principale detta `RAM` è in genere realizzata con una tecnologia basata su semi-conduttori chiamata anche `DRAM` (dynamic random access memory).

Altri tipi di memoria possono essere la `ROM`, o la `EEPROM`(Electrically Erasable Programmable Read-Only Memory).

Nella ROM viene caricato il firmware mentre nella EEPROM generalmente i programmi di sistema pre-installati di fabbrica.

Tutte le tipologie di memoria forniscono un vettore di Bytes.

L'interazione tra CPU e la memoria avviene tramite le istruzioni di tipo `load` e `store`.

**Load** trasferisce i Byte di informazione uno dei registri della CPU, mentre **store** copia il contenuto di uno di questi registri nella memoria scecificata. 

La tipica sequenza di istruzione, comincia con il prelievo `fetch` di un'istruzione dalla memoria e il suo trasferimento nel registro.
Una volta terminata l'istruzione viene trasferita in nel **flusso di memoria** generato dal **program counter**.

Le memorie di basso livello dispongono di una ridotta capacità di memoria ma di un'altissima velocità, al contrario memoria di grossa capacità risultano molto lente.

![img](https://vitolavecchia.altervista.org/wp-content/uploads/2017/06/La-memoria-e-il-sistema-di-memorizzazione-in-un-computer.gif)

## Struttura I/0

