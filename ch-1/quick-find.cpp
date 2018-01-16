#include <iostream>
#include <utility>
#include <vector>

std::istream &
operator>>(std::istream &in, std::pair<int, int> &p)
{
    in >> p.first;
    in.ignore();
    in >> p.second;
}

// std::ostream &
// operator<<(std::ostream &os, std::pair<int, int> &p)
// {
//     os << p.first << '-' << p.second;
// }

int main()
{
    const int N = 1000;
    int tab[N];
    for (int i = 0; i < N; ++i)
    {
        tab[i] = i;
    }

    char s = 'n';
    while (s != 'y')
    {
        std::pair<int, int> p;
        std::cin >> p;

        if (tab[p.first] == tab[p.second])
        {
            std::cout << "Already connected!" << std::endl;
        }
        else
        {
            int second_set_identifier = tab[p.second];
            for (int i = 0; i < N; ++i)
            {
                if (tab[i] == second_set_identifier)
                {
                    tab[i] = tab[p.first];
                }
            }
            std::cout << "Now connected!" << std::endl;
        }

        std::cout << "Do you want to stop? ";
        std::cin >> s;
    }

    return 0;
}