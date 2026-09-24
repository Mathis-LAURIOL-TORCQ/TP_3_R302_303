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

    Client "0..*" -- "0..*" Article : commande
```