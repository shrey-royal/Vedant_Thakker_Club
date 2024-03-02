#include<stdio.h>
#include<string.h>

typedef union {
    struct {    //LuxuryVehicle
        char name[20];
        float price;
        char model[20];
    } lmv;

    struct {    //HeavyVehicle
        char name[20];  //20
        float price;    //4 (4)
        char model[20]; //20
        double cargoLoad;  //8
    } hmv;
} Vehicle;


int main() {
    Vehicle v;
    // printf("\n%d, %d", sizeof(int), sizeof(float));
    // printf("\n%d", sizeof(Demo));

    // printf("\nLMV = %d", sizeof(v.lmv));
    // printf("\nHMV = %d", sizeof(v.hmv));

    strcpy(v.lmv.name, "Luxury Car");
    v.lmv.price = 100000.0f;
    strcpy(v.lmv.model, "2024 Model");

    printf("\nLuxury Vehicle: ");
    printf("\nName: %s", v.lmv.name);
    printf("\nPrice: %.2f", v.lmv.price);
    printf("\nCargo Load: %.2lf tons", v.hmv.cargoLoad);

    strcpy(v.hmv.name, "Heavy Truck");
    v.hmv.price = 150000.0f;
    strcpy(v.hmv.model, "XL");
    v.hmv.cargoLoad = 5000.0;

    printf("\nModel: %s", v.lmv.model);
    printf("\n\nHeavy Vehicle: ");
    printf("\nName: %s", v.hmv.name);
    printf("\nPrice: %.2f", v.hmv.price);
    printf("\nModel: %s", v.hmv.model);
    printf("\nCargo Load: %.2lf tons", v.hmv.cargoLoad);


    return 0;
}