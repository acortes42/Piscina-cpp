#include "iCrap.hpp"

int put_and_print(int x, Contact *p_list, std::string& str, std::string msg)
{
    std::string temp_str;

    std::cout << msg << "\n";
    getline(std::cin, temp_str);
    str = temp_str;
    return (1);
}

int add_contact(int x, Contact *p_list)
{
    int         num;
    std::string str;

    if (x == 0)
    {
        std::cout << "Starting the creation of a contact list\n";
        usleep(500000);
        std::cout << "Contact list created\n";
    }
    put_and_print(x, p_list, p_list[x].name, "Insert a name");
    put_and_print(x, p_list, p_list[x].l_name, "Insert a lastname");
    put_and_print(x, p_list, p_list[x].nick, "Insert a nickname");
    put_and_print(x, p_list, p_list[x].login, "Insert a login");
    put_and_print(x, p_list, p_list[x].postal_adr, "Insert a postal adress");
    put_and_print(x, p_list, p_list[x].email, "Insert a email");
    put_and_print(x, p_list, p_list[x].phone_num, "Insert a phone number");
    put_and_print(x, p_list, p_list[x].birthday, "Insert the birthday");
    put_and_print(x, p_list, p_list[x].fav_meal, "Insert the favorite meal");
    put_and_print(x, p_list, p_list[x].underwear_color, "Insert the underwear color");
    put_and_print(x, p_list, p_list[x].darkest_secret, "Insert the darkest secret");
    std::cout << "Contact added\n ...\nDo you want to ADD, do a SEARCH, or EXIT from the program?\n";
    return (1);
}

int easyToRead(std::string str)
{
    int         nb;
    std::string tmp;

    tmp = str;
    nb = 10 - str.length();
    if (nb >= 0)
        std::cout << "|" << std::setw(10) << str;
    else
    {
        tmp.resize(9);
        tmp += '.';
        std::cout << "|" << tmp;
    }
    return (1);
}
int contact_list(int x, Contact *p_list)
{
    int         n;
    int         nb;
    std::string tmp;
    std::string user_input; 

    n = 0;
    nb = 10;
    std::cout << "|     Index|First name| Last name|  Nickname|\n";
    std::cout << "---------------------------------------------\n";
    while (n < x && x > 0)
    {
        easyToRead(std::to_string(n + 1));
        easyToRead(p_list[n].name);
        easyToRead(p_list[n].l_name);
        easyToRead(p_list[n].nick);
        std::cout << "|\n";
        n++;
    }
    std::cout << "-----------------------END--------------------\n";
    std::cout << "Select a number to see more info?\n";
    getline(std::cin, user_input);
    nb = 0;
    if (!user_input[nb])
    {
        std::cout << "Invalid number\n";    
        return (1);
    }
    while(user_input[nb])
    {
        if (user_input[nb] >= '0' && user_input[nb] <= '9')
            nb++;
        else
        {
            std::cout << "Invalid number\n";    
            return (1);
        }
    }
    nb = std::stoi (user_input,nullptr, 10);
    if (nb > 0 && nb <= n)
    {
        std::cout << p_list[nb - 1].name << "\n" << p_list[nb - 1].l_name << "\n"<< p_list[nb - 1].nick << "\n"
            << p_list[nb - 1].login << "\n" << p_list[nb - 1].postal_adr << "\n" << p_list[nb - 1].email << "\n"
            << p_list[nb - 1].phone_num << "\n" << p_list[nb - 1].birthday << "\n" << p_list[nb - 1].fav_meal << "\n"
            << p_list[nb - 1].underwear_color << "\n" << p_list[nb - 1].darkest_secret << "\n";
    }
    else
        std::cout << "Invalid number\n";   
    std::cout << "Do you want to ADD, do a SEARCH, or EXIT from the program?\n";  
    return (1);
}

int main()
{
    int             x;
    Contact         p_list[10];
    std::string     user_input; 

    
    x = 0;
    std::cout << "Welcome to AwesomePhone, your movil program is loading\n";
    usleep(1000000);
    std::cout << "...\n";
    usleep(1000000);
    std::cout << "...\n";
    usleep(1000000);
    std::cout << "Movil ready for advanced functions. Do you want to ADD a number, do a SEARCH, or EXIT from the program?\n";
    while (x < 10)
    {
        getline(std::cin, user_input);
        std::transform(user_input.begin(), user_input.end(), user_input.begin(), std::ptr_fun<int, int>(std::toupper));
        if (user_input.compare("ADD") == 0)
        {
            if (x < 9)
            {
                add_contact(x, p_list);
                x++;
            }
            else
                std::cout << "Max number of contacts in agenda\n";
            continue;
        }
        else if (user_input.compare("SEARCH") == 0)
        {
            contact_list(x, p_list);
            continue;
        }
        else if (user_input.compare("EXIT") == 0)
        {
            std::cout << "POP!!! Your data wanna be destroyed. BYE.\n";
            break;
        }
        std::cout << "Write ADD, SEARCH or EXIT for use the system\n";
    }
    return (1);
}

