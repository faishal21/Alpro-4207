#include <iostream>

struct Operation {
    int Luas_PersegiPanjang(int panjang, int lebar) {
        return panjang * lebar;
    }

    double Luas_Lingkaran(int r) {
        return 3.14 * r * r;
    }

    double Volume_Kerucut(int r, int t) {
        return (3.14 * r * r * t) / 3.0;
    }

    double Volume_Bola(int r) {
        return (4.0 / 3.0) * 3.14 * r * r * r;
    }
};

int main() {
    Operation operasi;
    int panjang, lebar, r, tinggi;

    std::cout << "Masukkan Panjang dan Lebar: ";
    std::cin >> panjang >> lebar;
    std::cout << "Luas Persegi Panjang: " << operasi.Luas_PersegiPanjang(panjang, lebar) << std::endl;

    std::cout << "Masukkan Jari-Jari dan Tinggi: ";
    std::cin >> r >> tinggi;
    std::cout << "Luas Lingkaran: " << operasi.Luas_Lingkaran(r) << std::endl;
    std::cout << "Volume Kerucut: " << operasi.Volume_Kerucut(r, tinggi) << std::endl;
    std::cout << "Volume Bola: " << operasi.Volume_Bola(r) << std::endl;

    return 0;
}
