#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <clocale>

class Country
{
private:
    std::string m_name;
    long int m_area;
    long int m_population;
    long int m_population_denisty;

    void setPopulationDenisty()
    {
        m_population_denisty = m_population / m_area;
    }

public:
   // Country()
       // : m_name(""), m_area(1), m_population(0) {}

    Country(std::string name, long int area, long int population)
        : m_name(name), m_area(area), m_population(population) {}

    std::string getName()
    {
        return m_name;
    }

    long int getArea()
    {
        return m_area;
    }

    long int getPopulation()
    {
        return m_population;
    }

    long int getPopulationDenisty()
    {
        return m_population_denisty;
    }

};

void sortCountrys(std::list<Country>& countrys)
{
    for (Country country: countrys)
    {

    }
}

void writeCountrys(std::list<Country>& countrys)
{
    for (Country country : countrys)
    {
        std::ofstream fout("countrys.xls", std::ios::app);
        
        fout << country.getName() << '\t';
        fout << country.getArea() << '\t';
        fout << country.getPopulation() << '\t';
        fout << '\n';
    }
}

int main()
{
    std::list<Country> countrys{ Country("Ukraine", 603628, 41858000), Country("Poland", 312679, 38433600) };
    
    writeCountrys(countrys);

    return 0;
}