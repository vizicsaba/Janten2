#include <sketch2/sketch2.hpp>
#include "faktorialis.cpp"  // Importáljuk a faktoriális függvényt

// Tesztelő osztály létrehozása
class FaktorialisTest : public sketch2::TestSuite {
public:
    void run() override {
        testFaktorialis();
    }

private:
    // Teszt: 5 faktoriálisa = 120
    void testFaktorialis() {
        sketch2::expect(faktorialis(5)).toEqual(120);
        sketch2::expect(faktorialis(0)).toEqual(1);
        sketch2::expect(faktorialis(1)).toEqual(1);
        sketch2::expect(faktorialis(6)).toEqual(720);
    }
};

// Main függvény, amely futtatja a teszteket
int main() {
    sketch2::run<FaktorialisTest>();
    return 0;
}
