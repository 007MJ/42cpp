#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;


void wirtefile(string filename, string text)
{
    std::ofstream file(filename.c_str(), std::ios::app);
    if (file){
        file << text;
    }else{
        cout << "can open the file" << endl;
    }
}
std::string changeNameFile(std::string filename){
    if (filename.empty() == false){
        int i;

        i = filename.find('.');
        return (filename.substr(0, i) + ".replace");
    }
    return (filename + ".replace");
}

std::string  readfile(string filename, string s1, string s2){
    
    string text;
    int     pos;
    std::ifstream file(filename);
    if (file){
        string line;
        std::ofstream filereplace(changeNameFile(filename));
        if (!text.empty())
            cout << "text" << endl;
        while (std::getline(file, line))
        {
            text.resize(line.length() + 1);
            text = line;
            pos = text.find(s1);
            
            line.erase();
            cout << text << endl;
        }
        return (text);
    }else{
        cout << "Impossible ouvire : " << filename << endl;
    }
    return (text);
}

int main(int ac, char **argv){

    if (ac == 4){
        string filename(argv[1]);
        // cout << "on est :" << *(argv + 1) << endl;
        // readfile(argv[1]);
        // string name = changeNameFile(argv[1]);
        cout << name << endl;
    }
    else if (ac > 4 || ac < 4) 
        cout << "Error : number of arguments : " << ac << " not == 4"<< endl;
    else 
        cout << "Error : arguments" << endl;
}
//je suis mois