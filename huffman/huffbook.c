#ifndef __HUFFBOOK_C_
#define __HUFFBOOK_C_
/*
 *   huffbook.c
 *   This is an auto-generated file, DONOT edit. 
 */
#include "huffbook.h"
    
static const uint32_t Incr1[] = { 2, 0, 1, 0, 0, 1, 0 };
static const uint32_t Code1[] = { 0, 3, 3, 2, 5, 9, 8 };
static const uint32_t Indx1[] = { 0, 1, 2, 3, 5, 4, 6 };
struct huff_codebook HuffDec1_7x1 = { 1, 1, 7, sizeof(Incr1) / sizeof(uint32_t), Incr1, Code1, Indx1};


static const uint32_t Incr2[] = { 3, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0 };
static const uint32_t Code2[] = { 7, 0, 4, 5, 6, 4, 3, 13, 15, 10, 4, 24, 23, 11, 51, 58, 56, 21, 119, 115, 91, 90, 41, 201, 202, 237, 177, 176, 80, 401, 406, 457, 357, 356, 459, 358, 359, 801, 800, 163, 814, 913, 916, 946, 947, 325, 324, 1631, 1888, 1889, 1834, 1835, 1824, 3260, 3782, 3783, 3780, 6523, 3781, 6522, 3651, 7301, 14601, 14600 };
static const uint32_t Indx2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 42, 44, 63, 38, 39, 40, 41, 43, 45, 46, 47, 49, 52, 53, 54, 55, 48, 50, 51, 56, 58, 61, 62, 57, 59, 60 };
struct huff_codebook HuffDec2_64x1 = { 2, 1, 64, sizeof(Incr2) / sizeof(uint32_t), Incr2, Code2, Indx2};


static const uint32_t Incr3[] = { 3, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0 };
static const uint32_t Code3[] = { 1, 0, 6, 5, 7, 14, 15, 10, 9, 8, 9, 23, 27, 25, 24, 16, 44, 90, 52, 91, 106, 107, 69, 141, 137, 140, 143, 285, 272, 284, 547, 546 };
static const uint32_t Indx3[] = { 1, 2, 3, 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 22, 25, 26, 31, 24, 28, 29, 27, 30 };
struct huff_codebook HuffDec3_32x1 = { 3, 1, 32, sizeof(Incr3) / sizeof(uint32_t), Incr3, Code3, Indx3};


static const uint32_t Incr4[] = { 2, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0 };
static const uint32_t Code4[] = { 11, 3, 5, 4, 0, 3, 6, 7, 4, 10, 11, 4, 10, 23, 45, 89, 176, 177 };
static const uint32_t Indx4[] = { 8, 9, 7, 10, 11, 4, 5, 6, 12, 3, 13, 14, 15, 2, 16, 1, 0, 17 };
struct huff_codebook HuffDec4_18x1 = { 4, 1, 18, sizeof(Incr4) / sizeof(uint32_t), Incr4, Code4, Indx4};


static const uint32_t Incr5[] = { 1, 2, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 2, 0, 1, 0, 0, 0 };
static const uint32_t Code5[] = { 1, 3, 2, 1, 2, 6, 7, 0, 2, 7, 13, 24, 103, 102, 202, 203, 200, 201 };
static const uint32_t Indx5[] = { 8, 7, 9, 6, 10, 5, 11, 12, 13, 4, 14, 3, 15, 16, 0, 1, 2, 17 };
struct huff_codebook HuffDec5_18x1 = { 5, 1, 18, sizeof(Incr5) / sizeof(uint32_t), Incr5, Code5, Indx5};


static const uint32_t Incr6[] = { 5, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 };
static const uint32_t Code6[] = { 3, 15, 14, 26, 8, 11, 9, 32, 35, 20, 51, 21, 54, 32, 33, 38, 26, 55, 74, 75, 39, 72, 36, 37, 27, 73, 78, 24, 50, 79, 76, 25, 77, 66, 67, 10, 212, 213, 68, 69, 170, 90, 91, 88, 89, 94, 171, 168, 169, 95, 174, 92, 93, 175, 172, 173, 82, 162, 83, 163, 160, 80, 161, 166, 167, 164, 81, 86, 87, 165, 186, 187, 84, 184, 85, 185, 58, 190, 191, 59, 188, 189, 178, 56, 179, 176, 177, 182, 57, 183, 62, 63, 180, 60, 181, 10, 11, 61, 8, 98, 9, 99, 14, 15, 12, 13, 2, 3, 0, 1, 6, 7, 4, 5, 138, 139, 136, 137, 142, 96, 143, 140, 141, 18, 19, 97, 16, 17, 22, 430, 431, 428, 429, 418, 419, 416, 417, 422, 423, 420, 421, 442, 443, 440, 441, 446, 447, 444, 445, 434, 435, 432, 433, 438, 439, 436, 437, 394, 395, 392, 393, 398, 399, 396, 397, 386, 387, 384, 385, 390, 391, 388, 389, 410, 411, 408, 409, 414, 415, 412, 413, 402, 403, 400, 401, 406, 407, 404, 405, 490, 491, 488, 489, 494, 495, 492, 493, 482, 483, 480, 481, 486, 487, 484, 485, 506, 507, 504, 505, 510, 511, 508, 509, 498, 499, 496, 497, 502, 503, 500, 501, 458, 459, 456, 457, 462, 463, 460, 461, 450, 451, 448, 449, 454, 455, 452, 453, 474, 475, 472, 473, 478, 479, 476, 477, 466, 467, 464, 465, 470, 471, 468, 469, 46, 94, 95 };
static const uint32_t Indx6[] = { 0, 1, 255, 2, 3, 4, 7, 22, 5, 6, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 21, 23, 25, 29, 30, 32, 33, 35, 37, 48, 58, 92, 116, 132, 174, 15, 20, 24, 26, 27, 28, 34, 36, 38, 39, 40, 42, 43, 44, 45, 46, 47, 49, 51, 55, 59, 61, 62, 64, 65, 66, 67, 69, 70, 71, 72, 77, 80, 81, 82, 83, 85, 89, 91, 93, 94, 97, 98, 99, 100, 103, 106, 111, 113, 118, 123, 125, 126, 130, 131, 133, 135, 136, 141, 144, 145, 146, 151, 155, 158, 161, 164, 171, 176, 177, 180, 181, 182, 185, 188, 189, 198, 203, 205, 212, 214, 218, 219, 222, 227, 233, 237, 246, 247, 248, 249, 250, 251, 31, 41, 50, 52, 53, 54, 56, 57, 60, 63, 68, 73, 74, 75, 76, 78, 79, 84, 86, 87, 88, 90, 95, 96, 101, 102, 104, 105, 107, 108, 109, 110, 112, 114, 115, 117, 119, 120, 121, 122, 124, 127, 128, 129, 134, 137, 138, 139, 140, 142, 143, 147, 148, 149, 150, 152, 153, 154, 156, 157, 159, 160, 162, 163, 165, 166, 167, 168, 169, 170, 172, 173, 175, 178, 179, 183, 184, 186, 187, 190, 191, 192, 193, 194, 195, 196, 197, 199, 200, 201, 202, 204, 206, 207, 208, 209, 210, 211, 213, 215, 216, 217, 220, 221, 223, 224, 225, 226, 228, 229, 230, 231, 232, 234, 235, 236, 238, 239, 240, 241, 242, 243, 244, 245, 254, 252, 253 };
struct huff_codebook HuffDec27_256x1 = { 27, 1, 256, sizeof(Incr6) / sizeof(uint32_t), Incr6, Code6, Indx6};



int32_t GetHuffDim(struct huff_codebook* book) {
    return book->dim;
}

uint8_t GetHuffMidTread(struct huff_codebook* book) {
    return book->num_codes != 256;
}

int32_t GetNumHuffCodes(struct huff_codebook* book) {
    return book->num_codes;
}
    
#endif
