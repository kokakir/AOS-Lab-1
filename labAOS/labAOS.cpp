#include <iostream>
#include <ctime>
#include <intrin.h>

#pragma optimize("agi", off)
using namespace std;

// initialization of constance
const int N = 25;
const int N_plus = 1000000;
const int N_minus = 1000000;
const int N_multiplication = 1000000;
const int N_appropriation = 1000000;
const int N_standart = 1000000;

char name_type[N + 1] = { "idlfcidlfcidlfcidlfcidlfc" };
char name_operator[N + 1] = { "+++++-----*****/////=====" };
double time_standart[N];
double empty_time;
double ad_time[N];
uint64_t tick_per_second;
#define get_freq() tick_per_second;

// initialization of main variables
int a1 = 23, a2 = 26, a3 = 27, a4 = 82, a5 = 29, a6 = 89, a7 = 12, a8 = 90, a9 = 32, a10 = 56;
double b1 = 23.6, b2 = 26.7, b3 = 27.3, b4 = 82.34, b5 = 23.56, b6 = 89.45, b7 = 12.37, b8 = 90.79, b9 = 32.23, b10 = 56.46;
long c1 = 25, c2 = 78, c3 = 23, c4 = 12, c5 = 78, c6 = 45, c7 = 58, c8 = 34, c9 = 79, c10 = 56;
float d1 = 22.6f, d2 = 25.7f, d3 = 28.3f, d4 = 85.34f, d5 = 27.56f, d6 = 85.45f, d7 = 16.37f, d8 = 94.79f, d9 = 38.23f, d10 = 55.46f;
char e1 = 22, e2 = 76, e3 = 27, e4 = 13, e5 = 70, e6 = 47, e7 = 54, e8 = 39, e9 = 73, e10 = 54;

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

// plus
uint64_t plus_for_int(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
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

uint64_t plus_for_double(double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, double x10)
{
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

uint64_t plus_for_long(long x1, long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10)
{
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

uint64_t plus_for_float(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10)
{
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

uint64_t plus_for_char(char x1, char x2, char x3, char x4, char x5, char x6, char x7, char x8, char x9, char x10)
{
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
uint64_t minus_for_int(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
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

uint64_t minus_for_double(double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, double x10)
{
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

uint64_t minus_for_long(long x1, long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10)
{
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

uint64_t minus_for_float(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10)
{
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

uint64_t minus_for_char(char x1, char x2, char x3, char x4, char x5, char x6, char x7, char x8, char x9, char x10)
{
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
uint64_t multiplication_for_int(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
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

uint64_t multiplication_for_double(double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, double x10)
{
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

uint64_t multiplication_for_long(long x1, long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10)
{
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

uint64_t multiplication_for_float(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10)
{
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

uint64_t multiplication_for_char(char x1, char x2, char x3, char x4, char x5, char x6, char x7, char x8, char x9, char x10)
{
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
uint64_t division_for_int(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
    long t_x1 = x1, t_x2 = x2, t_x3 = x3, t_x4 = x4, t_x5 = x5, t_x6 = x6, t_x7 = x7, t_x8 = x8, t_x9 = x9, t_x10 = x10;
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

uint64_t division_for_double(double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, double x10)
{
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

uint64_t division_for_long(long x1, long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10)
{
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

uint64_t division_for_float(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10)
{
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

uint64_t division_for_char(char x1, char x2, char x3, char x4, char x5, char x6, char x7, char x8, char x9, char x10)
{
    long t_x1 = x1, t_x2 = x2, t_x3 = x3, t_x4 = x4, t_x5 = x5, t_x6 = x6, t_x7 = x7, t_x8 = x8, t_x9 = x9, t_x10 = x10;
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
uint64_t appropriation_for_int(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10)
{
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

uint64_t appropriation_for_double(double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, double x10)
{
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

uint64_t appropriation_for_long(long x1, long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10)
{
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

uint64_t appropriation_for_float(float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10)
{
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

uint64_t appropriation_for_char(char x1, char x2, char x3, char x4, char x5, char x6, char x7, char x8, char x9, char x10)
{
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
void search_maximum()
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
            cout << "long   ";
        }
        else if (name_type[index_max] == 'f')
        {
            cout << "float   ";
        }
        else if (name_type[index_max] == 'c')
        {
            cout << "char   ";
        }
        cout << max_time[j] << ": ";
        percent = max_time[j] * 100 / max_time[0];
        double prom = 50 * percent / 100;
        for (int k = 0; k < prom; k++)
        {
            cout << "#";
        }
        for (int l = 0; l < 50 - prom; l++)
        {
            cout << " ";
        }
        cout << "   " << percent << " %";
        cout << endl;
    }

}

void cpu_overclocking()
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
    for (int i = 0; i < N_standart; i++){}
    uint64_t end_ = get_clock() - start_;
    empty_time = double(end_);
    cout << empty_time << endl;
}

void print_info()
{
    cout << "Laboratory work No.1" << endl;
    cout << "Made by a student of group k-21 Kyrychek Nikolay Pavlovich" << endl;
    cout << endl;
}

// calling main functions
void plus_()
{
    // cycle: plus for int
    ad_time[0] = (plus_for_int(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) - empty_time) / N_plus / 10;
    time_standart[0] = tick_per_second / ad_time[0];
    cout << "Plus for int: " << time_standart[0] << " operations in 1 second" << endl;

    // cycle: plus for double
    ad_time[1] = (plus_for_double(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10) - empty_time) / N_standart / 10;
    time_standart[1] = tick_per_second / ad_time[1];
    cout << "Plus for double: " << time_standart[1] << " operations in 1 second" << endl;

    // cycle: plus for long
    ad_time[2] = (plus_for_long(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10) - empty_time) / N_plus / 10;
    time_standart[2] = tick_per_second / ad_time[2];
    cout << "Plus for long: " << time_standart[2] << " operations in 1 second" << endl;

    // cycle: plus for float
    ad_time[3] = (plus_for_float(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10) - empty_time) / N_standart / 10;
    time_standart[3] = tick_per_second / ad_time[3];
    cout << "Plus for float: " << time_standart[3] << " operations in 1 second" << endl;

    // cycle: plus for char
    ad_time[4] = (plus_for_char(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) - empty_time) / N_standart / 10;
    time_standart[4] = tick_per_second / ad_time[4];
    cout << "Plus for char: " << time_standart[4] << " operations in 1 second" << endl;
}

void minus_()
{
    // cycle: minus for int
    ad_time[5] = (minus_for_int(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) - empty_time) / N_minus / 10;
    time_standart[5] = tick_per_second / ad_time[5];
    cout << "Minus for int: " << time_standart[5] << " operations in 1 second" << endl;

    // cycle: minus for double
    ad_time[6] = (minus_for_double(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10) - empty_time) / N_standart / 10;
    time_standart[6] = tick_per_second / ad_time[6];
    cout << "Minus for double: " << time_standart[6] << " operations in 1 second" << endl;

    // cycle: minus for long
    ad_time[7] = (minus_for_long(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10) - empty_time) / N_minus / 10;
    time_standart[7] = tick_per_second / ad_time[7];
    cout << "Minus for long: " << time_standart[7] << " operations in 1 second" << endl;

    // cycle: minus for float
    ad_time[8] = (minus_for_float(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10) - empty_time) / N_standart / 10;
    time_standart[8] = tick_per_second / ad_time[8];
    cout << "Minus for float: " << time_standart[8] << " operations in 1 second" << endl;

    // cycle: minus for char
    ad_time[9] = (minus_for_double(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) - empty_time) / N_standart / 10;
    time_standart[9] = tick_per_second / ad_time[9];
    cout << "Minus for char: " << time_standart[9] << " operations in 1 second" << endl;
}

void multiplication_()
{
    // cycle: multiplication for int
    ad_time[10] = (multiplication_for_int(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) - empty_time) / N_multiplication / 10;
    time_standart[10] = tick_per_second / ad_time[10];
    cout << "Multiplication for int: " << time_standart[10] << " operations in 1 second" << endl;

    // cycle: multiplication for double
    ad_time[11] = (multiplication_for_double(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10) - empty_time) / N_standart / 10;
    time_standart[11] = tick_per_second / ad_time[11];
    cout << "Multiplication for double: " << time_standart[11] << " operations in 1 second" << endl;

    // cycle: multiplication for long
    ad_time[12] = (multiplication_for_long(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10) - empty_time) / N_multiplication / 10;
    time_standart[12] = tick_per_second / ad_time[12];
    cout << "Multiplication for long: " << time_standart[12] << " operations in 1 second" << endl;

    // cycle: multiplication for float
    ad_time[13] = (multiplication_for_double(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10) - empty_time) / N_standart / 10;
    time_standart[13] = tick_per_second / ad_time[13];
    cout << "Multiplication for double: " << time_standart[13] << " operations in 1 second" << endl;

    // cycle: multiplication for char
    ad_time[14] = (multiplication_for_char(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) - empty_time) / N_standart / 10;
    time_standart[14] = tick_per_second / ad_time[14];
    cout << "Multiplication for char: " << time_standart[14] << " operations in 1 second" << endl;
}

void division_()
{
    // cycle: division for int
    ad_time[15] = (division_for_int(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) - empty_time) / N_standart / 10;
    time_standart[15] = tick_per_second / ad_time[15];
    cout << "Division for int: " << time_standart[15] << " operations in 1 second" << endl;

    // cycle: division for double
    ad_time[16] = (division_for_double(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10) - empty_time) / N_standart / 10;
    time_standart[16] = tick_per_second / ad_time[16];
    cout << "Division for double: " << time_standart[16] << " operations in 1 second" << endl;

    // cycle: division for long
    ad_time[17] = (division_for_long(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10) - empty_time) / N_standart / 10;
    time_standart[17] = tick_per_second / ad_time[17];
    cout << "Division for long: " << time_standart[17] << " operations in 1 second" << endl;

    // cycle: division for float
    ad_time[18] = (division_for_float(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10) - empty_time) / N_standart / 10;
    time_standart[18] = tick_per_second / ad_time[18];
    cout << "Division for float: " << time_standart[18] << " operations in 1 second" << endl;

    // cycle: division for char
    ad_time[19] = (division_for_char(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) - empty_time) / N_standart / 10;
    time_standart[19] = tick_per_second / ad_time[19];
    cout << "Division for char: " << time_standart[19] << " operations in 1 second" << endl;
}

void appropriation_()
{
    // cycle: Appropriation for int
    ad_time[20] = (appropriation_for_int(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) - empty_time) / N_appropriation / 10;
    time_standart[20] = tick_per_second / ad_time[20];
    cout << "Appropriation for int: " << time_standart[20] << " operations in 1 second" << endl;

    // cycle: Appropriation for double
    ad_time[21] = (appropriation_for_double(b1, b2, b3, b4, b5, b6, b7, b8, b9, b10) - empty_time) / N_standart / 10;
    time_standart[21] = tick_per_second / ad_time[21];
    cout << "Appropriation for double: " << time_standart[21] << " operations in 1 second" << endl;

    // cycle: Appropriation for long
    ad_time[22] = (appropriation_for_long(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10) - empty_time) / N_appropriation / 10;
    time_standart[22] = tick_per_second / ad_time[22];
    cout << "Appropriation for long: " << time_standart[22] << " operations in 1 second" << endl;

    // cycle: Appropriation for float
    ad_time[23] = (appropriation_for_float(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10) - empty_time) / N_standart / 10;
    time_standart[23] = tick_per_second / ad_time[23];
    cout << "Appropriation for float: " << time_standart[23] << " operations in 1 second" << endl;

    // cycle: Appropriation for char
    ad_time[24] = (appropriation_for_char(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10) - empty_time) / N_standart / 10;
    time_standart[24] = tick_per_second / ad_time[24];
    cout << "Appropriation for char: " << time_standart[24] << " operations in 1 second" << endl;
}

// call main functio
int main()
{
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
    appropriation_();

    // building a diagram
    search_maximum();

    return 0;
}