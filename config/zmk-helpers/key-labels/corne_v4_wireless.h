/*                                      EYELASH CORNE MATRIX / LAYOUT MAPPING

  ╭────────────────────────╮               ╭────────────────────────╮ ╭─────────────────────────┬─────────────────────────╮
  │  0   1   2   3   4   5 │╭────╮  ╭────╮ │  7   8   9  10  11  12 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 13  14  15  16  17  18 ││ 40 │  │  6 │ │ 20  21  22  23  24  25 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 26  27  28  29  30  31 ││ 41 │  │ 19 │ │ 34  35  36  37  38  39 │ │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────────╮ 42  43  44 │╰────╯  ╰────╯ │ 45  46  47 ╭───────────╯ ╰───────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────╯
              ╰────────────╯               ╰────────────╯                         ╰─────────────┴─────────────╯                       
              */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11
#define RT5 12

#define LM0 18  // left-middle row
#define LM1 17
#define LM2 16
#define LM3 15
#define LM4 14
#define LM5 13

#define RM0 20  // right-middle row
#define RM1 21
#define RM2 22
#define RM3 23
#define RM4 24
#define RM5 25

#define LB0 31  // left-bottom row
#define LB1 30
#define LB2 29
#define LB3 28
#define LB4 27
#define LB5 26

#define RB0 34  // right-bottom row
#define RB1 35
#define RB2 36
#define RB3 37
#define RB4 38
#define RB5 39

#define LH0 44  // left thumb keys
#define LH1 43
#define LH2 42

#define RH0 45  // right thumb keys
#define RH1 46
#define RH2 47

#define LH3 40  // left middle keys
#define LH4 41

#define RH0 6  // right middle keys
#define RH1 19