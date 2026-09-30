#pragma once

class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bActivated; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x3]; // offset 0x14A9
    ParticleIndex_t m_nFxIndex; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x210]; // offset 0x14B0
};
