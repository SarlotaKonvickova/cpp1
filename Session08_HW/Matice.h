#ifndef CPP1_MATICE_H
#define CPP1_MATICE_H

#include <iostream>

template<typename T>

class Matice {
public:
    Matice(int pocetRadku, int pocetSloupcu);

    Matice(const Matice<T> &m);

    ~Matice();

    void set(int row, int column, T value);

    void setZ(T *arr);

    T &get(int row, int column);

    const T &get(int row, int column) const;

    template<typename R>
    Matice<R> cast();

    Matice<T> transponuj() const;

    Matice<T> vynasob(const Matice &m) const;

    Matice<T> vynasob(T scalar);

    Matice<T> secti(const Matice &m) const;

    Matice<T> secti(T scalar);

    bool jeStejna(const Matice &m);

    void print() const;

private:
    T **_values;
    int _pocetRadku;
    int _pocetSloupcu;
};


template<typename T>
inline Matice<T>::Matice(int pocetRadku, int pocetSloupcu) {
    _pocetRadku = pocetRadku;
    _pocetSloupcu = pocetSloupcu;
    _values = new T *[_pocetRadku];

    for (size_t i = 0; i < _pocetRadku; i++) {
        _values[i] = new T[_pocetSloupcu]{0};
    }
}

template<typename T>
inline Matice<T>::Matice(const Matice<T> &m) {
    _pocetRadku = m._pocetRadku;
    _pocetSloupcu = m._pocetSloupcu;
    _values = new T *[_pocetRadku];

    for (size_t i = 0; i < _pocetRadku; i++) {
        _values[i] = new T[m._pocetSloupcu];
        for (size_t j = 0; j < _pocetSloupcu; j++) {
            _values[i][j] = m._values[i][j];
        }
    }
}

template<typename T>
inline Matice<T>::~Matice() {
    for (size_t i = 0; i < _pocetRadku; i++) {
        delete[] _values[i];
    }
    delete[] _values;
}

template<typename T>
inline void Matice<T>::set(int row, int column, T value) {
    if (row > _pocetRadku || column > _pocetSloupcu || row < 0 || column < 0) {
        throw std::invalid_argument("Zadany index je neplatny.");
    }
    _values[row][column] = value;
}

template<typename T>
inline void Matice<T>::setZ(T *arr) {
    for (size_t i = 0; i < _pocetRadku; i++) {
        for (size_t j = 0; j < _pocetSloupcu; j++) {
            _values[i][j] = arr[(i * this->_pocetSloupcu) + j];
        }
    }
}

template<typename T>
inline const T &Matice<T>::get(int row, int column) const {
    if (row > _pocetRadku || column > _pocetSloupcu || row < 0 || column < 0) {
        throw std::invalid_argument("Zadany index je neplatny.");
    }
    return _values[row][column];
}

template<typename T>
inline T &Matice<T>::get(int row, int column) {
    if (row > _pocetRadku || column > _pocetSloupcu || row < 0 || column < 0) {
        throw std::invalid_argument("Zadany index je neplatny.");
    }
    return _values[row][column];
}


template<typename T>
inline Matice<T> Matice<T>::transponuj() const {
    Matice<T> transponovana{_pocetSloupcu, _pocetRadku};
    for (size_t i = 0; i < _pocetRadku; i++) {
        for (size_t j = 0; j < _pocetSloupcu; j++) {
            transponovana._values[i][j] = _values[j][i];
        }
    }
    return transponovana;
}

template<typename T>
inline Matice<T> Matice<T>::vynasob(const Matice &m) const {
    if (_pocetSloupcu == m._pocetRadku) {
        Matice<T> novaMatice{_pocetRadku, _pocetSloupcu};
        T sum = 0;
        for (size_t i = 0; i < _pocetRadku; i++) {
            for (size_t j = 0; j < m._pocetSloupcu; j++) {
                for (size_t z = 0; z < m._pocetRadku; z++) {
                    sum = sum + _values[i][z] * m._values[z][j];
                }
                novaMatice._values[i][j] = sum;
                sum = 0;
            }
        }
        return novaMatice;
    } else {
        throw std::exception("Matice nelze vynasobit.");
    }
}

template<typename T>
inline Matice<T> Matice<T>::vynasob(T scalar) {
    if constexpr (std::is_arithmetic_v < scalar >) {
        Matice<T> novaMatice{_pocetRadku, _pocetSloupcu};
        for (size_t i = 0; i < _pocetRadku; i++) {
            for (size_t j = 0; j < _pocetSloupcu; j++) {
                novaMatice._values[i][j] = scalar * novaMatice._values[i][j];
            }
        }
        return novaMatice;
    } else {
        std::invalid_argument("Zadejte ciselnou hodnotu");
    }
}

template<typename T>
inline Matice<T> Matice<T>::secti(const Matice &m) const {
    if (_pocetRadku == m._pocetRadku && _pocetSloupcu == m._pocetSloupcu) {
        Matice<T> novaMatice{_pocetRadku, _pocetSloupcu};
        for (size_t i = 0; i < _pocetRadku; i++) {
            for (size_t j = 0; j < _pocetSloupcu; j++) {
                novaMatice._values[i][j] = _values[i][j] + m._values[i][j];
            }
        }
        return novaMatice;
    } else {
        throw std::invalid_argument("Nelze secist, matice musi mit stejne dimenze.");
    }
}

template<typename T>
inline Matice<T> Matice<T>::secti(T scalar) {
    if constexpr (std::is_arithmetic_v < scalar >) {
        Matice<T> novaMatice{_pocetRadku, _pocetSloupcu};
        for (size_t i = 0; i < _pocetRadku; i++) {
            for (size_t j = 0; j < _pocetSloupcu; j++) {
                novaMatice._values[i][j] = novaMatice._values[i][j] + scalar;
            }
        }
        return novaMatice;
    } else {
        throw std::invalid_argument("Zadejte ciselnou hodnotu.");
    }
}

template<typename T>
inline bool Matice<T>::jeStejna(const Matice &m) {
    if (m._pocetRadku == _pocetRadku && m._pocetSloupcu == _pocetSloupcu) {
        for (size_t i = 0; i < _pocetRadku; i++) {
            for (size_t j = 0; j < _pocetSloupcu; j++) {
                if (_values[i][j] != m._values[i][j]) {
                    return false;
                }
            }
        }
        return true;
    } else {
        throw std::exception("Matice nejsou stejne.");
    }
}

template<typename T>
inline void Matice<T>::print() const {
    for (size_t i = 0; i < _pocetRadku; i++) {
        for (size_t j = 0; j < _pocetSloupcu; j++) {
            std::cout << _values[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

template<typename T>
template<typename R>
inline Matice<R> Matice<T>::cast() {
    Matice<R> novaMatice{_pocetRadku, _pocetSloupcu};
    for (size_t i = 0; i < _pocetRadku; i++) {
        for (size_t j = 0; j < _pocetSloupcu; j++) {
            novaMatice.set(i, j, static_cast<R>(get(i, j)));
        }
    }
    return novaMatice;
}

#endif //CPP1_MATICE_H
