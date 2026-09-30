#pragma once

class INavPathCost  // sizeof 0x10, align 0xFF [vtable abstract] (navlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    NavHull_t m_navHull; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
};
