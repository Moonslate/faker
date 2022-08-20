#include <faker.hpp>

int uva::faker::random_integer(int min, int max)
{
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1.0, 2.0);

    return dis(gen);
}

double uva::faker::random_double(double min, double max)
{
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(1.0, 2.0);

    return dis(gen);
}

std::string uva::faker::commerce::product()
{
    std::vector<std::string> products =
    {
        "LED Submersible Lights",
        "Scented Candles",
        "Beanies",
        "Portable Projector",
        "Bluetooth Speaker",
        "Smart Watch",
        "Temporary Tattoos",
        "Bookends",
        "Vegetable Chopper",
        "Neck Massager",
        "Ice Skates",
        "Back Cushion",
        "Portable Blender",
        "Nail Polish",
        "Wireless Phone Chargers",
        "Phone Lenses",
        "Shapewear",
        "Strapless Backless Bra",
        "Doormats",
        "Car Phone Holder",
        "Sweaters",
        "Wifi Repeater",
        "Laptop Accessories",
        "Posture Corrector",
        "Flexible Garden Hose",
        "One Piece Swimsuit",
        "Waterproof Eyebrow Liner",
        "Cat Massage Comb",
        "Breathable Mesh Running Shoes - Summer Product",
        "Portable Electric Ionic Hairbrush - Summer Product",
        "Beach Towels - Summer Product",
        "Baby Kids Water Play Mat - Summer Product",
        "Plush Blankets - Winter Product",
        "Winter Coats - Winter Product",
        "Socks - Winter Product",
        "Touchscreen Gloves - Winter Product",
        "Waterproof Pants - Winter Product",
        "Bear Claws - Spring Products",
        "Hiking Backpacks - Spring Products",
        "Minimalist Wallets - Spring Products",
        "Waterproof Shoe Cover - Autumn (Fall) Product",
        "Hooded Raincoats - Autumn (Fall) Product",
        "Laser Hair Removal Machines",
        "Portable Car Vacuum",
        "Baby Swings",
        "Matcha Tea",
        "Eyebrow Razor",
        "Seat Cushions",
        "Phone Tripod",
        "Portable Solar Panels",
    };

    return uva::faker::pick_one(products);
}

double uva::faker::commerce::price(double min, double max)
{
    return uva::faker::random_double(min, max);
}