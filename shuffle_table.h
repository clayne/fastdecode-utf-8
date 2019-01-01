static uint8_t shuffleTable[256][16] = {
 0,-1,-1,-1, 1,-1,-1,-1, 2,-1,-1,-1, 3,-1,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 3,-1,-1,-1, 4,-1,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 4,-1,-1,-1, 5,-1,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 5,-1,-1,-1, 6,-1,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 3,-1,-1,-1, 4,-1,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 4,-1,-1,-1, 5,-1,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 5,-1,-1,-1, 6,-1,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 6,-1,-1,-1, 7,-1,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 4,-1,-1,-1, 5,-1,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 5,-1,-1,-1, 6,-1,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 6,-1,-1,-1, 7,-1,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 7,-1,-1,-1, 8,-1,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 5,-1,-1,-1, 6,-1,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 6,-1,-1,-1, 7,-1,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 7,-1,-1,-1, 8,-1,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 8,-1,-1,-1, 9,-1,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 3, 2,-1,-1, 4,-1,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 4, 3,-1,-1, 5,-1,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 5, 4,-1,-1, 6,-1,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 6, 5,-1,-1, 7,-1,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 4, 3,-1,-1, 5,-1,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 5, 4,-1,-1, 6,-1,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 6, 5,-1,-1, 7,-1,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 7, 6,-1,-1, 8,-1,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 5, 4,-1,-1, 6,-1,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 6, 5,-1,-1, 7,-1,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 7, 6,-1,-1, 8,-1,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 8, 7,-1,-1, 9,-1,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 6, 5,-1,-1, 7,-1,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 7, 6,-1,-1, 8,-1,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 8, 7,-1,-1, 9,-1,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 9, 8,-1,-1,10,-1,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 4, 3, 2,-1, 5,-1,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 5, 4, 3,-1, 6,-1,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 6, 5, 4,-1, 7,-1,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 7, 6, 5,-1, 8,-1,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 5, 4, 3,-1, 6,-1,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 6, 5, 4,-1, 7,-1,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 7, 6, 5,-1, 8,-1,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 8, 7, 6,-1, 9,-1,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 6, 5, 4,-1, 7,-1,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 7, 6, 5,-1, 8,-1,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 8, 7, 6,-1, 9,-1,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 9, 8, 7,-1,10,-1,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 7, 6, 5,-1, 8,-1,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 8, 7, 6,-1, 9,-1,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 9, 8, 7,-1,10,-1,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4,10, 9, 8,-1,11,-1,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 5, 4, 3, 2, 6,-1,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 6, 5, 4, 3, 7,-1,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 7, 6, 5, 4, 8,-1,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 8, 7, 6, 5, 9,-1,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 6, 5, 4, 3, 7,-1,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 7, 6, 5, 4, 8,-1,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 8, 7, 6, 5, 9,-1,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 9, 8, 7, 6,10,-1,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 7, 6, 5, 4, 8,-1,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 8, 7, 6, 5, 9,-1,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 9, 8, 7, 6,10,-1,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1,10, 9, 8, 7,11,-1,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 8, 7, 6, 5, 9,-1,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 9, 8, 7, 6,10,-1,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3,10, 9, 8, 7,11,-1,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4,11,10, 9, 8,12,-1,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 2,-1,-1,-1, 4, 3,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 3,-1,-1,-1, 5, 4,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 4,-1,-1,-1, 6, 5,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 5,-1,-1,-1, 7, 6,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 3,-1,-1,-1, 5, 4,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 4,-1,-1,-1, 6, 5,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 5,-1,-1,-1, 7, 6,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 6,-1,-1,-1, 8, 7,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 4,-1,-1,-1, 6, 5,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 5,-1,-1,-1, 7, 6,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 6,-1,-1,-1, 8, 7,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 7,-1,-1,-1, 9, 8,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 5,-1,-1,-1, 7, 6,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 6,-1,-1,-1, 8, 7,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 7,-1,-1,-1, 9, 8,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 8,-1,-1,-1,10, 9,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 3, 2,-1,-1, 5, 4,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 4, 3,-1,-1, 6, 5,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 5, 4,-1,-1, 7, 6,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 6, 5,-1,-1, 8, 7,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 4, 3,-1,-1, 6, 5,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 5, 4,-1,-1, 7, 6,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 6, 5,-1,-1, 8, 7,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 7, 6,-1,-1, 9, 8,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 5, 4,-1,-1, 7, 6,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 6, 5,-1,-1, 8, 7,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 7, 6,-1,-1, 9, 8,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 8, 7,-1,-1,10, 9,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 6, 5,-1,-1, 8, 7,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 7, 6,-1,-1, 9, 8,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 8, 7,-1,-1,10, 9,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 9, 8,-1,-1,11,10,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 4, 3, 2,-1, 6, 5,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 5, 4, 3,-1, 7, 6,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 6, 5, 4,-1, 8, 7,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 7, 6, 5,-1, 9, 8,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 5, 4, 3,-1, 7, 6,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 6, 5, 4,-1, 8, 7,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 7, 6, 5,-1, 9, 8,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 8, 7, 6,-1,10, 9,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 6, 5, 4,-1, 8, 7,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 7, 6, 5,-1, 9, 8,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 8, 7, 6,-1,10, 9,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 9, 8, 7,-1,11,10,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 7, 6, 5,-1, 9, 8,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 8, 7, 6,-1,10, 9,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 9, 8, 7,-1,11,10,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4,10, 9, 8,-1,12,11,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 5, 4, 3, 2, 7, 6,-1,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 6, 5, 4, 3, 8, 7,-1,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 7, 6, 5, 4, 9, 8,-1,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 8, 7, 6, 5,10, 9,-1,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 6, 5, 4, 3, 8, 7,-1,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 7, 6, 5, 4, 9, 8,-1,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 8, 7, 6, 5,10, 9,-1,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 9, 8, 7, 6,11,10,-1,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 7, 6, 5, 4, 9, 8,-1,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 8, 7, 6, 5,10, 9,-1,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 9, 8, 7, 6,11,10,-1,-1,
 3, 2, 1, 0, 6, 5, 4,-1,10, 9, 8, 7,12,11,-1,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 8, 7, 6, 5,10, 9,-1,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 9, 8, 7, 6,11,10,-1,-1,
 2, 1, 0,-1, 6, 5, 4, 3,10, 9, 8, 7,12,11,-1,-1,
 3, 2, 1, 0, 7, 6, 5, 4,11,10, 9, 8,13,12,-1,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 2,-1,-1,-1, 5, 4, 3,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 3,-1,-1,-1, 6, 5, 4,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 4,-1,-1,-1, 7, 6, 5,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 5,-1,-1,-1, 8, 7, 6,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 3,-1,-1,-1, 6, 5, 4,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 4,-1,-1,-1, 7, 6, 5,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 5,-1,-1,-1, 8, 7, 6,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 6,-1,-1,-1, 9, 8, 7,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 4,-1,-1,-1, 7, 6, 5,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 5,-1,-1,-1, 8, 7, 6,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 6,-1,-1,-1, 9, 8, 7,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 7,-1,-1,-1,10, 9, 8,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 5,-1,-1,-1, 8, 7, 6,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 6,-1,-1,-1, 9, 8, 7,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 7,-1,-1,-1,10, 9, 8,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 8,-1,-1,-1,11,10, 9,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 3, 2,-1,-1, 6, 5, 4,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 4, 3,-1,-1, 7, 6, 5,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 5, 4,-1,-1, 8, 7, 6,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 6, 5,-1,-1, 9, 8, 7,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 4, 3,-1,-1, 7, 6, 5,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 5, 4,-1,-1, 8, 7, 6,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 6, 5,-1,-1, 9, 8, 7,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 7, 6,-1,-1,10, 9, 8,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 5, 4,-1,-1, 8, 7, 6,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 6, 5,-1,-1, 9, 8, 7,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 7, 6,-1,-1,10, 9, 8,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 8, 7,-1,-1,11,10, 9,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 6, 5,-1,-1, 9, 8, 7,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 7, 6,-1,-1,10, 9, 8,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 8, 7,-1,-1,11,10, 9,-1,
 3, 2, 1, 0, 7, 6, 5, 4, 9, 8,-1,-1,12,11,10,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 4, 3, 2,-1, 7, 6, 5,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 5, 4, 3,-1, 8, 7, 6,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 6, 5, 4,-1, 9, 8, 7,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 7, 6, 5,-1,10, 9, 8,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 5, 4, 3,-1, 8, 7, 6,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 6, 5, 4,-1, 9, 8, 7,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 7, 6, 5,-1,10, 9, 8,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 8, 7, 6,-1,11,10, 9,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 6, 5, 4,-1, 9, 8, 7,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 7, 6, 5,-1,10, 9, 8,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 8, 7, 6,-1,11,10, 9,-1,
 3, 2, 1, 0, 6, 5, 4,-1, 9, 8, 7,-1,12,11,10,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 7, 6, 5,-1,10, 9, 8,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 8, 7, 6,-1,11,10, 9,-1,
 2, 1, 0,-1, 6, 5, 4, 3, 9, 8, 7,-1,12,11,10,-1,
 3, 2, 1, 0, 7, 6, 5, 4,10, 9, 8,-1,13,12,11,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 5, 4, 3, 2, 8, 7, 6,-1,
 1, 0,-1,-1, 2,-1,-1,-1, 6, 5, 4, 3, 9, 8, 7,-1,
 2, 1, 0,-1, 3,-1,-1,-1, 7, 6, 5, 4,10, 9, 8,-1,
 3, 2, 1, 0, 4,-1,-1,-1, 8, 7, 6, 5,11,10, 9,-1,
 0,-1,-1,-1, 2, 1,-1,-1, 6, 5, 4, 3, 9, 8, 7,-1,
 1, 0,-1,-1, 3, 2,-1,-1, 7, 6, 5, 4,10, 9, 8,-1,
 2, 1, 0,-1, 4, 3,-1,-1, 8, 7, 6, 5,11,10, 9,-1,
 3, 2, 1, 0, 5, 4,-1,-1, 9, 8, 7, 6,12,11,10,-1,
 0,-1,-1,-1, 3, 2, 1,-1, 7, 6, 5, 4,10, 9, 8,-1,
 1, 0,-1,-1, 4, 3, 2,-1, 8, 7, 6, 5,11,10, 9,-1,
 2, 1, 0,-1, 5, 4, 3,-1, 9, 8, 7, 6,12,11,10,-1,
 3, 2, 1, 0, 6, 5, 4,-1,10, 9, 8, 7,13,12,11,-1,
 0,-1,-1,-1, 4, 3, 2, 1, 8, 7, 6, 5,11,10, 9,-1,
 1, 0,-1,-1, 5, 4, 3, 2, 9, 8, 7, 6,12,11,10,-1,
 2, 1, 0,-1, 6, 5, 4, 3,10, 9, 8, 7,13,12,11,-1,
 3, 2, 1, 0, 7, 6, 5, 4,11,10, 9, 8,14,13,12,-1,
 0,-1,-1,-1, 1,-1,-1,-1, 2,-1,-1,-1, 6, 5, 4, 3,
 1, 0,-1,-1, 2,-1,-1,-1, 3,-1,-1,-1, 7, 6, 5, 4,
 2, 1, 0,-1, 3,-1,-1,-1, 4,-1,-1,-1, 8, 7, 6, 5,
 3, 2, 1, 0, 4,-1,-1,-1, 5,-1,-1,-1, 9, 8, 7, 6,
 0,-1,-1,-1, 2, 1,-1,-1, 3,-1,-1,-1, 7, 6, 5, 4,
 1, 0,-1,-1, 3, 2,-1,-1, 4,-1,-1,-1, 8, 7, 6, 5,
 2, 1, 0,-1, 4, 3,-1,-1, 5,-1,-1,-1, 9, 8, 7, 6,
 3, 2, 1, 0, 5, 4,-1,-1, 6,-1,-1,-1,10, 9, 8, 7,
 0,-1,-1,-1, 3, 2, 1,-1, 4,-1,-1,-1, 8, 7, 6, 5,
 1, 0,-1,-1, 4, 3, 2,-1, 5,-1,-1,-1, 9, 8, 7, 6,
 2, 1, 0,-1, 5, 4, 3,-1, 6,-1,-1,-1,10, 9, 8, 7,
 3, 2, 1, 0, 6, 5, 4,-1, 7,-1,-1,-1,11,10, 9, 8,
 0,-1,-1,-1, 4, 3, 2, 1, 5,-1,-1,-1, 9, 8, 7, 6,
 1, 0,-1,-1, 5, 4, 3, 2, 6,-1,-1,-1,10, 9, 8, 7,
 2, 1, 0,-1, 6, 5, 4, 3, 7,-1,-1,-1,11,10, 9, 8,
 3, 2, 1, 0, 7, 6, 5, 4, 8,-1,-1,-1,12,11,10, 9,
 0,-1,-1,-1, 1,-1,-1,-1, 3, 2,-1,-1, 7, 6, 5, 4,
 1, 0,-1,-1, 2,-1,-1,-1, 4, 3,-1,-1, 8, 7, 6, 5,
 2, 1, 0,-1, 3,-1,-1,-1, 5, 4,-1,-1, 9, 8, 7, 6,
 3, 2, 1, 0, 4,-1,-1,-1, 6, 5,-1,-1,10, 9, 8, 7,
 0,-1,-1,-1, 2, 1,-1,-1, 4, 3,-1,-1, 8, 7, 6, 5,
 1, 0,-1,-1, 3, 2,-1,-1, 5, 4,-1,-1, 9, 8, 7, 6,
 2, 1, 0,-1, 4, 3,-1,-1, 6, 5,-1,-1,10, 9, 8, 7,
 3, 2, 1, 0, 5, 4,-1,-1, 7, 6,-1,-1,11,10, 9, 8,
 0,-1,-1,-1, 3, 2, 1,-1, 5, 4,-1,-1, 9, 8, 7, 6,
 1, 0,-1,-1, 4, 3, 2,-1, 6, 5,-1,-1,10, 9, 8, 7,
 2, 1, 0,-1, 5, 4, 3,-1, 7, 6,-1,-1,11,10, 9, 8,
 3, 2, 1, 0, 6, 5, 4,-1, 8, 7,-1,-1,12,11,10, 9,
 0,-1,-1,-1, 4, 3, 2, 1, 6, 5,-1,-1,10, 9, 8, 7,
 1, 0,-1,-1, 5, 4, 3, 2, 7, 6,-1,-1,11,10, 9, 8,
 2, 1, 0,-1, 6, 5, 4, 3, 8, 7,-1,-1,12,11,10, 9,
 3, 2, 1, 0, 7, 6, 5, 4, 9, 8,-1,-1,13,12,11,10,
 0,-1,-1,-1, 1,-1,-1,-1, 4, 3, 2,-1, 8, 7, 6, 5,
 1, 0,-1,-1, 2,-1,-1,-1, 5, 4, 3,-1, 9, 8, 7, 6,
 2, 1, 0,-1, 3,-1,-1,-1, 6, 5, 4,-1,10, 9, 8, 7,
 3, 2, 1, 0, 4,-1,-1,-1, 7, 6, 5,-1,11,10, 9, 8,
 0,-1,-1,-1, 2, 1,-1,-1, 5, 4, 3,-1, 9, 8, 7, 6,
 1, 0,-1,-1, 3, 2,-1,-1, 6, 5, 4,-1,10, 9, 8, 7,
 2, 1, 0,-1, 4, 3,-1,-1, 7, 6, 5,-1,11,10, 9, 8,
 3, 2, 1, 0, 5, 4,-1,-1, 8, 7, 6,-1,12,11,10, 9,
 0,-1,-1,-1, 3, 2, 1,-1, 6, 5, 4,-1,10, 9, 8, 7,
 1, 0,-1,-1, 4, 3, 2,-1, 7, 6, 5,-1,11,10, 9, 8,
 2, 1, 0,-1, 5, 4, 3,-1, 8, 7, 6,-1,12,11,10, 9,
 3, 2, 1, 0, 6, 5, 4,-1, 9, 8, 7,-1,13,12,11,10,
 0,-1,-1,-1, 4, 3, 2, 1, 7, 6, 5,-1,11,10, 9, 8,
 1, 0,-1,-1, 5, 4, 3, 2, 8, 7, 6,-1,12,11,10, 9,
 2, 1, 0,-1, 6, 5, 4, 3, 9, 8, 7,-1,13,12,11,10,
 3, 2, 1, 0, 7, 6, 5, 4,10, 9, 8,-1,14,13,12,11,
 0,-1,-1,-1, 1,-1,-1,-1, 5, 4, 3, 2, 9, 8, 7, 6,
 1, 0,-1,-1, 2,-1,-1,-1, 6, 5, 4, 3,10, 9, 8, 7,
 2, 1, 0,-1, 3,-1,-1,-1, 7, 6, 5, 4,11,10, 9, 8,
 3, 2, 1, 0, 4,-1,-1,-1, 8, 7, 6, 5,12,11,10, 9,
 0,-1,-1,-1, 2, 1,-1,-1, 6, 5, 4, 3,10, 9, 8, 7,
 1, 0,-1,-1, 3, 2,-1,-1, 7, 6, 5, 4,11,10, 9, 8,
 2, 1, 0,-1, 4, 3,-1,-1, 8, 7, 6, 5,12,11,10, 9,
 3, 2, 1, 0, 5, 4,-1,-1, 9, 8, 7, 6,13,12,11,10,
 0,-1,-1,-1, 3, 2, 1,-1, 7, 6, 5, 4,11,10, 9, 8,
 1, 0,-1,-1, 4, 3, 2,-1, 8, 7, 6, 5,12,11,10, 9,
 2, 1, 0,-1, 5, 4, 3,-1, 9, 8, 7, 6,13,12,11,10,
 3, 2, 1, 0, 6, 5, 4,-1,10, 9, 8, 7,14,13,12,11,
 0,-1,-1,-1, 4, 3, 2, 1, 8, 7, 6, 5,12,11,10, 9,
 1, 0,-1,-1, 5, 4, 3, 2, 9, 8, 7, 6,13,12,11,10,
 2, 1, 0,-1, 6, 5, 4, 3,10, 9, 8, 7,14,13,12,11,
 3, 2, 1, 0, 7, 6, 5, 4,11,10, 9, 8,15,14,13,12
};