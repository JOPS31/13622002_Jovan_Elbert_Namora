#include <iostream>
#include <string>

class Mobil {  
public:
    std::string merk;  
    std::string warna;  
    int tahun;

    void nyalakanMesin() {  
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;  
    }  
};

int main() {  
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    return 0;  
}