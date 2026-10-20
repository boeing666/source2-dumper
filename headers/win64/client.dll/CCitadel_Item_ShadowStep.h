#pragma once

class CCitadel_Item_ShadowStep : public CCitadel_Item /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x18F0]; // offset 0x0
    ParticleIndex_t m_nCastDelayParticleIndex; // offset 0x18F0, size 0x4, align 255
    GameTime_t m_flLastTickTime; // offset 0x18F4, size 0x4, align 255
};
