#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;


std::string changeNameFile(std::string filename){
    if (filename.empty() == false){
        int i;

        i = filename.find('.');
        return (filename.substr(0, i) + ".replace");
    }
    return (filename + ".replace");
}

std::string my_replace(string text, string search, string replace){
    
    string newtext;
    unsigned long pos = 0;
    unsigned long  foundpos = 0;
    if (search.empty() == true || replace.empty() == true)
        return (text);
    while ((foundpos = text.find(search, pos)) != std::string::npos){
        newtext += text.substr(pos, foundpos - pos);
        newtext += replace;
        cout << "first copy :: " << newtext << endl;
        pos =  foundpos + search.length();
        cout << "position "<< pos << " trouve "<< foundpos << " size "<< newtext.length()<< endl;
    }
    if (pos < text.length())
        newtext += text.substr(pos);
    return (newtext);
}

std::string  readfile(string filename, string s1, string s2){
    
    string          text;
    std::ifstream file(filename);
    if (file){
        string line;
        string name = changeNameFile(filename);
        std::ofstream filereplace(name, std::ios::app);
        if (!text.empty())
            cout << "text" << endl;
        while (std::getline(file, line))
        {
            text.resize(line.length() + 1);
            text = line;
            text = my_replace(text, s1, s2);
            filereplace << text << endl;;
            line.erase();
            text.erase();
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
        readfile(argv[1], argv[2], argv[3]);
    }
    else if (ac > 4 || ac < 4) 
        cout << "Error : number of arguments : " << ac << " not == 4"<< endl;
    else 
        cout << "Error : arguments" << endl;
}