// Composition

class Fichier {
    std::string nom;
public:
    Fichier(std::string n) : nom(std::move(n)) {}
};

class Repertoire {
    std::vector<Fichier> fichiers;      
public:
    void creerFichier(const std::string& nom) { fichiers.emplace_back(nom); }
};



// Association bidirectionnelle

class Commande;                       

class Client {
    std::vector<Commande*> commandes;    
public:
    void ajouterCommande(Commande* c) { commandes.push_back(c); }
};

class Commande {
    Client* client;                    
public:
    Commande(Client* c) : client(c) { c->ajouterCommande(this); } 
};