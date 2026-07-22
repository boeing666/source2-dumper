#pragma once

class C_GlobalLight : public C_BaseEntity /*0x0*/, public CGlobalLightBase /*0x780*/  // sizeof 0xC70, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    uint16 m_WindClothForceHandle; // offset 0xC40, size 0x2, align 2 | MNotSaved
    char _pad_0C42[0x2E]; // offset 0xC42
};
