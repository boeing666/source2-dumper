#pragma once

class CCitadel_Item_ShadowStep : public CCitadel_Item /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x16C0]; // offset 0x0
    ParticleIndex_t m_nCastDelayParticleIndex; // offset 0x16C0, size 0x4, align 255
    GameTime_t m_flLastTickTime; // offset 0x16C4, size 0x4, align 255
};
