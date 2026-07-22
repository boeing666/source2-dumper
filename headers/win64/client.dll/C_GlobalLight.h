#pragma once

class C_GlobalLight : public C_BaseEntity /*0x0*/, public CGlobalLightBase /*0x5F0*/  // sizeof 0xB40, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB10]; // offset 0x0
    uint16 m_WindClothForceHandle; // offset 0xB10, size 0x2, align 2 | MNotSaved
    char _pad_0B12[0x2E]; // offset 0xB12
};
