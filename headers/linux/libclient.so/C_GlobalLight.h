#pragma once

class C_GlobalLight : public C_BaseEntity /*0x0*/, public CGlobalLightBase /*0x770*/  // sizeof 0xCB0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC84]; // offset 0x0
    uint16 m_WindClothForceHandle; // offset 0xC84, size 0x2, align 2 | MNotSaved
    char _pad_0C86[0x2A]; // offset 0xC86
};
