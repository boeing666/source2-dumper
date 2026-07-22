#pragma once

class FourQuaternions  // sizeof 0x40, align 0xFF [trivial_ctor trivial_dtor] (mathlib_extended)
{
public:
    fltx4 x; // offset 0x0, size 0x10, align 16
    fltx4 y; // offset 0x10, size 0x10, align 16
    fltx4 z; // offset 0x20, size 0x10, align 16
    fltx4 w; // offset 0x30, size 0x10, align 16
};
