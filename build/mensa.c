#include <janet.h>
static const unsigned char bytes[] = {215, 0, 205, 0, 153, 0, 0, 7, 1, 1, 205, 127, 255, 255, 255, 9, 32, 206, 4, 109, 97, 105, 110, 206, 15, 109, 101, 110, 115, 97, 47, 99, 108, 105, 46, 106, 97, 110, 101, 116, 215, 0, 205, 2, 186, 0, 0, 12, 1, 0, 1, 10, 40, 1, 206, 8, 103, 101, 116, 45, 119, 101, 101, 107, 206, 16, 109, 101, 110, 115, 97, 47, 105, 110, 105, 116, 46, 106, 97, 110, 101, 116, 215, 0, 205, 2, 186, 0, 0, 8, 0, 0, 0, 3, 23, 1, 206, 15, 103, 101, 116, 45, 119, 101, 101, 107, 45, 110, 117, 109, 98, 101, 114, 206, 46, 47, 104, 111, 109, 101, 47, 116, 105, 111, 110, 105, 115, 47, 46, 108, 111, 99, 97, 108, 47, 108, 105, 98, 47, 106, 97, 110, 101, 116, 47, 119, 97, 110, 100, 97, 47, 100, 97, 116, 101, 46, 106, 97, 110, 101, 116, 206, 0, 208, 2, 105, 48, 216, 9, 102, 105, 98, 101, 114, 47, 110, 101, 119, 44, 0, 0, 0, 42, 1, 0, 0, 47, 1, 0, 0, 63, 1, 0, 0, 25, 2, 1, 0, 46, 1, 0, 0, 42, 3, 1, 0, 48, 1, 3, 0, 42, 4, 2, 0, 51, 3, 4, 0, 25, 1, 3, 0, 38, 4, 0, 0, 53, 3, 1, 4, 25, 4, 3, 0, 59, 3, 4, 0, 25, 5, 3, 0, 59, 3, 4, 1, 25, 6, 3, 0, 35, 3, 2, 5, 28, 3, 2, 0, 3, 6, 0, 0, 55, 7, 4, 1, 3, 7, 0, 0, 205, 0, 208, 0, 0, 11, 0, 0, 0, 8, 111, 1, 218, 8, 215, 0, 205, 0, 152, 0, 0, 4, 0, 0, 0, 5, 11, 206, 5, 116, 111, 100, 97, 121, 218, 8, 215, 0, 205, 0, 152, 0, 0, 3, 0, 0, 0, 2, 6, 206, 10, 116, 97, 98, 108, 101, 45, 100, 97, 116, 101, 218, 8, 216, 7, 111, 115, 47, 100, 97, 116, 101, 216, 5, 109, 101, 114, 103, 101, 44, 0, 0, 0, 42, 2, 0, 0, 51, 1, 2, 0, 47, 1, 0, 0, 42, 2, 1, 0, 52, 2, 0, 0, 64, 1, 0, 29, 0, 29, 0, 22, 0, 22, 0, 22, 213, 3, 208, 7, 109, 105, 110, 117, 116, 101, 115, 0, 208, 7, 115, 101, 99, 111, 110, 100, 115, 0, 208, 5, 104, 111, 117, 114, 115, 0, 218, 17, 211, 7, 208, 5, 108, 111, 99, 97, 108, 215, 0, 205, 0, 144, 0, 0, 4, 1, 1, 1, 3, 10, 218, 8, 216, 9, 111, 115, 47, 109, 107, 116, 105, 109, 101, 218, 16, 216, 10, 109, 101, 114, 103, 101, 45, 105, 110, 116, 111, 47, 0, 0, 0, 42, 2, 0, 0, 51, 1, 2, 0, 39, 2, 0, 0, 48, 1, 2, 0, 42, 3, 1, 0, 51, 2, 3, 0, 48, 0, 2, 0, 42, 1, 2, 0, 52, 1, 0, 0, 44, 45, 0, 45, 0, 45, 0, 36, 0, 36, 0, 36, 0, 36, 0, 21, 0, 21, 0, 21, 208, 9, 115, 116, 114, 45, 109, 111, 110, 116, 104, 215, 0, 205, 0, 144, 0, 0, 6, 2, 1, 2, 4, 16, 218, 8, 208, 5, 109, 111, 110, 116, 104, 208, 5, 115, 104, 111, 114, 116, 213, 2, 208, 4, 108, 111, 110, 103, 210, 12, 0, 206, 7, 74, 97, 110, 117, 97, 114, 121, 206, 8, 70, 101, 98, 114, 117, 97, 114, 121, 206, 5, 77, 97, 114, 99, 104, 206, 5, 65, 112, 114, 105, 108, 206, 3, 77, 97, 121, 206, 4, 74, 117, 110, 101, 206, 4, 74, 117, 108, 121, 206, 6, 65, 117, 103, 117, 115, 116, 206, 9, 83, 101, 112, 116, 101, 109, 98, 101, 114, 206, 7, 79, 99, 116, 111, 98, 101, 114, 206, 8, 78, 111, 118, 101, 109, 98, 101, 114, 206, 8, 68, 101, 99, 101, 109, 98, 101, 114, 218, 30, 210, 12, 0, 206, 3, 74, 97, 110, 206, 3, 70, 101, 98, 206, 3, 77, 97, 114, 206, 3, 65, 112, 114, 218, 36, 206, 3, 74, 117, 110, 206, 3, 74, 117, 108, 206, 3, 65, 117, 103, 206, 3, 83, 101, 112, 206, 3, 79, 99, 116, 206, 3, 78, 111, 118, 206, 3, 68, 101, 99, 216, 6, 103, 101, 116, 45, 105, 110, 42, 3, 0, 0, 56, 2, 0, 3, 25, 3, 2, 0, 38, 4, 0, 0, 35, 2, 4, 1, 28, 2, 3, 0, 42, 0, 1, 0, 26, 2, 0, 0, 25, 0, 1, 0, 25, 2, 0, 0, 48, 2, 3, 0, 67, 4, 0, 0, 42, 5, 2, 0, 48, 5, 4, 0, 42, 5, 3, 0, 52, 5, 0, 0, 37, 5, 0, 5, 0, 5, 1, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 1, 22, 0, 22, 0, 7, 0, 7, 0, 7, 0, 7, 208, 12, 115, 116, 114, 45, 119, 101, 101, 107, 45, 100, 97, 121, 215, 0, 205, 0, 144, 0, 0, 6, 2, 1, 2, 4, 16, 218, 8, 208, 8, 119, 101, 101, 107, 45, 100, 97, 121, 218, 30, 213, 2, 218, 31, 210, 7, 0, 206, 6, 83, 117, 110, 100, 97, 121, 206, 6, 77, 111, 110, 100, 97, 121, 206, 7, 84, 117, 101, 115, 100, 97, 121, 206, 9, 87, 101, 100, 110, 101, 115, 100, 97, 121, 206, 8, 84, 104, 117, 114, 115, 100, 97, 121, 206, 6, 70, 114, 105, 100, 97, 121, 206, 8, 83, 97, 116, 117, 114, 100, 97, 121, 218, 30, 210, 7, 0, 206, 3, 83, 117, 110, 206, 3, 77, 111, 110, 206, 3, 84, 117, 101, 206, 3, 87, 101, 100, 206, 3, 84, 104, 117, 206, 3, 70, 114, 105, 206, 3, 83, 97, 116, 218, 58, 42, 3, 0, 0, 56, 2, 0, 3, 25, 3, 2, 0, 38, 4, 0, 0, 35, 2, 4, 1, 28, 2, 3, 0, 42, 0, 1, 0, 26, 2, 0, 0, 25, 0, 1, 0, 25, 2, 0, 0, 48, 2, 3, 0, 67, 4, 0, 0, 42, 5, 2, 0, 48, 5, 4, 0, 42, 5, 3, 0, 52, 5, 0, 0, 29, 5, 0, 5, 0, 5, 1, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 1, 25, 0, 25, 0, 7, 0, 7, 0, 7, 0, 7, 208, 17, 115, 116, 114, 45, 119, 101, 101, 107, 45, 100, 97, 121, 45, 108, 111, 110, 103, 215, 0, 205, 0, 144, 0, 0, 6, 2, 1, 2, 4, 16, 218, 8, 218, 61, 218, 31, 218, 78, 218, 58, 42, 3, 0, 0, 56, 2, 0, 3, 25, 3, 2, 0, 38, 4, 0, 0, 35, 2, 4, 1, 28, 2, 3, 0, 42, 0, 1, 0, 26, 2, 0, 0, 25, 0, 1, 0, 25, 2, 0, 0, 48, 2, 3, 0, 67, 4, 0, 0, 42, 5, 2, 0, 48, 5, 4, 0, 42, 5, 3, 0, 52, 5, 0, 0, 33, 5, 0, 5, 0, 5, 1, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 1, 25, 0, 25, 0, 7, 0, 7, 0, 7, 0, 7, 208, 5, 101, 112, 111, 99, 104, 218, 25, 208, 14, 115, 116, 114, 45, 109, 111, 110, 116, 104, 45, 108, 111, 110, 103, 215, 0, 205, 0, 144, 0, 0, 6, 2, 1, 2, 4, 16, 218, 8, 218, 29, 218, 31, 218, 57, 218, 58, 42, 3, 0, 0, 56, 2, 0, 3, 25, 3, 2, 0, 38, 4, 0, 0, 35, 2, 4, 1, 28, 2, 3, 0, 42, 0, 1, 0, 26, 2, 0, 0, 25, 0, 1, 0, 25, 2, 0, 0, 48, 2, 3, 0, 67, 4, 0, 0, 42, 5, 2, 0, 48, 5, 4, 0, 42, 5, 3, 0, 52, 5, 0, 0, 41, 5, 0, 5, 0, 5, 1, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 1, 22, 0, 22, 0, 7, 0, 7, 0, 7, 0, 7, 208, 6, 102, 111, 114, 109, 97, 116, 215, 0, 205, 0, 152, 0, 0, 7, 1, 1, 1, 6, 21, 206, 12, 95, 102, 111, 114, 109, 97, 116, 45, 100, 97, 116, 101, 218, 8, 218, 29, 208, 4, 121, 101, 97, 114, 208, 9, 109, 111, 110, 116, 104, 45, 100, 97, 121, 216, 3, 105, 110, 99, 206, 14, 37, 46, 52, 105, 45, 37, 46, 50, 105, 45, 37, 46, 50, 105, 216, 13, 115, 116, 114, 105, 110, 103, 47, 102, 111, 114, 109, 97, 116, 42, 2, 0, 0, 56, 1, 0, 2, 25, 2, 1, 0, 42, 3, 1, 0, 56, 1, 0, 3, 25, 3, 1, 0, 42, 4, 2, 0, 56, 1, 0, 4, 25, 4, 1, 0, 44, 0, 0, 0, 47, 2, 0, 0, 42, 5, 3, 0, 51, 1, 5, 0, 47, 4, 0, 0, 42, 6, 3, 0, 51, 5, 6, 0, 42, 6, 4, 0, 49, 6, 3, 1, 47, 5, 0, 0, 42, 6, 5, 0, 52, 6, 0, 0, 3, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 37, 0, 37, 0, 37, 0, 45, 0, 45, 0, 45, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 215, 0, 205, 0, 153, 0, 0, 11, 1, 1, 205, 127, 255, 255, 255, 4, 33, 206, 4, 109, 97, 107, 101, 206, 48, 47, 104, 111, 109, 101, 47, 116, 105, 111, 110, 105, 115, 47, 46, 108, 111, 99, 97, 108, 47, 108, 105, 98, 47, 106, 97, 110, 101, 116, 47, 119, 97, 110, 100, 97, 47, 109, 97, 114, 98, 108, 101, 46, 106, 97, 110, 101, 116, 216, 4, 111, 110, 101, 63, 216, 6, 116, 97, 98, 108, 101, 63, 216, 5, 116, 97, 98, 108, 101, 216, 14, 116, 97, 98, 108, 101, 47, 115, 101, 116, 112, 114, 111, 116, 111, 44, 2, 0, 0, 61, 4, 1, 0, 47, 4, 0, 0, 42, 6, 0, 0, 51, 5, 6, 0, 25, 4, 5, 0, 28, 5, 14, 0, 41, 8, 0, 0, 56, 7, 1, 8, 25, 8, 7, 0, 47, 7, 0, 0, 42, 10, 1, 0, 51, 9, 10, 0, 25, 7, 9, 0, 28, 9, 3, 0, 25, 6, 8, 0, 26, 2, 0, 0, 25, 6, 7, 0, 25, 3, 6, 0, 26, 2, 0, 0, 25, 3, 4, 0, 25, 4, 3, 0, 28, 4, 3, 0, 25, 3, 4, 0, 26, 5, 0, 0, 50, 1, 0, 0, 42, 6, 2, 0, 51, 5, 6, 0, 25, 3, 5, 0, 25, 4, 3, 0, 48, 4, 0, 0, 42, 5, 3, 0, 52, 5, 0, 0, 94, 1, 8, 27, 0, 21, 0, 21, 0, 21, 0, 16, 0, 16, 1, 37, 0, 37, 0, 29, 0, 21, 0, 21, 0, 21, 191, 255, 16, 0, 16, 0, 16, 0, 16, 0, 16, 0, 16, 0, 16, 0, 16, 0, 5, 0, 5, 0, 5, 0, 5, 3, 9, 0, 9, 0, 9, 191, 253, 5, 191, 255, 3, 5, 3, 0, 3, 0, 3, 44, 0, 0, 0, 42, 2, 0, 0, 51, 1, 2, 0, 42, 2, 1, 0, 48, 1, 2, 0, 42, 3, 2, 0, 51, 2, 3, 0, 42, 1, 3, 0, 48, 1, 2, 0, 42, 1, 4, 0, 52, 1, 0, 0, 73, 1, 1, 21, 0, 21, 0, 14, 0, 14, 0, 14, 0, 14, 0, 3, 0, 3, 0, 3, 0, 3, 215, 0, 205, 0, 152, 0, 0, 8, 2, 1, 2, 6, 26, 206, 13, 115, 116, 97, 114, 116, 45, 111, 102, 45, 121, 101, 97, 114, 218, 8, 218, 12, 218, 87, 213, 3, 208, 8, 121, 101, 97, 114, 45, 100, 97, 121, 0, 218, 29, 0, 218, 88, 0, 213, 1, 218, 88, 0, 218, 17, 215, 0, 205, 0, 152, 0, 0, 7, 1, 1, 1, 7, 22, 206, 9, 109, 97, 107, 101, 45, 100, 97, 116, 101, 218, 8, 215, 0, 205, 0, 152, 0, 0, 8, 1, 1, 1, 8, 31, 206, 9, 110, 111, 114, 109, 97, 108, 105, 122, 101, 218, 8, 216, 4, 116, 121, 112, 101, 208, 5, 116, 97, 98, 108, 101, 208, 6, 115, 116, 114, 117, 99, 116, 218, 17, 208, 6, 110, 117, 109, 98, 101, 114, 218, 16, 208, 6, 115, 116, 114, 105, 110, 103, 215, 0, 205, 0, 152, 0, 0, 6, 1, 1, 1, 9, 22, 206, 11, 102, 114, 111, 109, 45, 115, 116, 114, 105, 110, 103, 218, 8, 217, 207, 8, 99, 111, 114, 101, 47, 112, 101, 103, 185, 7, 19, 4, 6, 0, 7, 2, 8, 21, 19, 12, 0, 0, 13, 15, 0, 11, 4, 4, 19, 3, 205, 0, 57, 0, 48, 11, 0, 1, 25, 7, 3, 30, 39, 66, 4, 0, 205, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 19, 43, 1, 0, 13, 46, 0, 6, 2, 50, 57, 7, 2, 54, 19, 0, 1, 48, 7, 2, 61, 64, 0, 1, 49, 3, 205, 0, 50, 0, 48, 11, 0, 1, 70, 7, 3, 30, 75, 106, 19, 79, 2, 0, 13, 82, 0, 6, 2, 86, 90, 7, 2, 64, 19, 7, 2, 94, 97, 0, 1, 51, 4, 0, 205, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 1, 110, 7, 3, 115, 124, 128, 148, 4, 0, 1, 205, 0, 16, 0, 0, 0, 0, 0, 0, 0, 19, 128, 128, 3, 0, 13, 128, 131, 0, 6, 2, 128, 135, 128, 139, 7, 2, 97, 19, 7, 2, 128, 143, 128, 146, 0, 1, 50, 3, 205, 0, 51, 0, 48, 11, 0, 1, 128, 152, 7, 3, 128, 157, 128, 160, 128, 173, 0, 1, 58, 19, 128, 164, 4, 0, 13, 128, 167, 0, 7, 2, 128, 171, 19, 3, 205, 0, 53, 0, 48, 11, 0, 1, 128, 177, 7, 2, 128, 157, 128, 181, 19, 128, 164, 5, 0, 215, 1, 205, 0, 208, 0, 0, 4, 1, 1, 1, 3, 14, 1, 218, 8, 216, 3, 100, 101, 99, 216, 8, 105, 100, 101, 110, 116, 105, 116, 121, 216, 11, 115, 99, 97, 110, 45, 110, 117, 109, 98, 101, 114, 43, 2, 0, 1, 28, 2, 3, 0, 42, 1, 0, 0, 26, 2, 0, 0, 42, 1, 1, 0, 47, 0, 0, 0, 42, 3, 2, 0, 51, 2, 3, 0, 47, 2, 0, 0, 51, 3, 1, 0, 43, 1, 0, 0, 48, 1, 3, 0, 65, 1, 0, 0, 3, 1, 0, 0, 191, 255, 79, 35, 0, 35, 0, 35, 0, 35, 0, 35, 0, 56, 0, 56, 0, 56, 0, 34, 0, 34, 0, 23, 0, 23, 0, 23, 0, 23, 0, 4, 218, 87, 201, 201, 201, 215, 1, 220, 17, 0, 4, 218, 29, 203, 201, 201, 215, 1, 220, 17, 0, 4, 218, 88, 203, 201, 201, 215, 1, 220, 17, 0, 4, 218, 20, 201, 201, 201, 215, 1, 220, 17, 0, 4, 218, 18, 201, 201, 201, 215, 1, 220, 17, 0, 4, 218, 19, 201, 201, 201, 215, 0, 205, 0, 153, 0, 0, 3, 0, 0, 205, 127, 255, 255, 255, 1, 4, 206, 2, 109, 99, 218, 8, 218, 17, 44, 1, 0, 0, 50, 0, 0, 0, 42, 2, 0, 0, 52, 2, 0, 0, 80, 1, 0, 18, 0, 18, 0, 18, 216, 9, 112, 101, 103, 47, 109, 97, 116, 99, 104, 218, 102, 218, 103, 218, 21, 218, 17, 218, 25, 218, 16, 218, 22, 44, 1, 0, 0, 42, 2, 0, 0, 48, 2, 0, 0, 42, 3, 1, 0, 51, 2, 3, 0, 42, 3, 2, 0, 42, 4, 3, 0, 42, 5, 4, 0, 49, 3, 4, 5, 50, 2, 0, 0, 42, 4, 5, 0, 51, 3, 4, 0, 47, 3, 0, 0, 42, 4, 6, 0, 51, 2, 4, 0, 47, 2, 0, 0, 42, 4, 7, 0, 51, 3, 4, 0, 42, 2, 8, 0, 48, 3, 2, 0, 42, 2, 5, 0, 52, 2, 0, 0, 105, 1, 7, 22, 0, 22, 0, 22, 0, 22, 191, 252, 18, 0, 18, 0, 18, 0, 18, 0, 18, 0, 18, 0, 18, 0, 7, 0, 7, 0, 7, 191, 255, 5, 0, 5, 0, 5, 191, 255, 3, 0, 3, 0, 3, 0, 3, 44, 1, 0, 0, 47, 0, 0, 0, 42, 3, 0, 0, 51, 2, 3, 0, 25, 3, 2, 0, 42, 4, 1, 0, 35, 2, 3, 4, 28, 2, 2, 0, 3, 0, 0, 0, 42, 5, 2, 0, 35, 4, 3, 5, 28, 4, 4, 0, 47, 0, 0, 0, 42, 5, 3, 0, 52, 5, 0, 0, 42, 6, 4, 0, 35, 5, 3, 6, 28, 5, 7, 0, 47, 0, 0, 0, 42, 7, 5, 0, 51, 6, 7, 0, 47, 6, 0, 0, 42, 7, 3, 0, 52, 7, 0, 0, 42, 7, 6, 0, 35, 6, 3, 7, 28, 6, 4, 0, 47, 0, 0, 0, 42, 7, 7, 0, 52, 7, 0, 0, 4, 0, 0, 0, 115, 1, 1, 9, 0, 9, 0, 9, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 2, 13, 0, 13, 0, 13, 191, 254, 3, 0, 3, 0, 3, 3, 20, 0, 20, 0, 20, 0, 13, 0, 13, 0, 13, 191, 253, 3, 0, 3, 0, 3, 4, 13, 0, 13, 0, 13, 191, 252, 3, 218, 21, 218, 17, 218, 25, 218, 16, 218, 22, 218, 92, 44, 1, 0, 0, 47, 0, 0, 0, 42, 3, 0, 0, 51, 2, 3, 0, 25, 3, 2, 0, 42, 4, 1, 0, 48, 3, 4, 0, 42, 5, 2, 0, 51, 4, 5, 0, 47, 4, 0, 0, 42, 6, 3, 0, 51, 5, 6, 0, 47, 5, 0, 0, 42, 6, 4, 0, 51, 4, 6, 0, 47, 4, 0, 0, 42, 6, 2, 0, 51, 5, 6, 0, 42, 4, 5, 0, 48, 4, 5, 0, 42, 4, 6, 0, 52, 4, 0, 0, 122, 1, 1, 10, 0, 10, 0, 10, 0, 3, 1, 41, 0, 41, 0, 41, 0, 41, 0, 30, 0, 30, 0, 30, 0, 21, 0, 21, 0, 21, 0, 14, 0, 14, 0, 14, 0, 3, 0, 3, 0, 3, 0, 3, 44, 2, 0, 0, 38, 5, 0, 0, 35, 4, 5, 1, 28, 4, 5, 0, 42, 6, 0, 0, 51, 5, 6, 0, 25, 3, 5, 0, 26, 2, 0, 0, 25, 3, 1, 0, 25, 4, 3, 0, 42, 5, 1, 0, 47, 5, 0, 0, 51, 5, 4, 0, 6, 6, 5, 0, 42, 5, 1, 0, 48, 5, 6, 0, 65, 5, 0, 0, 42, 6, 2, 0, 49, 4, 5, 6, 42, 6, 3, 0, 47, 6, 0, 0, 42, 7, 4, 0, 51, 6, 7, 0, 47, 6, 0, 0, 42, 5, 5, 0, 52, 5, 0, 0, 129, 125, 1, 1, 3, 0, 3, 0, 3, 0, 16, 0, 16, 0, 3, 0, 3, 0, 3, 0, 3, 1, 35, 0, 35, 0, 35, 0, 32, 0, 14, 0, 14, 0, 14, 0, 14, 0, 14, 0, 14, 0, 14, 0, 14, 0, 14, 0, 3, 0, 3, 0, 3, 218, 61, 218, 101, 216, 6, 114, 101, 116, 117, 114, 110, 218, 87, 215, 0, 205, 0, 152, 0, 0, 7, 1, 1, 1, 0, 19, 206, 12, 105, 115, 45, 108, 101, 97, 112, 45, 121, 101, 97, 114, 218, 8, 44, 1, 0, 0, 41, 3, 144, 1, 13, 2, 0, 3, 41, 4, 0, 0, 35, 3, 4, 2, 25, 2, 3, 0, 28, 2, 2, 0, 3, 2, 0, 0, 41, 4, 4, 0, 13, 3, 0, 4, 41, 5, 0, 0, 35, 4, 5, 3, 25, 3, 4, 0, 28, 4, 5, 0, 41, 6, 100, 0, 13, 5, 0, 6, 40, 5, 0, 0, 3, 5, 0, 0, 3, 3, 0, 0, 129, 160, 1, 2, 10, 0, 10, 0, 5, 0, 5, 191, 255, 3, 0, 3, 0, 3, 2, 15, 0, 15, 0, 10, 0, 10, 0, 5, 0, 5, 1, 16, 0, 16, 0, 10, 0, 10, 191, 255, 5, 216, 9, 109, 97, 116, 104, 47, 99, 101, 105, 108, 42, 1, 0, 0, 51, 0, 1, 0, 25, 1, 0, 0, 41, 0, 0, 0, 48, 0, 1, 0, 42, 2, 1, 0, 51, 0, 2, 0, 42, 2, 2, 0, 47, 2, 0, 0, 51, 2, 0, 0, 41, 3, 7, 0, 7, 0, 3, 2, 25, 2, 0, 0, 42, 0, 3, 0, 47, 0, 0, 0, 51, 0, 1, 0, 5, 3, 0, 1, 25, 0, 3, 0, 70, 3, 0, 2, 28, 3, 52, 0, 41, 5, 4, 0, 69, 4, 2, 5, 28, 4, 7, 0, 43, 5, 0, 2, 41, 6, 4, 0, 48, 5, 6, 0, 42, 6, 4, 0, 51, 5, 6, 0, 26, 1, 0, 0, 41, 4, 255, 255, 48, 4, 1, 0, 42, 5, 1, 0, 51, 4, 5, 0, 42, 5, 2, 0, 47, 5, 0, 0, 51, 5, 4, 0, 41, 6, 7, 0, 7, 4, 6, 5, 25, 5, 4, 0, 36, 4, 5, 4, 25, 6, 4, 0, 28, 6, 3, 0, 25, 4, 6, 0, 26, 15, 0, 0, 42, 8, 5, 0, 47, 8, 0, 0, 51, 8, 1, 0, 5, 9, 8, 255, 47, 9, 0, 0, 42, 10, 6, 0, 51, 8, 10, 0, 25, 9, 8, 0, 28, 8, 4, 0, 36, 10, 5, 5, 25, 7, 10, 0, 26, 2, 0, 0, 25, 7, 9, 0, 25, 4, 7, 0, 28, 4, 7, 0, 43, 6, 0, 2, 41, 7, 53, 0, 48, 6, 7, 0, 42, 7, 4, 0, 51, 6, 7, 0, 26, 6, 0, 0, 43, 6, 0, 2, 41, 7, 52, 0, 48, 6, 7, 0, 42, 7, 4, 0, 51, 6, 7, 0, 26, 1, 0, 0, 7, 3, 0, 2, 10, 4, 3, 7, 47, 4, 0, 0, 42, 5, 7, 0, 51, 3, 5, 0, 25, 4, 3, 0, 41, 5, 4, 0, 69, 3, 2, 5, 28, 3, 3, 0, 5, 4, 4, 1, 26, 1, 0, 0, 43, 6, 0, 2, 36, 5, 6, 53, 25, 6, 5, 0, 28, 5, 14, 0, 41, 7, 1, 0, 48, 7, 1, 0, 42, 8, 1, 0, 51, 7, 8, 0, 42, 8, 2, 0, 47, 8, 0, 0, 51, 8, 7, 0, 41, 9, 7, 0, 7, 7, 9, 8, 41, 9, 4, 0, 69, 8, 7, 9, 25, 3, 8, 0, 26, 2, 0, 0, 25, 3, 6, 0, 28, 3, 3, 0, 41, 4, 1, 0, 26, 1, 0, 0, 43, 3, 0, 2, 48, 3, 4, 0, 42, 5, 4, 0, 51, 3, 5, 0, 43, 0, 0, 2, 48, 0, 3, 0, 67, 0, 0, 0, 3, 0, 0, 0, 191, 255, 129, 168, 16, 0, 16, 0, 5, 1, 32, 0, 32, 0, 32, 0, 32, 0, 31, 0, 31, 0, 31, 0, 26, 0, 26, 0, 5, 1, 23, 0, 23, 0, 23, 0, 20, 0, 5, 1, 9, 0, 5, 2, 15, 0, 15, 0, 11, 0, 38, 0, 38, 0, 38, 0, 38, 0, 38, 0, 11, 1, 48, 0, 48, 0, 48, 0, 48, 0, 47, 0, 47, 0, 47, 0, 42, 0, 42, 0, 11, 1, 19, 0, 15, 0, 15, 0, 15, 0, 15, 1, 41, 0, 41, 0, 41, 0, 38, 0, 24, 0, 24, 0, 24, 0, 19, 0, 19, 1, 24, 191, 255, 19, 0, 19, 0, 19, 191, 255, 15, 0, 11, 3, 15, 0, 15, 0, 15, 0, 15, 0, 15, 191, 253, 11, 4, 15, 0, 15, 0, 15, 0, 15, 0, 15, 191, 248, 5, 9, 32, 0, 29, 0, 18, 0, 18, 0, 18, 0, 5, 1, 9, 0, 9, 0, 5, 0, 32, 0, 5, 1, 14, 0, 14, 0, 9, 0, 9, 1, 24, 0, 24, 0, 24, 0, 24, 0, 23, 0, 23, 0, 23, 0, 18, 0, 18, 0, 14, 0, 14, 191, 255, 9, 0, 9, 0, 9, 0, 5, 2, 9, 191, 254, 5, 3, 5, 0, 5, 0, 5, 0, 5, 191, 238, 3, 0, 3, 0, 3, 0, 3, 129, 166, 1, 1, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 4, 0, 0, 0, 206, 52, 104, 116, 116, 112, 115, 58, 47, 47, 119, 119, 119, 46, 115, 116, 119, 110, 111, 46, 100, 101, 47, 105, 110, 102, 111, 109, 97, 120, 47, 100, 97, 116, 101, 110, 45, 101, 120, 116, 101, 114, 110, 47, 99, 115, 118, 47, 85, 78, 73, 45, 80, 47, 206, 4, 46, 99, 115, 118, 216, 6, 115, 116, 114, 105, 110, 103, 216, 10, 95, 48, 48, 48, 48, 56, 80, 103, 101, 116, 208, 4, 98, 111, 100, 121, 215, 0, 205, 0, 152, 0, 0, 5, 2, 1, 2, 2, 10, 206, 5, 112, 97, 114, 115, 101, 206, 21, 109, 101, 110, 115, 97, 47, 119, 101, 105, 114, 100, 45, 99, 115, 118, 46, 106, 97, 110, 101, 116, 215, 0, 205, 0, 152, 0, 0, 4, 1, 1, 1, 4, 9, 206, 15, 112, 97, 114, 115, 101, 45, 97, 110, 100, 45, 99, 108, 101, 97, 110, 218, 128, 140, 217, 218, 115, 115, 0, 11, 1, 191, 255, 4, 18, 7, 0, 7, 3, 12, 103, 111, 17, 15, 0, 6, 2, 19, 101, 7, 3, 24, 31, 24, 11, 0, 191, 255, 28, 0, 1, 32, 6, 2, 35, 73, 13, 38, 0, 11, 1, 191, 255, 42, 9, 45, 71, 6, 3, 50, 53, 56, 0, 1, 34, 0, 1, 59, 6, 3, 61, 65, 68, 7, 2, 65, 68, 0, 1, 13, 0, 1, 10, 1, 1, 7, 3, 50, 78, 50, 13, 81, 0, 11, 1, 191, 255, 85, 6, 2, 89, 98, 8, 92, 96, 7, 2, 50, 50, 1, 2, 9, 50, 71, 1, 0, 11, 0, 191, 255, 107, 7, 2, 53, 12, 6, 2, 56, 101, 218, 128, 128, 215, 0, 205, 0, 152, 0, 0, 3, 1, 1, 1, 2, 5, 206, 12, 117, 110, 101, 115, 99, 97, 112, 101, 45, 114, 111, 119, 218, 128, 140, 215, 0, 205, 0, 152, 0, 0, 4, 1, 1, 1, 3, 6, 206, 14, 117, 110, 101, 115, 99, 97, 112, 101, 45, 102, 105, 101, 108, 100, 218, 128, 140, 206, 2, 34, 34, 206, 1, 34, 216, 18, 115, 116, 114, 105, 110, 103, 47, 114, 101, 112, 108, 97, 99, 101, 45, 97, 108, 108, 44, 1, 0, 0, 42, 2, 0, 0, 42, 3, 1, 0, 49, 2, 3, 0, 42, 2, 2, 0, 52, 2, 0, 0, 27, 1, 1, 3, 0, 3, 0, 3, 0, 3, 0, 3, 216, 3, 109, 97, 112, 44, 1, 0, 0, 42, 2, 0, 0, 48, 2, 0, 0, 42, 2, 1, 0, 52, 2, 0, 0, 30, 1, 1, 3, 0, 3, 0, 3, 0, 3, 218, 128, 151, 44, 1, 0, 0, 42, 2, 0, 0, 48, 2, 0, 0, 42, 3, 1, 0, 51, 2, 3, 0, 42, 3, 2, 0, 48, 3, 2, 0, 42, 3, 3, 0, 52, 3, 0, 0, 33, 1, 1, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 215, 0, 205, 2, 186, 0, 0, 6, 1, 1, 1, 4, 18, 1, 206, 9, 104, 101, 97, 100, 101, 114, 105, 122, 101, 218, 128, 140, 216, 5, 102, 105, 114, 115, 116, 216, 7, 107, 101, 121, 119, 111, 114, 100, 218, 128, 151, 216, 11, 97, 114, 114, 97, 121, 47, 115, 108, 105, 99, 101, 44, 1, 0, 0, 47, 0, 0, 0, 42, 3, 0, 0, 51, 2, 3, 0, 42, 3, 1, 0, 48, 3, 2, 0, 42, 4, 2, 0, 51, 3, 4, 0, 25, 2, 3, 0, 41, 3, 1, 0, 48, 0, 3, 0, 42, 4, 3, 0, 51, 3, 4, 0, 25, 4, 3, 0, 46, 3, 0, 0, 48, 3, 4, 0, 42, 5, 2, 0, 52, 5, 0, 0, 205, 0, 208, 0, 0, 2, 1, 1, 1, 1, 4, 1, 218, 128, 140, 216, 7, 122, 105, 112, 99, 111, 108, 108, 43, 1, 0, 2, 48, 1, 0, 0, 42, 1, 0, 0, 52, 1, 0, 0, 191, 255, 41, 20, 0, 20, 0, 20, 0, 20, 38, 1, 1, 29, 0, 29, 0, 29, 0, 16, 0, 16, 0, 16, 0, 16, 0, 3, 1, 16, 0, 16, 0, 16, 0, 16, 191, 255, 3, 2, 10, 0, 5, 0, 5, 0, 5, 4, 0, 0, 0, 44, 2, 0, 0, 47, 0, 0, 0, 42, 4, 0, 0, 51, 3, 4, 0, 25, 4, 3, 0, 28, 1, 4, 0, 47, 4, 0, 0, 42, 3, 1, 0, 52, 3, 0, 0, 3, 4, 0, 0, 44, 1, 1, 14, 0, 14, 0, 14, 0, 3, 1, 5, 1, 7, 0, 7, 0, 7, 191, 255, 5, 218, 128, 154, 216, 5, 115, 108, 105, 99, 101, 218, 128, 151, 44, 1, 0, 0, 38, 4, 0, 0, 35, 3, 4, 0, 28, 3, 5, 0, 42, 5, 0, 0, 51, 4, 5, 0, 25, 2, 4, 0, 26, 2, 0, 0, 25, 2, 0, 0, 25, 3, 2, 0, 42, 4, 1, 0, 42, 5, 2, 0, 49, 4, 3, 5, 42, 5, 3, 0, 51, 4, 5, 0, 47, 4, 0, 0, 42, 6, 4, 0, 51, 5, 6, 0, 42, 4, 5, 0, 47, 4, 0, 0, 51, 4, 5, 0, 47, 4, 0, 0, 42, 6, 6, 0, 51, 5, 6, 0, 25, 4, 5, 0, 47, 4, 0, 0, 42, 7, 7, 0, 51, 6, 7, 0, 25, 7, 6, 0, 46, 8, 0, 0, 41, 9, 1, 0, 41, 10, 255, 255, 49, 4, 9, 10, 42, 10, 8, 0, 51, 9, 10, 0, 48, 8, 9, 0, 42, 11, 9, 0, 51, 10, 11, 0, 25, 8, 10, 0, 3, 8, 0, 0, 205, 0, 208, 0, 0, 9, 1, 1, 1, 0, 17, 1, 218, 5, 66, 1, 0, 0, 25, 2, 1, 0, 41, 3, 0, 0, 61, 4, 0, 0, 25, 5, 4, 0, 33, 4, 3, 5, 28, 4, 10, 0, 25, 6, 3, 0, 47, 6, 0, 0, 43, 8, 0, 7, 51, 7, 8, 0, 47, 6, 0, 0, 51, 8, 0, 0, 58, 2, 7, 8, 5, 3, 3, 1, 26, 246, 255, 255, 3, 2, 0, 0, 191, 255, 10, 36, 0, 36, 0, 49, 0, 68, 0, 49, 0, 49, 0, 49, 0, 49, 0, 90, 0, 90, 0, 90, 0, 102, 0, 102, 0, 81, 0, 49, 0, 49, 0, 28, 6, 1, 1, 3, 0, 3, 0, 3, 0, 24, 0, 24, 0, 3, 0, 3, 0, 3, 0, 3, 1, 45, 0, 45, 0, 45, 0, 45, 0, 45, 0, 35, 0, 35, 0, 35, 0, 34, 0, 34, 0, 34, 0, 17, 0, 17, 0, 17, 0, 3, 1, 16, 0, 16, 0, 16, 0, 3, 1, 28, 0, 115, 0, 115, 0, 115, 0, 115, 0, 115, 0, 23, 0, 23, 0, 23, 0, 3, 191, 252, 1, 128, 0, 0, 0, 206, 2, 37, 80, 218, 91, 216, 5, 112, 114, 105, 110, 116, 216, 7, 111, 115, 47, 101, 120, 105, 116, 218, 13, 206, 15, 78, 111, 116, 32, 105, 109, 112, 108, 101, 109, 101, 110, 116, 101, 100, 206, 23, 67, 111, 109, 109, 97, 110, 100, 32, 100, 111, 101, 115, 32, 110, 111, 116, 32, 101, 120, 105, 115, 116, 33, 216, 6, 101, 112, 114, 105, 110, 116, 44, 2, 0, 0, 61, 3, 1, 0, 36, 4, 3, 0, 28, 4, 18, 0, 42, 5, 0, 0, 51, 3, 5, 0, 42, 5, 1, 0, 48, 5, 3, 0, 42, 6, 2, 0, 51, 5, 6, 0, 47, 5, 0, 0, 42, 6, 3, 0, 51, 3, 6, 0, 47, 3, 0, 0, 42, 6, 3, 0, 51, 5, 6, 0, 41, 3, 0, 0, 47, 3, 0, 0, 42, 5, 4, 0, 51, 3, 5, 0, 26, 1, 0, 0, 42, 4, 5, 0, 35, 3, 1, 4, 28, 3, 4, 0, 42, 4, 6, 0, 1, 4, 0, 0, 4, 0, 0, 0, 42, 4, 7, 0, 47, 4, 0, 0, 42, 4, 8, 0, 52, 4, 0, 0, 4, 0, 0, 0, 3, 1, 1, 10, 0, 7, 0, 3, 2, 43, 0, 43, 0, 23, 0, 23, 0, 23, 0, 23, 0, 16, 0, 16, 0, 16, 0, 9, 0, 9, 0, 9, 1, 9, 0, 9, 0, 9, 0, 9, 191, 253, 3, 4, 3, 0, 3, 0, 3, 1, 13, 0, 13, 0, 13, 1, 7, 0, 7, 0, 7, 0, 7, 191, 254, 3};

const unsigned char *janet_payload_image_embed = bytes;
size_t janet_payload_image_embed_size = sizeof(bytes);
extern void janet_module_entry_spork_47_json(JanetTable *);
extern void janet_module_entry_spork_47_tarray(JanetTable *);
extern void janet_module_entry_http(JanetTable *);

int main(int argc, const char **argv) {

#if defined(JANET_PRF)
    uint8_t hash_key[JANET_HASH_KEY_SIZE + 1];
#ifdef JANET_REDUCED_OS
    char *envvar = NULL;
#else
    char *envvar = getenv("JANET_HASHSEED");
#endif
    if (NULL != envvar) {
        strncpy((char *) hash_key, envvar, sizeof(hash_key) - 1);
    } else if (janet_cryptorand(hash_key, JANET_HASH_KEY_SIZE) != 0) {
        fputs("unable to initialize janet PRF hash function.\n", stderr);
        return 1;
    }
    janet_init_hash_key(hash_key);
#endif

    janet_init();

    /* Get core env */
JanetTable *env = janet_core_env(NULL);
JanetTable *lookup = janet_env_lookup(env);
JanetTable *temptab;
int handle = janet_gclock();    temptab = janet_table(0);
    temptab->proto = env;
    janet_module_entry_spork_47_json(temptab);
    janet_env_lookup_into(lookup, temptab, "_00008N", 0);

    temptab = janet_table(0);
    temptab->proto = env;
    janet_module_entry_spork_47_tarray(temptab);
    janet_env_lookup_into(lookup, temptab, "_00008O", 0);

    temptab = janet_table(0);
    temptab->proto = env;
    janet_module_entry_http(temptab);
    janet_env_lookup_into(lookup, temptab, "_00008P", 0);

    /* Unmarshal bytecode */
    Janet marsh_out = janet_unmarshal(
      janet_payload_image_embed,
      janet_payload_image_embed_size,
      0,
      lookup,
      NULL);

    /* Verify the marshalled object is a function */
    if (!janet_checktype(marsh_out, JANET_FUNCTION)) {
        fprintf(stderr, "invalid bytecode image - expected function.");
        return 1;
    }
    JanetFunction *jfunc = janet_unwrap_function(marsh_out);

    /* Check arity */
    janet_arity(argc, jfunc->def->min_arity, jfunc->def->max_arity);

    /* Collect command line arguments */
    JanetArray *args = janet_array(argc);
    for (int i = 0; i < argc; i++) {
        janet_array_push(args, janet_cstringv(argv[i]));
    }

    /* Create enviornment */
    temptab = env;
    janet_table_put(temptab, janet_ckeywordv("args"), janet_wrap_array(args));
    janet_gcroot(janet_wrap_table(temptab));

    /* Unlock GC */
    janet_gcunlock(handle);

    /* Run everything */
    JanetFiber *fiber = janet_fiber(jfunc, 64, argc, argc ? args->data : NULL);
    fiber->env = temptab;
#ifdef JANET_EV
    janet_gcroot(janet_wrap_fiber(fiber));
    janet_schedule(fiber, janet_wrap_nil());
    janet_loop();
    int status = janet_fiber_status(fiber);
    janet_deinit();
    return status;
#else
    Janet out;
    JanetSignal result = janet_continue(fiber, janet_wrap_nil(), &out);
    if (result != JANET_SIGNAL_OK && result != JANET_SIGNAL_EVENT) {
      janet_stacktrace(fiber, out);
      janet_deinit();
      return result;
    }
    janet_deinit();
    return 0;
#endif
}