#pragma once

class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    bool m_bActivated; // offset 0x14B0, size 0x1, align 1
    char _pad_14B1[0x3]; // offset 0x14B1
    ParticleIndex_t m_nFxIndex; // offset 0x14B4, size 0x4, align 255
    char _pad_14B8[0x210]; // offset 0x14B8
};
