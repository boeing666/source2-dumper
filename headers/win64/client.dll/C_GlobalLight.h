#pragma once

class C_GlobalLight : public C_BaseEntity /*0x0*/, public CGlobalLightBase /*0x600*/  // sizeof 0xAF0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    uint16 m_WindClothForceHandle; // offset 0xAC0, size 0x2, align 2 | MNotSaved
    char _pad_0AC2[0x2E]; // offset 0xAC2
};
