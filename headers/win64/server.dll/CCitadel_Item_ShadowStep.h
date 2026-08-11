#pragma once

class CCitadel_Item_ShadowStep : public CCitadel_Item /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x10F8]; // offset 0x0
    ParticleIndex_t m_nCastDelayParticleIndex; // offset 0x10F8, size 0x4, align 255
    GameTime_t m_flLastTickTime; // offset 0x10FC, size 0x4, align 255
};
