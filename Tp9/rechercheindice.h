#ifndef RECHERCHEINDICE_H
#define RECHERCHEINDICE_H
template <class T>

int minIndex(const T* tab, int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[idx]) {
            idx = i;
        }
    }
    return idx;
}

template <class T, class U>
int minIndex(const T* tab1, const U* tab2, int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab1[i] < tab1[idx]) {
            idx = i;
        }
        else if (tab1[i] == tab1[idx] && tab2[i] < tab2[idx]) {
            idx = i;
        }
    }
    return idx;
}

#endif
