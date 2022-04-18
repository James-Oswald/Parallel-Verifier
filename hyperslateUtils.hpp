

typedef unsigned int id_t;


struct HyperslateDescription{
    int x, y;                       //positions of the node in the hyperslate UI
    id_t id;                        //Internal ID in hyperstate
    const char* name;               //Hyperslate names
    const char* formula;            //The textual representation of the formula
    const char* justification;      //The logical justification
};

struct HyperslateStructure{
    id_t conclusion;
    id_t premises[];
};

struct HyperslateInterface{
    int x, y;            //The cordinates of the top left workspace corner 
    int width, height;   //The offset of the bot right workspace corner relative to x, y
    char* proofSystem; 
};
