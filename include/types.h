#ifndef TYPES_H
#define TYPES_H

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long long int64_t;

typedef uint32_t size_t;
typedef uint32_t uintptr_t;

#define NULL ((void*)0)

#define FB_WIDTH 1024
#define FB_HEIGHT 768
#define FB_BPP 32
#define FB_BASE 0xFD000000

#define XFCE_PRELOAD_BASE 0x400000
#define XFCE_PRELOAD_SIZE 0x800000

#define L2_CACHE_SIZE 0x40000
#define L2_CACHE_BASE 0x20000

#define HEAP_START 0x100000
#define HEAP_SIZE 0x200000

#define COLOR_BG 0x2E3440
#define COLOR_FG 0xECEFF4
#define COLOR_PANEL 0x3B4252
#define COLOR_BORDER 0x4C566A
#define COLOR_TITLE 0x5E81AC
#define COLOR_ACCENT 0x88C0D0
#define COLOR_ACTIVE 0x8FBCBB

#endif