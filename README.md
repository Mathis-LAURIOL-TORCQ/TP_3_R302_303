# TP_3_R302_303

##Exercice 1

### 1.1

```mermaid
classDiagram
    Article <|-- CD
    Article <|-- Livre

    class Client{

    }

    class Article{
    <<abstract>>

    }
    class CD{
    }

    class Livre {

    }

    Client "0..1" --> "0..*" Article : commande


    class Companie {

    }

    class Vol {

    }

    Companie "1..*" -- "0..*" Vol : propose

    class Personne {

    }

    Personne "0..1" -- "0..1" Personne : est marié à



    class Document {
        +imprimer(imprimante) : void
    }

    class Imprimante {
        +getNom() :: string
    }

    Document ..> Imprimante : use


    class Repertoire {

    }

    class Fichier {

    }

    Repertoire "1" *-- "0..*" Fichier : contient


    class Piece {

    }

    class Mur {

    }

    Piece "1..2" *-- "1..*" Mur : contient



    

```


```mermaid
classDiagram

    class Bibliothèque {
        +inscrire(a:Adhérent):void
        +desinsc(a:Adhérent):void
        +ajouterDocument(d:Document):void
    }

    class Document {
        <<abstract>>
        -numero:int
        -titre:string
    }

    class Adhérent {
        <<abstract>>
        -prenom:string
        -nom:string
        -adressePostale:string
        -mail:string
        -dateAdhesion:Date 

        +consulter(d:Document):void
        +emprunter(v:Volume,retour:Date):Emprunt
        +rendre(v:Volume):void
        +getVolumesEmpruntes():List<Volume>
    }

    class Etudiant {
        -numEtudiant:string
    }

    class Professeur {
        -numen:String
    }

    class Journal {

    }

    class Volume {
        <<abstract>>
        -auteur:String
    }

    class Livre {
        -genre:String
    }

    class Dictionnaire {
        -thematique:string
    }

    class ManuelScolaire {
        -matiere:String
        -cycle:Cycle
    }

    class Cycle {
        <<enumeration>>
        LICENSE
        MASTER
        DOCTORAT
    } 

    class Emprunt {
        -dateEmprunt:Date
        -dateRestitution:Date

        +prolonger(nouvelleDate:Date):void
    }


    Adhérent <|-- Etudiant
    Adhérent <|-- Professeur
    Document <|-- Journal
    Document <|-- Volume
    Volume <|-- Dictionnaire
    Volume <|-- Livre
    Volume <|-- ManuelScolaire
    Bibliothèque "1" *-- "0..*" Adhérent
    Bibliothèque "1" *-- "0..*" Document
    Cycle <.. ManuelScolaire
    Emprunt "0.4" -- "1" Adhérent : effectue
    Emprunt "0.1" -- "1" Volume : concerne

    Document <.. Adhérent : consulte
```