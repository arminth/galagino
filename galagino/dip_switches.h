#ifndef _DIP_SWITCHES_H_
#define _DIP_SWITCHES_H_

#define GALAGA_DIPA_1C1CR     0b00000000
#define GALAGA_DIPA_1C2CR     0b00100000
#define GALAGA_DIPA_1C3CR     0b01000000
#define GALAGA_DIPA_2C1CR     0b10000000
#define GALAGA_DIPA_2C3CR     0b01100000
#define GALAGA_DIPA_3C1CR     0b10100000
#define GALAGA_DIPA_4C1CR     0b11000000
#define GALAGA_DIPA_FREE      0b11100000

// settings for lives != 5
#define GALAGA_DIPA_B20K60K   0b00000100  // bonus at 20k and 60k
#define GALAGA_DIPA_B20K60KE  0b00011000  // bonus at 20k, 60k and every 60k
#define GALAGA_DIPA_B20K70KE  0b00010100  // bonus at 20k, 70k and every 70k
#define GALAGA_DIPA_B20K80KE  0b00010000  // bonus at 20k, 80k and every 80k
#define GALAGA_DIPA_B30K80K   0b00000000  // bonus at 30k and 80k
#define GALAGA_DIPA_B30K100KE 0b00001100  // bonus at 30k, 100K and every 100k
#define GALAGA_DIPA_B30K120KE 0b00001000  // bonus at 30k, 120K and every 120k
#define GALAGA_DIPA_BNONE     0b00011100  // no bonus at all

// settings for lives == 5
#define GALAGA_DIPA_B30K100K  0b00001100  // bonus at 30k and 100k
#define GALAGA_DIPA_B30K120K  0b00001000  // bonus at 30k and 120k
#define GALAGA_DIPA_B30K150K  0b00000100  // bonus at 30k and 150k
#define GALAGA_DIPA_B30K      0b00000000  // bonus at 30k
#define GALAGA_DIPA_B30K100Ke 0b00011000  // bonus at 30k, 100k and every 100k
#define GALAGA_DIPA_B30K120Ke 0b00010100  // bonus at 30k, 120k and every 120k
#define GALAGA_DIPA_B30K150Ke 0b00010000  // bonus at 30k, 150k and every 150k

#define GALAGA_DIPA_LIVE2     0b00000011
#define GALAGA_DIPA_LIVE3     0b00000010
#define GALAGA_DIPA_LIVE4     0b00000001
#define GALAGA_DIPA_LIVE5     0b00000000

#define GALAGA_DIPB_RANK_A    0b00000000
#define GALAGA_DIPB_RANK_B    0b11000000
#define GALAGA_DIPB_RANK_C    0b01000000
#define GALAGA_DIPB_RANK_D    0b10000000

#define GALAGA_DIPB_RACKTEST  0b00100000

#define GALAGA_DIPB_DEMO_SND  0b00010000

#define GALAGA_DIPB_FREEZE    0b00001000

#define GALAGA_DIPB_TABLE     0b00000001
#define GALAGA_DIPB_UPRIGHT   0b00000000

#define GALAGA_DIPA (GALAGA_DIPA_1C1CR | GALAGA_DIPA_B20K70KE | GALAGA_DIPA_LIVE3)

#define GALAGA_DIPB (GALAGA_DIPB_RANK_A | GALAGA_DIPB_UPRIGHT)

#define PACMAN_DIP_FREE       0b00000000
#define PACMAN_DIP_1C1P       0b00000001
#define PACMAN_DIP_1C2P       0b00000010
#define PACMAN_DIP_2C1P       0b00000011

#define PACMAN_DIP_LIVE1      0b00000000
#define PACMAN_DIP_LIVE2      0b00000100
#define PACMAN_DIP_LIVE3      0b00001000
#define PACMAN_DIP_LIVE5      0b00001100

#define PACMAN_DIP_B10K       0b00000000
#define PACMAN_DIP_B15K       0b00010000
#define PACMAN_DIP_B20K       0b00100000
#define PACMAN_DIP_BNONE      0b00110000

#define PACMAN_DIP_NORMAL     0b11000000
#define PACMAN_DIP_RACKTEST   0b01000000
#define PACMAN_DIP_FREEZE     0b10000000

#define PACMAN_DIP  (PACMAN_DIP_NORMAL | PACMAN_DIP_B10K | PACMAN_DIP_LIVE3 | PACMAN_DIP_1C1P)


#define DKONG_DIP_COCKTAIL    0b00000000
#define DKONG_DIP_UPRIGHT     0b10000000

#define DKONG_DIP_1C1P        0b00000000
#define DKONG_DIP_2C1P        0b00010000
#define DKONG_DIP_1C2P        0b00100000
#define DKONG_DIP_3C1P        0b00110000
#define DKONG_DIP_1C3P        0b01000000
#define DKONG_DIP_4C3P        0b01010000
#define DKONG_DIP_1C4P        0b01100000
#define DKONG_DIP_4C1P        0b01110000

#define DKONG_DIP_B7K         0b00000000
#define DKONG_DIP_B10K        0b00000100
#define DKONG_DIP_B15K        0b00001000
#define DKONG_DIP_B20K        0b00001100

#define DKONG_DIP_LIVE3       0b00000000
#define DKONG_DIP_LIVE4       0b00000001
#define DKONG_DIP_LIVE5       0b00000010
#define DKONG_DIP_LIVE6       0b00000011

#define DKONG_DIP  (DKONG_DIP_UPRIGHT | DKONG_DIP_1C1P | DKONG_DIP_B7K | DKONG_DIP_LIVE3 )

#define FROGGER_DIP_LIVES3    0b00000000
#define FROGGER_DIP_LIVES5    0b00000001
#define FROGGER_DIP_LIVES7    0b00000010
#define FROGGER_DIP_LIVES256  0b00000011

#define FROGGER_DIP1  (FROGGER_DIP_LIVES3)

#define FROGGER_DIP_COCKTAIL  0b00000001
#define FROGGER_DIP_UPRIGHT   0b00000000

#define FROGGER_DIP_A11B11C11 0b00000000
#define FROGGER_DIP_A21B11C21 0b00000010
#define FROGGER_DIP_A21B13C21 0b00000100
#define FROGGER_DIP_A11B16C11 0b00000110

#define FROGGER_DIP2  (FROGGER_DIP_A11B11C11 | FROGGER_DIP_UPRIGHT)

#define DIGDUG_DIP_LIVES1  0b11000000
#define DIGDUG_DIP_LIVES2  0b10000000
#define DIGDUG_DIP_LIVES3  0b01000000
#define DIGDUG_DIP_LIVES5  0b00000000

#define DIGDUG_DIP_10K40K  0b00010000
#define DIGDUG_DIP_10K     0b00011000
#define DIGDUG_DIP_20K60K  0b00100000
#define DIGDUG_DIP_20K60KE 0b00001000
#define DIGDUG_DIP_20K70KE 0b00110000
#define DIGDUG_DIP_NONE    0b00111000

#define DIGDUG_DIPA_1C1C    0b00000110
#define DIGDUG_DIPA_1C2C    0b00000001
#define DIGDUG_DIPA_1C3C    0b00000101
#define DIGDUG_DIPA_1C6C    0b00000011
#define DIGDUG_DIPA_1C7C    0b00000111
#define DIGDUG_DIPA_2C1C    0b00000100
#define DIGDUG_DIPA_2C3C    0b00000010
#define DIGDUG_DIPA_3C71    0b00000000

#define DIGDUG_DIP_A  (DIGDUG_DIP_LIVES3 | DIGDUG_DIP_20K60K | DIGDUG_DIPA_1C1C)

#define DIGDUG_DIPB_1C1C    0b11000000
#define DIGDUG_DIPB_1C2C    0b01000000
#define DIGDUG_DIPB_2C1C    0b10000000
#define DIGDUG_DIPB_2C3C    0b00000000

#define DIGDUG_DIP_FREEZE   0b00100000
#define DIGDUG_DIP_DSOUND   0b00010000
#define DIGDUG_DIP_CONT     0b00001000
#define DIGDUG_DIP_TABLE    0b00000100

#define DIGDUG_DIP_EASY     0b00000011
#define DIGDUG_DIP_HARD     0b00000010
#define DIGDUG_DIP_HARDEST  0b00000000
#define DIGDUG_DIP_MEDIUM   0b00000001

#define DIGDUG_DIP_B  (DIGDUG_DIPB_1C1C | DIGDUG_DIP_CONT | DIGDUG_DIP_EASY)

#define _1942_DIP_LIVES5    0b11000000
#define _1942_DIP_LIVES2    0b10000000
#define _1942_DIP_LIVES1    0b01000000
#define _1942_DIP_LIVES3    0b00000000

#define _1942_DIP_30K100K   0b00110000
#define _1942_DIP_30K80K    0b00100000
#define _1942_DIP_20K100K   0b00010000
#define _1942_DIP_20K80K    0b00000000

#define _1942_DIP_UPRIGHT   0b00001000
#define _1942_DIP_TABLE     0b00000000

#define _1942_DIP_FREE      0b00000111
#define _1942_DIP_1C4C      0b00000110
#define _1942_DIP_1C3C      0b00000101
#define _1942_DIP_3C2C      0b00000100
#define _1942_DIP_1C2C      0b00000011
#define _1942_DIP_4C1C      0b00000010
#define _1942_DIP_2C1C      0b00000001
#define _1942_DIP_1C1C      0b00000000

#define _1942_DIP_A  (_1942_DIP_LIVES2 | _1942_DIP_20K80K | _1942_DIP_UPRIGHT | _1942_DIP_1C1C )

#define _1942_DIP_STOP      0b10000000
#define _1942_DIP_RUN       0b00000000

#define _1942_DIP_VERY      0b01100000
#define _1942_DIP_DIFFICULT 0b01000000
#define _1942_DIP_EASY      0b00100000
#define _1942_DIP_MEDIUM    0b00000000

#define _1942_DIP_SCR_TURN  0b00010000
#define _1942_DIP_NO_TURN   0b00000000

#define _1942_DIP_TESTMODE  0b00001000
#define _1942_DIP_NO_TEST   0b00000000

#define _1942_DIP_B  (_1942_DIP_RUN | _1942_DIP_MEDIUM | _1942_DIP_NO_TURN | _1942_DIP_NO_TEST | _1942_DIP_1C1C)

#endif // _DIP_SWITCHES_H_
