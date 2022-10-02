#include <iostream>

int main() {
    int productCost;
    std::cout << "введите стоимость товара: ";
    std::cin >> productCost;

    int deliveryCost;
    std::cout << "введите стоимость доставки: ";
    std::cin >> deliveryCost;

    int discount;
    std::cout << "введите размер скидки: ";
    std::cin >> discount;

    int price = productCost + deliveryCost - discount;
    std::cout << "---------";
    std::cout << "»итого: " << price << "\n";
}