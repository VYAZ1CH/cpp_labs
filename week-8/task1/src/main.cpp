#include <iostream>
#include <vector>
#include <chrono>

unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long long fibonacciCached(int n, std::vector<unsigned long long>& cache) {
    if (cache[n] != 0) {
        return cache[n];
    }
    if (n <= 1) {
        return n;
    }
    cache[n] = fibonacciCached(n - 1, cache) + fibonacciCached(n - 2, cache);
    return cache[n];
}

void runTest(int n) {
    // Классический метод
    auto start = std::chrono::high_resolution_clock::now();
    auto fibResult1 = fibonacci(n);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration1 = end - start;

    // Кешированный метод
    start = std::chrono::high_resolution_clock::now();
    std::vector<unsigned long long> cache(n + 1, 0);
    auto fibResult2 = fibonacciCached(n, cache);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end - start;

    std::cout << "Fibonacci(" << n << ") = " << fibResult1 << " (classic) in " << duration1.count() << " seconds.\n";
    std::cout << "Fibonacci(" << n << ") = " << fibResult2 << " (cached) in " << duration2.count() << " seconds.\n";
}

int main() {
    for (int n = 0; n <= 40; n += 5) { // тестируем от 0 до 40
        runTest(n);
    }
    return 0;
}