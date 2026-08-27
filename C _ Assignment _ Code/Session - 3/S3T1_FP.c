#include <stdio.h>

#define get_type(X) _Generic((X), \
    float: "float", \
    double: "double", \
    char*: "string ", \
    default: "unknown type")

int main()
{
    char productName[] = "Samsung Galaxy S24";
    float price = 59999.99;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Data Type: %s\n\n", get_type(productName));

    printf("Price: %.2f\n", price);
    printf("Data Type: %s\n\n", get_type(price));

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: %s\n", get_type(rating));

    return 0;
}
