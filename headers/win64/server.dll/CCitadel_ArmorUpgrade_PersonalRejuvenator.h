#pragma once

class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    bool m_bActivated; // offset 0xF78, size 0x1, align 1
    char _pad_0F79[0x3]; // offset 0xF79
    ParticleIndex_t m_nFxIndex; // offset 0xF7C, size 0x4, align 255
    char _pad_0F80[0x180]; // offset 0xF80
};
