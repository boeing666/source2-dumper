#pragma once

class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_Disable : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nCasterFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1A7C, size 0x4, align 255
};
