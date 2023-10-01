#include <iostream>
#include <iomanip>
#include <numeric>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <random>
#include <cstdlib>
#include <ctime>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::domain_error;
using std::sort;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
    string vard, pav;
    vector<int> paz;
    int egz;
    float rez;
public:
    studentas();
    studentas(string v, string p, vector<int>pp, int e);
    studentas(const studentas& temp);
    studentas& operator=(const studentas& temp);
    ~studentas();

    inline string getVardas() { return vard; }
    inline int getPazNr() { return paz.size(); }

    inline void setVardas(string t) { vard = t; }
    void printas();
    void printasRez();
    void rezVid();
    void failas(const std::string& failoVardas, std::vector<studentas>& grupe);
 
    void rezMed();
    double mediana(vector<int>vec);

};