#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class MetroStation {
private:
    string name;
    double latitude;
    double longitude;
public:
    MetroStation(string _name, double _latitude, double _longitude);
    string getName();
    double calcDistance(double x, double y);
};

MetroStation::MetroStation(string _name, double _latitude, double _longitude) {
    name = _name;
    latitude = _latitude;
    longitude = _longitude;
}

string MetroStation::getName() {
    return name;
}

double MetroStation::calcDistance(double x, double y) {
    return sqrt(pow((latitude - x), 2) + pow((longitude - y), 2));
}

vector<MetroStation*> addLocations() {
    vector <MetroStation*> metroStations;
    metroStations.push_back(new MetroStation("ShahidSattari", 35.73701161016283, 51.32000324192171));
    metroStations.push_back(new MetroStation("AshrafiEsfahani", 35.73611165553874, 51.331768470757765));
    metroStations.push_back(new MetroStation("Yadegar", 35.735130531020644, 51.346208413085435));
    metroStations.push_back(new MetroStation("Marzdaran", 35.73471794072016, 51.359441840068854));
    metroStations.push_back(new MetroStation("ShahrakAzmayesh", 35.73169328373662, 51.37151999774101));
    metroStations.push_back(new MetroStation("TarbiatModarres", 35.724300341085325, 51.38133467075743));
    metroStations.push_back(new MetroStation("ImamHossein", 35.7023697293208, 51.445680840067915));
    metroStations.push_back(new MetroStation("MeidanShohada", 35.6906261412322, 51.44759224006762));
    metroStations.push_back(new MetroStation("MeidanSanat", 35.754612181278574, 51.367424655413856));
    metroStations.push_back(new MetroStation("BorjeMilad", 35.747844514872995, 51.3783225265776));
    metroStations.push_back(new MetroStation("BoostanGoftogou", 35.73272552634318, 51.382598897741104));
    metroStations.push_back(new MetroStation("ModafeanSalamat", 35.7064904241789, 51.37746098424852));
    metroStations.push_back(new MetroStation("Tohid", 35.7009016557836, 51.378598784248524));
    metroStations.push_back(new MetroStation("Tajrish", 35.80464057880659, 51.433487840070924));
    metroStations.push_back(new MetroStation("Qeitarie", 35.79308008260003, 51.435008153562194));
    metroStations.push_back(new MetroStation("ShahidSadr", 35.78520738685602, 51.43586332657868));
    metroStations.push_back(new MetroStation("Qolhak", 35.77282050382126, 51.437980399594906));
    metroStations.push_back(new MetroStation("Shariati", 35.76269677422387, 51.4442096400697));
    metroStations.push_back(new MetroStation("Mirdamad", 35.759834986247256, 51.43381929774183));
    metroStations.push_back(new MetroStation("Haqqani", 35.75625817352086, 51.42659429774167));
    metroStations.push_back(new MetroStation("Hemmat", 35.74806108008146, 51.42602392657763));
    metroStations.push_back(new MetroStation("Mosalla", 35.74041108837663, 51.427157597741186));
    metroStations.push_back(new MetroStation("ShahidBeheshti", 35.730957724141575, 51.427072726577116));
    metroStations.push_back(new MetroStation("Mofatteh", 35.72446637005086, 51.427815997740794));
    metroStations.push_back(new MetroStation("HafteTir", 35.715210946948055, 51.426304626576645));
    metroStations.push_back(new MetroStation("Taleghani", 35.70718209201746, 51.42553582657642));
    metroStations.push_back(new MetroStation("DarvazeDolat", 35.70164953022243, 51.42573879774009));
    metroStations.push_back(new MetroStation("Tehranpars", 35.73107948939944, 51.53176872657715));
    metroStations.push_back(new MetroStation("ShahidBagheri", 35.73331775256313, 51.51642309774103));
    metroStations.push_back(new MetroStation("Elmosanat", 35.73463707116064, 51.50499151123283));
    metroStations.push_back(new MetroStation("Sarsabz", 35.735337162390415, 51.49493652657726));
    metroStations.push_back(new MetroStation("Janbazan", 35.73344106197627, 51.48465062657719));
    metroStations.push_back(new MetroStation("Fadak", 35.726523770275165, 51.47580206890489));
    metroStations.push_back(new MetroStation("Sabalan", 35.71823933368736, 51.46466045541288));
    metroStations.push_back(new MetroStation("ShahidMadani", 35.709222080090505, 51.453343353559745));
    metroStations.push_back(new MetroStation("DarvazeShemiran", 35.69909298009288, 51.43772345541234));
    metroStations.push_back(new MetroStation("ShahidMahallati", 35.79791308006991, 51.50821358425127));
    metroStations.push_back(new MetroStation("Aghdasie", 35.80039418352614, 51.48378159774296));
    metroStations.push_back(new MetroStation("Noboniad", 35.790701474495485, 51.47869712657878));
    metroStations.push_back(new MetroStation("HosseinAbad", 35.778888771911355, 51.47879209774242));
    metroStations.push_back(new MetroStation("MeidanHeravi", 35.77185688978231, 51.47340818239771));
    metroStations.push_back(new MetroStation("Zeinodin", 35.760529773987166, 51.46544668239738));
    metroStations.push_back(new MetroStation("KhajeAbdollah", 35.74345068008253, 51.463458226577536));
    metroStations.push_back(new MetroStation("ShahidSayad", 35.69909298009288, 51.43772345541234));
    metroStations.push_back(new MetroStation("ShahidGhoddusi", 35.73145888008531, 51.44437089774106));
    metroStations.push_back(new MetroStation("Sohravardi", 35.73105847077009, 51.43698679774101));
    metroStations.push_back(new MetroStation("MirzayeShirazi", 35.72812558972314, 51.41747775541316));
    metroStations.push_back(new MetroStation("MeidanJahad", 35.72059516962845, 51.408227126576804));
    metroStations.push_back(new MetroStation("Valiasr", 29.608138002842328, 52.558414366890936));
    metroStations.push_back(new MetroStation("TatreShahr", 35.70099754229118, 51.405336440068055));
    metroStations.push_back(new MetroStation("IranKhodro", 35.725563375408484, 51.19657879048528));
    metroStations.push_back(new MetroStation("Chitgar", 35.7170401475475, 51.24387482657667));
    metroStations.push_back(new MetroStation("VarzeshgahAzadi", 35.71725018008879, 51.28402146890443));
    metroStations.push_back(new MetroStation("ErameSabz", 35.71774683701109, 51.30170659032979));
    metroStations.push_back(new MetroStation("Sadeghie", 35.71790095858166, 51.33019466890449));
    metroStations.push_back(new MetroStation("Tarasht", 35.71623221290361, 51.34357449774068));
    metroStations.push_back(new MetroStation("Sharif", 35.70580886801582, 51.353619768904224));
    metroStations.push_back(new MetroStation("Shademan", 35.700640705376166, 51.3635926382153));
    metroStations.push_back(new MetroStation("ShahrakEkbatan", 35.70541359840946, 51.30767042657638));
    metroStations.push_back(new MetroStation("Bime", 35.69907098009297, 51.32014711123179));
    metroStations.push_back(new MetroStation("MeidanAzadi", 35.70115526750824, 51.33327765541235));
    metroStations.push_back(new MetroStation("OstadMoein", 35.700099041996836, 51.34460396890409));
    metroStations.push_back(new MetroStation("Habibollah", 35.70067246745562, 51.356054126576254));
    metroStations.push_back(new MetroStation("Enghelab", 35.70116735492779, 51.39001185541231));
    metroStations.push_back(new MetroStation("Ferdosi", 35.70132379265912, 51.418509897740165));
    metroStations.push_back(new MetroStation("EbneSina", 35.69062890756625, 51.45655452657584));
    metroStations.push_back(new MetroStation("Piruzi", 35.69100216640129, 51.46791196890378));
    metroStations.push_back(new MetroStation("Nabard", 35.69160399372332, 51.4774455400677));
    metroStations.push_back(new MetroStation("NiruHavaie", 35.692898466607986, 51.48823104006775));
    metroStations.push_back(new MetroStation("ShahidKolahduz", 35.69877686724898, 51.500349326576185));
    return metroStations;
}

void run(const vector<MetroStation*>& metroStations) {
    while(true) {
        double latitude, longitude, distance, shortestDistance = 10;
        MetroStation* closestStation = NULL;
        cout << "Latitude: ";
        cin >> latitude;
        cout << "Longitude: ";
        cin >> longitude;

        for(MetroStation* station : metroStations) {
            distance = station->calcDistance(latitude, longitude);
            if(distance < shortestDistance){
                shortestDistance = distance;
                closestStation = station;
            }
        }

        cout << "Closest Station: " << closestStation->getName() << endl;
    }
}

int main() {
    vector <MetroStation*> metroStations = addLocations();
    run(metroStations);
    return 0;
}