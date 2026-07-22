#pragma once

class C_PortraitHero : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1B80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B34]; // offset 0x0
    HeroID_t m_nHeroID; // offset 0x1B34, size 0x4, align 255
    int32 m_actQueuedActivity; // offset 0x1B38, size 0x4, align 4
    char[64] m_szQueuedActivityModifier; // offset 0x1B3C, size 0x40, align 1
    char _pad_1B7C[0x4]; // offset 0x1B7C
};
