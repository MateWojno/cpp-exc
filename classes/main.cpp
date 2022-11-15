#include <iostream>
#include <string>


class Hero {
    public:
    int maxLvl(int maxLvl); int lvl;
    int att; int mana; int hp; int def; int speed; int exp; 
    float x_location; float y_location;
    std::string name;
    std::string vocation;
    std::string race;
    void spell_aoe();
};

void Hero::spell_aoe() {
    std::cout << "Blizzard spell is casting..." << "\n" << "My mana is getting low..." << "\n";
}

int Hero::maxLvl(int maxLvl) {
    return maxLvl;
}

class Enemy {   // The class;
    public:     // Access specifier;
    std::string enemy_name;
    int att; int mana; int hp; int def; int speed; int lvl; int exp;
    float x_location; float y_location;
    Enemy(std::string enemy_name, int att, int mana, int hp, int def, int speed, int lvl, int exp) {   // Constructor;
        enemy_name = enemy_name;
        att = att; mana = mana; hp = hp; def = def; speed = speed; lvl = lvl; exp = exp;
        std::cout << "Agrrhrrr!\n...........\n";
    }
};

class Access {
    public:
    int x;
    private:
    int y;
};

int main() {
    Hero myHero;
    myHero.att = 10; myHero.lvl = 1; myHero.mana = 200; myHero.hp = 100; 
    myHero.def = 7; myHero.speed = 2; myHero.exp = 0;
    myHero.x_location = 0.0; myHero.y_location = 0.0;
    myHero.name = "matewojno"; myHero.vocation = "Mage"; myHero.race = "Human";
    
    std::cout << "Hero name: " << myHero.name << "\n" << "Level: " << myHero.lvl << "\n";
    std::cout << "Vocation: " << myHero.vocation << "\n";
    std::cout << "Race: " << myHero.race << "\n" << "Location_x: " << myHero.x_location << "\n";
    std::cout << "Location_y: " << myHero.y_location << "\n" << "Exp: " << myHero.exp << "\n";
    myHero.spell_aoe();
    std::cout << "Maximum level is: " << myHero.maxLvl(999) << "\n\n" << "\n...............\n\n";
    Enemy myEnemy1("Goblin", 10, 0, 60, 4, 2, 1, 25);  // Create object of myClass (Enemy) - this will call the constructor;
    Enemy myEnemy2("Golem", 25, 0, 300, 30, 1, 20, 200);
    std::cout << myEnemy1.enemy_name << " " <<  "\n";
    std::cout << "There is some more!\n" << myEnemy2.enemy_name << "Attacking!\n";
    Access myAccess;
    myAccess.x = 25; 
    // myAccess.y = 10; // error can't access it, since it is private;
    return 0;
}