/*
 * LA FUNZIONE PRINT IN SWIFT
 * by Salvatore Spagnuolo
 * 
 */

// Hello world in Swift

print("Hello World")

// pint con variabili

var nome = "Ciccio"
var cognome = "Rossi"
var nome_completo = "\(nome) \(cognome)"
// con \() 

print("ciao, \(nome_completo)")
// Stampa: ciao, Ciccio

// comporre stringhe

var nome1 = "Franco"
var welcome = "Benvenuto in"
var versione = 4
var linguaggio = "Swift \(versione)" // cast implicito da Int a String

print(nome1, welcome, linguaggio, separator:", ", terminator:"\n")
// Stampa: Franco, Benvenuto in, Swift 4

// separator inserisce la stringa passata tra una variabile e l'altra
// terminator cambia l'ultimo carattere della stringa (es terminator:"", la stampa non va a capo)
// e poi c'è to che unito alla referenza di una variabile "stampa" sulla variabile e non su console

var line = ""

print(nome1, welcome, linguaggio, separator:", ", terminator:"\n", to:&line)
// non stampa niente

print(line)
// Stampa: Franco, Benvenuto in, Swift 4
