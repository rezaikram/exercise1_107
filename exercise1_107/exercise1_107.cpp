#include <iostream>
#include <string>

class Kandidat {
private:
    std::string nama;
    double NilaiMatematika;
    double NilaiEnglish;


public:
    Kandidat(std::string nama, double NilaiMatematika, double NilaiEnglish) {
        this->nama = nama;
        this->NilaiMatematika = NilaiMatematika;
        this->NilaiEnglish = NilaiEnglish;
    }

    std::string getNama() {
        return nama;
    }

    std::string getStatus() {
        double averageScore = (NilaiMatematika + NilaiEnglish) / 2;
        if (averageScore >= 70 || NilaiMatematika > 80) {
            return "diterima";
        }
        else {
            return "tidak diterima";
        }
    }
};

int main() {
    Kandidat kandidat[20];

    for (int i = 0; i < 20; i++) {
        std::string name;
        double NilaiMatematika, NilaiEnglish;

        std::cout << "Masukkan nama kandidat: ";
        std::cin >> name;
        std::cout << "Masukkan nilai matematika: ";
        std::cin >> NilaiMatematika;
        std::cout << "Masukkan nilai Bahasa Inggris: ";
        std::cin >> NilaiMatematika;

        kandidat[i] = Kandidat(name, NilaiMatematika, NilaiEnglish);
    }

    std::cout << "Nama\t\tStatus" << std::endl;
    for (int i = 0; i < 20; i++) {
        std::cout << kandidat[i].getNama() << "\t\t" << kandidat[i].getStatus() << std::endl;
    }

    int acceptedCount = 0;
    int notAcceptedCount = 0;
    for (int i = 0; i < 20; i++) {
        if (kandidat[i].getStatus() == "diterima") {
            acceptedCount++;
        }
        else {
            notAcceptedCount++;
        }
    }

    std::cout << "Total diterima: " << acceptedCount << std::endl;
    std::cout << "Total tidak diterima: " << notAcceptedCount << std::endl;

    return 0;
}
