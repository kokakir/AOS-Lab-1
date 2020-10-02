#include <iostream>
#include <ctime>
#include <intrin.h>

#pragma optimize("agi", off)
using namespace std;

// initialization of constance
const int N = 20;
const int N_plus = 1000000;
const int N_minus = 1000000;
const int N_multiplication = 1000000;
const int N_appropriation = 1000000;
const int N_standart = 1000000;

// arrays for time, operation types and variable types
char name_type[N + 1] = { "idlfcidlfcidlfcidlfc" };
char name_operator[N + 1] = { "+++++-----*****/////" };
double time_standart[N];
double empty_time;
double ad_time[N];

// functions for counting the number of ticks in 1 sec
uint64_t tick_per_second;
#define get_freq() tick_per_second;
static inline uint64_t
get_clock(void)
{
    return __rdtsc();
}

clock_t wait_clock_update(void)
{
    clock_t start = clock();
    clock_t tmp;
    do
    {
        tmp = clock();
    } while (tmp == start);
    return tmp;
}

static void
init_clock(void)
{
    clock_t start;
    unsigned __int64 tsc;

    start = wait_clock_update();
    tsc = __rdtsc();
    start = wait_clock_update() - start;
    tsc = __rdtsc() - tsc;
    tick_per_second = tsc / start * CLOCKS_PER_SEC;
    cout << "CPU TSC ticks per second: " << tick_per_second << endl;
}

// initialization of main variables
int a1 = 101, a2 = 107, a3 = 113, a4 = 137, a5 = 149, a6 = 157, a7 = 167, a8 = 181, a9 = 193, a10 = 199;
double b1 = 101.6, b2 = 107.7, b3 = 113.3, b4 = 137.34, b5 = 149.56, b6 = 157.45, b7 = 167.37, b8 = 181.79, b9 = 193.23, b10 = 199.46;
long c1 = 101, c2 = 107, c3 = 113, c4 = 137, c5 = 149, c6 = 157, c7 = 167, c8 = 181, c9 = 193, c10 = 199;
float d1 = 101.6f, d2 = 107.7f, d3 = 113.3f, d4 = 137.34f, d5 = 149.56f, d6 = 157.45f, d7 = 167.37f, d8 = 181.79f, d9 = 193.23f, d10 = 199.46f;
char e1 = 22, e2 = 76, e3 = 27, e4 = 13, e5 = 70, e6 = 47, e7 = 54, e8 = 39, e9 = 73, e10 = 54;

// plus
uint64_t plus_for_int(void)
{
    int x1 = a1, x2 = a2, x3 = a3, x4 = a4, x5 = a5, x6 = a6, x7 = a7, x8 = a8, x9 = a9, x10 = a10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_plus; i++)
    {
        x1 = x2 + x3;
        x2 = x3 + x4;
        x3 = x4 + x5;
        x4 = x5 + x6;
        x5 = x6 + x7;
        x6 = x7 + x8;
        x7 = x8 + x9;
        x8 = x9 + x10;
        x9 = x10 + x1;
        x10 = x1 + x2;
    }
    return get_clock() - start;
}

uint64_t plus_for_double(void)
{
    double x1 = b1, x2 = b2, x3 = b3, x4 = b4, x5 = b5, x6 = b6, x7 = b7, x8 = b8, x9 = b9, x10 = b10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 + x3;
        x2 = x3 + x4;
        x3 = x4 + x5;
        x4 = x5 + x6;
        x5 = x6 + x7;
        x6 = x7 + x8;
        x7 = x8 + x9;
        x8 = x9 + x10;
        x9 = x10 + x1;
        x10 = x1 + x2;
    }
    return get_clock() - start;
}

uint64_t plus_for_long(void)
{
    long x1 = c1, x2 = c2, x3 = c3, x4 = c4, x5 = c5, x6 = c6, x7 = c7, x8 = c8, x9 = c9, x10 = c10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 + x3;
        x2 = x3 + x4;
        x3 = x4 + x5;
        x4 = x5 + x6;
        x5 = x6 + x7;
        x6 = x7 + x8;
        x7 = x8 + x9;
        x8 = x9 + x10;
        x9 = x10 + x1;
        x10 = x1 + x2;
    }
    return get_clock() - start;
}

uint64_t plus_for_float(void)
{
    float x1 = d1, x2 = d2, x3 = d3, x4 = d4, x5 = d5, x6 = d6, x7 = d7, x8 = d8, x9 = d9, x10 = d10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 + x3;
        x2 = x3 + x4;
        x3 = x4 + x5;
        x4 = x5 + x6;
        x5 = x6 + x7;
        x6 = x7 + x8;
        x7 = x8 + x9;
        x8 = x9 + x10;
        x9 = x10 + x1;
        x10 = x1 + x2;
    }
    return get_clock() - start;
}

uint64_t plus_for_char(void)
{
    char x1 = e1, x2 = e2, x3 = e3, x4 = e4, x5 = e5, x6 = e6, x7 = e7, x8 = e8, x9 = e9, x10 = e10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 + x3;
        x2 = x3 + x4;
        x3 = x4 + x5;
        x4 = x5 + x6;
        x5 = x6 + x7;
        x6 = x7 + x8;
        x7 = x8 + x9;
        x8 = x9 + x10;
        x9 = x10 + x1;
        x10 = x1 + x2;
    }
    return get_clock() - start;
}

// minus
uint64_t minus_for_int(void)
{
    int x1 = a1, x2 = a2, x3 = a3, x4 = a4, x5 = a5, x6 = a6, x7 = a7, x8 = a8, x9 = a9, x10 = a10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_minus; i++)
    {
        x1 = x2 - x3;
        x2 = x3 - x4;
        x3 = x4 - x5;
        x4 = x5 - x6;
        x5 = x6 - x7;
        x6 = x7 - x8;
        x7 = x8 - x9;
        x8 = x9 - x10;
        x9 = x10 - x1;
        x10 = x1 - x2;
    }
    return get_clock() - start;
}

uint64_t minus_for_double(void)
{
    double x1 = b1, x2 = b2, x3 = b3, x4 = b4, x5 = b5, x6 = b6, x7 = b7, x8 = b8, x9 = b9, x10 = b10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 - x3;
        x2 = x3 - x4;
        x3 = x4 - x5;
        x4 = x5 - x6;
        x5 = x6 - x7;
        x6 = x7 - x8;
        x7 = x8 - x9;
        x8 = x9 - x10;
        x9 = x10 - x1;
        x10 = x1 - x2;
    }
    return get_clock() - start;
}

uint64_t minus_for_long(void)
{
    long x1 = c1, x2 = c2, x3 = c3, x4 = c4, x5 = c5, x6 = c6, x7 = c7, x8 = c8, x9 = c9, x10 = c10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_minus; i++)
    {
        x1 = x2 - x3;
        x2 = x3 - x4;
        x3 = x4 - x5;
        x4 = x5 - x6;
        x5 = x6 - x7;
        x6 = x7 - x8;
        x7 = x8 - x9;
        x8 = x9 - x10;
        x9 = x10 - x1;
        x10 = x1 - x2;
    }
    return get_clock() - start;
}

uint64_t minus_for_float(void)
{
    float x1 = d1, x2 = d2, x3 = d3, x4 = d4, x5 = d5, x6 = d6, x7 = d7, x8 = d8, x9 = d9, x10 = d10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 - x3;
        x2 = x3 - x4;
        x3 = x4 - x5;
        x4 = x5 - x6;
        x5 = x6 - x7;
        x6 = x7 - x8;
        x7 = x8 - x9;
        x8 = x9 - x10;
        x9 = x10 - x1;
        x10 = x1 - x2;
    }
    return get_clock() - start;
}

uint64_t minus_for_char(void)
{
    char x1 = e1, x2 = e2, x3 = e3, x4 = e4, x5 = e5, x6 = e6, x7 = e7, x8 = e8, x9 = e9, x10 = e10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 - x3;
        x2 = x3 - x4;
        x3 = x4 - x5;
        x4 = x5 - x6;
        x5 = x6 - x7;
        x6 = x7 - x8;
        x7 = x8 - x9;
        x8 = x9 - x10;
        x9 = x10 - x1;
        x10 = x1 - x2;
    }
    return get_clock() - start;
}

// multiplication
uint64_t multiplication_for_int(void)
{
    int x1 = a1, x2 = a2, x3 = a3, x4 = a4, x5 = a5, x6 = a6, x7 = a7, x8 = a8, x9 = a9, x10 = a10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_multiplication; i++)
    {
        x1 = x2 * x3;
        x2 = x3 * x4;
        x3 = x4 * x5;
        x4 = x5 * x6;
        x5 = x6 * x7;
        x6 = x7 * x8;
        x7 = x8 * x9;
        x8 = x9 * x10;
        x9 = x10 * x1;
        x10 = x1 * x2;
    }
    return get_clock() - start;
}

uint64_t multiplication_for_double(void)
{
    double x1 = b1, x2 = b2, x3 = b3, x4 = b4, x5 = b5, x6 = b6, x7 = b7, x8 = b8, x9 = b9, x10 = b10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 * x3;
        x2 = x3 * x4;
        x3 = x4 * x5;
        x4 = x5 * x6;
        x5 = x6 * x7;
        x6 = x7 * x8;
        x7 = x8 * x9;
        x8 = x9 * x10;
        x9 = x10 * x1;
        x10 = x1 * x2;
    }
    return get_clock() - start;
}

uint64_t multiplication_for_long(void)
{
    long x1 = c1, x2 = c2, x3 = c3, x4 = c4, x5 = c5, x6 = c6, x7 = c7, x8 = c8, x9 = c9, x10 = c10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_multiplication; i++)
    {
        x1 = x2 * x3;
        x2 = x3 * x4;
        x3 = x4 * x5;
        x4 = x5 * x6;
        x5 = x6 * x7;
        x6 = x7 * x8;
        x7 = x8 * x9;
        x8 = x9 * x10;
        x9 = x10 * x1;
        x10 = x1 * x2;
    }
    return get_clock() - start;
}

uint64_t multiplication_for_float(void)
{
    float x1 = d1, x2 = d2, x3 = d3, x4 = d4, x5 = d5, x6 = d6, x7 = d7, x8 = d8, x9 = d9, x10 = d10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 * x3;
        x2 = x3 * x4;
        x3 = x4 * x5;
        x4 = x5 * x6;
        x5 = x6 * x7;
        x6 = x7 * x8;
        x7 = x8 * x9;
        x8 = x9 * x10;
        x9 = x10 * x1;
        x10 = x1 * x2;
    }
    return get_clock() - start;
}

uint64_t multiplication_for_char(void)
{
    char x1 = e1, x2 = e2, x3 = e3, x4 = e4, x5 = e5, x6 = e6, x7 = e7, x8 = e8, x9 = e9, x10 = e10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 * x3;
        x2 = x3 * x4;
        x3 = x4 * x5;
        x4 = x5 * x6;
        x5 = x6 * x7;
        x6 = x7 * x8;
        x7 = x8 * x9;
        x8 = x9 * x10;
        x9 = x10 * x1;
        x10 = x1 * x2;
    }
    return get_clock() - start;
}

// division
uint64_t division_for_int(void)
{
    int x1 = a1, x2 = a2, x3 = a3, x4 = a4, x5 = a5, x6 = a6, x7 = a7, x8 = a8, x9 = a9, x10 = a10;
    int t_x1 = x1, t_x2 = x2, t_x3 = x3, t_x4 = x4, t_x5 = x5, t_x6 = x6, t_x7 = x7, t_x8 = x8, t_x9 = x9, t_x10 = x10;
    uint64_t start = get_clock();

    for (int i = 0; i < N_standart; i++)
    {
        t_x1 = x2 / x3;
        t_x2 = x3 / x4;
        t_x3 = x4 / x5;
        t_x4 = x5 / x6;
        t_x5 = x6 / x7;
        t_x6 = x7 / x8;
        t_x7 = x8 / x9;
        t_x8 = x9 / x10;
        t_x9 = x10 / x1;
        t_x10 = x1 / x2;
    }
    return get_clock() - start;
}

uint64_t division_for_double(void)
{
    double x1 = b1, x2 = b2, x3 = b3, x4 = b4, x5 = b5, x6 = b6, x7 = b7, x8 = b8, x9 = b9, x10 = b10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 / x3;
        x2 = x3 / x4;
        x3 = x4 / x5;
        x4 = x5 / x6;
        x5 = x6 / x7;
        x6 = x7 / x8;
        x7 = x8 / x9;
        x8 = x9 / x10;
        x9 = x10 / x1;
        x10 = x1 / x2;
    }
    return get_clock() - start;
}

uint64_t division_for_long(void)
{
    long x1 = c1, x2 = c2, x3 = c3, x4 = c4, x5 = c5, x6 = c6, x7 = c7, x8 = c8, x9 = c9, x10 = c10;
    long t_x1 = x1, t_x2 = x2, t_x3 = x3, t_x4 = x4, t_x5 = x5, t_x6 = x6, t_x7 = x7, t_x8 = x8, t_x9 = x9, t_x10 = x10;
    uint64_t start = get_clock();

    for (int i = 0; i < N_standart; i++) {
        t_x1 = x2 / x3;
        t_x2 = x3 / x4;
        t_x3 = x4 / x5;
        t_x4 = x5 / x6;
        t_x5 = x6 / x7;
        t_x6 = x7 / x8;
        t_x7 = x8 / x9;
        t_x8 = x9 / x10;
        t_x9 = x10 / x1;
        t_x10 = x1 / x2;
    }
    return get_clock() - start;
}

uint64_t division_for_float(void)
{
    float x1 = d1, x2 = d2, x3 = d3, x4 = d4, x5 = d5, x6 = d6, x7 = d7, x8 = d8, x9 = d9, x10 = d10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = x2 / x3;
        x2 = x3 / x4;
        x3 = x4 / x5;
        x4 = x5 / x6;
        x5 = x6 / x7;
        x6 = x7 / x8;
        x7 = x8 / x9;
        x8 = x9 / x10;
        x9 = x10 / x1;
        x10 = x1 / x2;
    }
    return get_clock() - start;
}

uint64_t division_for_char(void)
{
    char x1 = e1, x2 = e2, x3 = e3, x4 = e4, x5 = e5, x6 = e6, x7 = e7, x8 = e8, x9 = e9, x10 = e10;
    char t_x1 = x1, t_x2 = x2, t_x3 = x3, t_x4 = x4, t_x5 = x5, t_x6 = x6, t_x7 = x7, t_x8 = x8, t_x9 = x9, t_x10 = x10;
    uint64_t start = get_clock();

    for (int i = 0; i < N_standart; i++)
    {
        t_x1 = x2 / x3;
        t_x2 = x3 / x4;
        t_x3 = x4 / x5;
        t_x4 = x5 / x6;
        t_x5 = x6 / x7;
        t_x6 = x7 / x8;
        t_x7 = x8 / x9;
        t_x8 = x9 / x10;
        t_x9 = x10 / x1;
        t_x10 = x1 / x2;
    }
    return get_clock() - start;
}

// appropriation
uint64_t appropriation_for_int(void)
{
    int x1 = a1, x2 = a2, x3 = a3, x4 = a4, x5 = a5, x6 = a6, x7 = a7, x8 = a8, x9 = a9, x10 = a10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_appropriation; i++)
    {
        x1 = i;
        x2 = i;
        x3 = i;
        x4 = i;
        x5 = i;
        x6 = i;
        x7 = i;
        x8 = i;
        x9 = i;
        x10 = i;
    }
    return get_clock() - start;
}

uint64_t appropriation_for_double(void)
{
    double x1 = b1, x2 = b2, x3 = b3, x4 = b4, x5 = b5, x6 = b6, x7 = b7, x8 = b8, x9 = b9, x10 = b10;
    double c = 0.3;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = i + c;
        x2 = i + c;
        x3 = i + c;
        x4 = i + c;
        x5 = i + c;
        x6 = i + c;
        x7 = i + c;
        x8 = i + c;
        x9 = i + c;
        x10 = i + c;
    }
    return get_clock() - start;
}

uint64_t appropriation_for_long(void)
{
    long x1 = c1, x2 = c2, x3 = c3, x4 = c4, x5 = c5, x6 = c6, x7 = c7, x8 = c8, x9 = c9, x10 = c10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_appropriation; i++)
    {
        x1 = i;
        x2 = i;
        x3 = i;
        x4 = i;
        x5 = i;
        x6 = i;
        x7 = i;
        x8 = i;
        x9 = i;
        x10 = i;
    }
    return get_clock() - start;
}

uint64_t appropriation_for_float(void)
{
    float x1 = d1, x2 = d2, x3 = d3, x4 = d4, x5 = d5, x6 = d6, x7 = d7, x8 = d8, x9 = d9, x10 = d10;
    float c = 0.3f;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = i + c;
        x2 = i + c;
        x3 = i + c;
        x4 = i + c;
        x5 = i + c;
        x6 = i + c;
        x7 = i + c;
        x8 = i + c;
        x9 = i + c;
        x10 = i + c;
    }
    return get_clock() - start;
}

uint64_t appropriation_for_char(void)
{
    char x1 = e1, x2 = e2, x3 = e3, x4 = e4, x5 = e5, x6 = e6, x7 = e7, x8 = e8, x9 = e9, x10 = e10;
    uint64_t start = get_clock();
    for (int i = 0; i < N_standart; i++)
    {
        x1 = i;
        x2 = i;
        x3 = i;
        x4 = i;
        x5 = i;
        x6 = i;
        x7 = i;
        x8 = i;
        x9 = i;
        x10 = i;
    }
    return get_clock() - start;
}

// dop functions
void print_info(void)
{
    cout << "Laboratory work No.1" << endl;
    cout << "Made by a student of group k-21 Kyrychek Nikolay Pavlovich" << endl;
    cout << endl;
}

void cpu_overclocking(void)
{
    int cpu_int_check1 = 34, cpu_int_check2 = 87;
    double cpu_double_check1 = 34.45, cpu_double_check2 = 87.5;
    long cpu_long_check1 = 25, cpu_long_check2 = 56;
    float cpu_float_check1 = 46.78f, cpu_float_check2 = 83.9f;
    char cpu_char_check1 = 89, cpu_char_check2 = 47;

    int res_int = 0;
    double res_double = 0;
    long res_long = 0;
    float res_float = 0;
    char res_char = 0;

    res_int = cpu_int_check1 + cpu_int_check2;
    res_int = cpu_int_check1 - cpu_int_check2;
    res_int = cpu_int_check1 * cpu_int_check2;
    res_int = cpu_int_check1 / cpu_int_check2;

    res_double = cpu_double_check1 + cpu_double_check2;
    res_double = cpu_double_check1 - cpu_double_check2;
    res_double = cpu_double_check1 * cpu_double_check2;
    res_double = cpu_double_check1 / cpu_double_check2;

    res_long = cpu_long_check1 + cpu_long_check2;
    res_long = cpu_long_check1 - cpu_long_check2;
    res_long = cpu_long_check1 * cpu_long_check2;
    res_long = cpu_long_check1 / cpu_long_check2;

    res_float = cpu_float_check1 + cpu_float_check2;
    res_float = cpu_float_check1 - cpu_float_check2;
    res_float = cpu_float_check1 * cpu_float_check2;
    res_float = cpu_float_check1 / cpu_float_check2;

    res_char = cpu_char_check1 + cpu_char_check2;
    res_char = cpu_char_check1 - cpu_char_check2;
    res_char = cpu_char_check1 * cpu_char_check2;
    res_char = cpu_char_check1 / cpu_char_check2;

    uint64_t start_ = get_clock();
    for (int i = 0; i < N_standart; i++) {}
    uint64_t end_ = get_clock() - start_;
    empty_time = double(end_);
    cout << "Empty cycle time: " << empty_time << endl;
}

void search_maximum(void)
{
    int index_max = 0;
    double max_num = time_standart[0];
    double max_time[N];
    double percent;
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (time_standart[i] >= max_num)
            {
                max_num = time_standart[i];
                index_max = i;
            }
        }
        max_time[j] = max_num;
        time_standart[index_max] = 0;
        max_num = 0;
        cout << name_operator[index_max] << "   ";
        if (name_type[index_max] == 'i')
        {
            cout << "int      ";
        }
        else if(name_type[index_max] == 'd')
        {
            cout << "double   ";
        }
        else if (name_type[index_max] == 'l')
        {
            cout << "long     ";
        }
        else if (name_type[index_max] == 'f')
        {
            cout << "float    ";
        }
        else if (name_type[index_max] == 'c')
        {
            cout << "char     ";
        }
        cout << max_time[j] << ": ";
        percent = max_time[j] * 100 / max_time[0];
        double prom = 70 * percent / 100;
        for (int k = 0; k < prom; k++)
        {
            cout << "#";
        }
        for (int l = 0; l < 70 - prom; l++)
        {
            cout << " ";
        }
        cout << "   " << percent << " %";
        cout << endl;
    }
}

// calling main functions
void plus_(void)
{
    // cycle: plus for int
    ad_time[0] = (plus_for_int() - empty_time) / N_plus / 10;
    time_standart[0] = tick_per_second / ad_time[0];
    cout << "Plus for int: " << time_standart[0] << " operations in 1 second" << endl;

    // cycle: plus for double
    ad_time[1] = (plus_for_double() - empty_time) / N_standart / 10;
    time_standart[1] = tick_per_second / ad_time[1];
    cout << "Plus for double: " << time_standart[1] << " operations in 1 second" << endl;

    // cycle: plus for long
    ad_time[2] = (plus_for_long() - empty_time) / N_plus / 10;
    time_standart[2] = tick_per_second / ad_time[2];
    cout << "Plus for long: " << time_standart[2] << " operations in 1 second" << endl;

    // cycle: plus for float
    ad_time[3] = (plus_for_float() - empty_time) / N_standart / 10;
    time_standart[3] = tick_per_second / ad_time[3];
    cout << "Plus for float: " << time_standart[3] << " operations in 1 second" << endl;

    // cycle: plus for char
    ad_time[4] = (plus_for_char() - empty_time) / N_standart / 10;
    time_standart[4] = tick_per_second / ad_time[4];
    cout << "Plus for char: " << time_standart[4] << " operations in 1 second" << endl;
}

void minus_(void)
{
    // cycle: minus for int
    ad_time[5] = (minus_for_int() - empty_time) / N_minus / 10;
    time_standart[5] = tick_per_second / ad_time[5];
    cout << "Minus for int: " << time_standart[5] << " operations in 1 second" << endl;

    // cycle: minus for double
    ad_time[6] = (minus_for_double() - empty_time) / N_standart / 10;
    time_standart[6] = tick_per_second / ad_time[6];
    cout << "Minus for double: " << time_standart[6] << " operations in 1 second" << endl;

    // cycle: minus for long
    ad_time[7] = (minus_for_long() - empty_time) / N_minus / 10;
    time_standart[7] = tick_per_second / ad_time[7];
    cout << "Minus for long: " << time_standart[7] << " operations in 1 second" << endl;

    // cycle: minus for float
    ad_time[8] = (minus_for_float() - empty_time) / N_standart / 10;
    time_standart[8] = tick_per_second / ad_time[8];
    cout << "Minus for float: " << time_standart[8] << " operations in 1 second" << endl;

    // cycle: minus for char
    ad_time[9] = (minus_for_double() - empty_time) / N_standart / 10;
    time_standart[9] = tick_per_second / ad_time[9];
    cout << "Minus for char: " << time_standart[9] << " operations in 1 second" << endl;
}

void multiplication_(void)
{
    // cycle: multiplication for int
    ad_time[10] = (multiplication_for_int() - empty_time) / N_multiplication / 10;
    time_standart[10] = tick_per_second / ad_time[10];
    cout << "Multiplication for int: " << time_standart[10] << " operations in 1 second" << endl;

    // cycle: multiplication for double
    ad_time[11] = (multiplication_for_double() - empty_time) / N_standart / 10;
    time_standart[11] = tick_per_second / ad_time[11];
    cout << "Multiplication for double: " << time_standart[11] << " operations in 1 second" << endl;

    // cycle: multiplication for long
    ad_time[12] = (multiplication_for_long() - empty_time) / N_multiplication / 10;
    time_standart[12] = tick_per_second / ad_time[12];
    cout << "Multiplication for long: " << time_standart[12] << " operations in 1 second" << endl;

    // cycle: multiplication for float
    ad_time[13] = (multiplication_for_double() - empty_time) / N_standart / 10;
    time_standart[13] = tick_per_second / ad_time[13];
    cout << "Multiplication for double: " << time_standart[13] << " operations in 1 second" << endl;

    // cycle: multiplication for char
    ad_time[14] = (multiplication_for_char() - empty_time) / N_standart / 10;
    time_standart[14] = tick_per_second / ad_time[14];
    cout << "Multiplication for char: " << time_standart[14] << " operations in 1 second" << endl;
}

void division_(void)
{
    // cycle: division for int
    ad_time[15] = (division_for_int() - empty_time) / N_standart / 10;
    time_standart[15] = tick_per_second / ad_time[15];
    cout << "Division for int: " << time_standart[15] << " operations in 1 second" << endl;

    // cycle: division for double
    ad_time[16] = (division_for_double() - empty_time) / N_standart / 10;
    time_standart[16] = tick_per_second / ad_time[16];
    cout << "Division for double: " << time_standart[16] << " operations in 1 second" << endl;

    // cycle: division for long
    ad_time[17] = (division_for_long() - empty_time) / N_standart / 10;
    time_standart[17] = tick_per_second / ad_time[17];
    cout << "Division for long: " << time_standart[17] << " operations in 1 second" << endl;

    // cycle: division for float
    ad_time[18] = (division_for_float() - empty_time) / N_standart / 10;
    time_standart[18] = tick_per_second / ad_time[18];
    cout << "Division for float: " << time_standart[18] << " operations in 1 second" << endl;

    // cycle: division for char
    ad_time[19] = (division_for_char() - empty_time) / N_standart / 10;
    time_standart[19] = tick_per_second / ad_time[19];
    cout << "Division for char: " << time_standart[19] << " operations in 1 second" << endl;
}

/*
void appropriation_(void)
{
    // cycle: Appropriation for int
    ad_time[20] = (appropriation_for_int() - empty_time) / N_appropriation / 10;
    time_standart[20] = tick_per_second / ad_time[20];
    cout << "Appropriation for int: " << time_standart[20] << " operations in 1 second" << endl;

    // cycle: Appropriation for double
    ad_time[21] = (appropriation_for_double() - empty_time) / N_standart / 10;
    time_standart[21] = tick_per_second / ad_time[21];
    cout << "Appropriation for double: " << time_standart[21] << " operations in 1 second" << endl;

    // cycle: Appropriation for long
    ad_time[22] = (appropriation_for_long() - empty_time) / N_appropriation / 10;
    time_standart[22] = tick_per_second / ad_time[22];
    cout << "Appropriation for long: " << time_standart[22] << " operations in 1 second" << endl;

    // cycle: Appropriation for float
    ad_time[23] = (appropriation_for_float() - empty_time) / N_standart / 10;
    time_standart[23] = tick_per_second / ad_time[23];
    cout << "Appropriation for float: " << time_standart[23] << " operations in 1 second" << endl;

    // cycle: Appropriation for char
    ad_time[24] = (appropriation_for_char() - empty_time) / N_standart / 10;
    time_standart[24] = tick_per_second / ad_time[24];
    cout << "Appropriation for char: " << time_standart[24] << " operations in 1 second" << endl;
} */

int main(void)
{
    // counting the number of ticks in 1 sec
    init_clock();

    // print information about project
    print_info();
    
    // CPU overclocking
    cpu_overclocking();
    
    // cycle plus
    plus_();

    // cycle minus
    minus_();

    // cycle multiplication
    multiplication_();

    // cycle division
    division_();

    // cycle: Appropriation
    //appropriation_();

    // building a diagram
    search_maximum();

    return 0;
}