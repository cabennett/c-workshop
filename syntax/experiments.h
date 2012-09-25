#ifndef EXPERIMENTS
#define EXPERIMENTS

enum bool {FALSE, TRUE};
enum month {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
enum random {one = 1, two, three, five = 5, six, seven};

extern int external;

void increment_external (void);
int next (void);

#endif
