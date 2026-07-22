#pragma once

class Extent  // sizeof 0x18, align 0xFF [trivial_dtor] (navlib)
{
public:
    VectorWS lo; // offset 0x0, size 0xC, align 4
    VectorWS hi; // offset 0xC, size 0xC, align 4
};
