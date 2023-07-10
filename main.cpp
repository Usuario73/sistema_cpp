#include <iostream>
#include <string>
#include <vector>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

int main() {
    std::vector<Contact> contacts;

    while (true) {
        std::cout << "1. Adicionar contato" << std::endl;
        std::cout << "2. Mostrar contatos" << std::endl;
        std::cout << "3. Sair" << std::endl;
        std::cout << "Escolha uma opção: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Contact contact;
            std::cout << "Nome: ";
            std::cin >> contact.name;
            std::cout << "Telefone: ";
            std::cin >> contact.phoneNumber;

            contacts.push_back(contact);
            std::cout << "Contato adicionado com sucesso!" << std::endl;
        } else if (choice == 2) {
            if (contacts.empty()) {
                std::cout << "Nenhum contato encontrado." << std::endl;
            } else {
                std::cout << "Lista de contatos:" << std::endl;
                for (const auto& contact : contacts) {
                    std::cout << "Nome: " << contact.name << ", Telefone: " << contact.phoneNumber << std::endl;
                }
            }
        } else if (choice == 3) {
            std::cout << "Saindo do programa..." << std::endl;
            break;
        } else {
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    }

    return 0;
}
