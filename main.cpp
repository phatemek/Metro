#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <float.h>
#include <math.h>
#include <vector>

using namespace std;

const string METRO_STATIONS_FILE = "./MetroStations.csv";
constexpr double EARTH_RADIUS = 6371;
constexpr double CONVERTER = 2156.33;

class MetroStation {
private:
    string name;
    double latitude;
    double longitude;
public:
    MetroStation(string _name, double _latitude, double _longitude);
    string get_name();
    double calc_distance(double x, double y);
};

MetroStation::MetroStation(string _name, double _latitude, double _longitude)
    : name(_name), latitude(_latitude), longitude(_longitude) {}

string MetroStation::get_name() { return name; }


vector<MetroStation*> add_locations() {
    vector<MetroStation*> metroStations;
    string name;
    double latitude, longitude;
    ifstream inputFile(METRO_STATIONS_FILE);

    while (inputFile >> name >> latitude >> longitude) 
        metroStations.push_back(new MetroStation(name, latitude, longitude));
    
    inputFile.close();
    return metroStations;
}

double MetroStation::calc_distance(double x, double y) {
    return sqrt(pow((latitude - x), 2) + pow((longitude - y), 2));
}

string calc_time(double distance) {
    double timeInMinute = distance * CONVERTER;
    int minute, second;
    minute = timeInMinute;
    second = (timeInMinute - minute) * 60;
    string sMinute = to_string(minute), sSecond = to_string(second);
    if (minute < 10)
        sMinute = "0" + sMinute;
    if (second < 10)
        sSecond = "0" + sSecond;
    return sMinute + ":" + sSecond;
}

void run(const vector<MetroStation*>& metroStations) {

    while(true) {
        double latitude, longitude, distance, shortestDistance = DBL_MAX;
        MetroStation* closestStation = NULL;
        cout << "Latitude: ";
        cin >> latitude;
        cout << "Longitude: ";
        cin >> longitude;

        for(auto& station : metroStations) {
            distance = station->calc_distance(latitude, longitude);
            if(distance < shortestDistance){
                shortestDistance = distance;
                closestStation = station;
            }
        }

        cout << "Closest station: " << closestStation->get_name() << 
                ", and the approximate time is(if you are walking):" << calc_time(shortestDistance);
        cout << endl << "**************************************************************" << endl;
    }
}

void clean_vector(vector<MetroStation*>& metroStations){
    for (auto& station : metroStations)
        delete station;
}

int main() {
    vector<MetroStation*> metroStations = add_locations();
    run(metroStations);
    clean_vector(metroStations);
    return 0;
}