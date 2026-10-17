#pragma once

class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1AAC, size 0x4, align 4
};
