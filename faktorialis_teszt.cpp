#include <sketch2/sketch2.hpp>
#include "faktorialis.cpp"

// Tesztelő osztály létrehozása
class FaktorialisTest : public sketch2::TestSuite {
public:
    void run() override {
        testFaktorialisValues();
    }

private:
    void testFaktorialisValues() {
        // Tesztelünk különböző bemeneteket és ellenőrizzük az elvárt kimeneteket
        sketch2::expect(faktorialis(0)).toEqual(1);
        sketch2::expect(faktorialis(1)).toEqual(1);
        sketch2::expect(faktorialis(5)).toEqual(120);
        sketch2::expect(faktorialis(6)).toEqual(720);
        sketch2::expect(faktorialis(10)).toEqual(3628800);
    }
};

// Main függvény, amely futtatja a teszteket
int main() {
    sketch2::run<FaktorialisTest>();
    return 0;
}
