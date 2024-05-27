    // main.cpp

    #include <iostream>
    #include "graphic_objects.h"

    int main() {
        Rectangle rect(10, 10, 5, 3);

        int choice;
        do {
            std::cout << "\nMenu:\n"
                         "1. Move object\n"
                         "2. Resize object\n"
                         "3. Rotate object\n"
                         "4. Change color\n"
                         "5. Draw object\n"
                         "0. Exit\n"
                         "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1: {
                    double dx, dy;
                    std::cout << "Enter displacement along x and y axes: ";
                    std::cin >> dx >> dy;
                    rect.move(dx, dy);
                    break;
                }
                case 2: {
                    double factor;
                    std::cout << "Enter resizing factor: ";
                    std::cin >> factor;
                    rect.resize(factor);
                    break;
                }
                case 3: {
                    double angle;
                    std::cout << "Enter rotation angle: ";
                    std::cin >> angle;
                    rect.rotate(angle);
                    break;
                }
                case 4: {
                    std::string color;
                    std::cout << "Enter color: ";
                    std::cin >> color;
                    rect.setColor(color);
                    break;
                }
                case 5:
                    rect.draw();
                    break;
                case 0:
                    std::cout << "Exiting...";
                    break;
                default:
                    std::cout << "Invalid choice!";
            }
        } while (choice != 0);

        return 0;
    }
        
