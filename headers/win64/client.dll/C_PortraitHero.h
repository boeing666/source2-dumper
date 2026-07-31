#pragma once

class C_PortraitHero : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1A00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    HeroID_t m_nHeroID; // offset 0x19B8, size 0x4, align 255
    int32 m_actQueuedActivity; // offset 0x19BC, size 0x4, align 4
    char[64] m_szQueuedActivityModifier; // offset 0x19C0, size 0x40, align 1
};
