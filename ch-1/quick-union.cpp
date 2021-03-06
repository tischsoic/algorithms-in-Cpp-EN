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

int main()
{
    const int N = 1000;
    int tab[N];
    for (int i = 0; i < N; ++i)
        tab[i] = i;

    char s = 'n';
    while (s != 'y')
    {
        std::pair<int, int> p;
        std::cin >> p;

        for (; tab[p.first] != p.first; p.first = tab[p.first]);
        for (; tab[p.second] != p.second; p.second = tab[p.second]);

        if (p.first == p.second)
        {
            std::cout << "Already connected!" << std::endl;
        }
        else
        {
            tab[p.first] = p.second;
            std::cout << "Now connected!" << std::endl;
        }

        std::cout << "Do you want to stop? ";
        std::cin >> s;
    }

    return 0;
}