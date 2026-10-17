#pragma once

class CDOTA_Modifier_Viper_Nethertoxin_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius_increase; // offset 0x1AA8, size 0x4, align 4
    float32 m_flCurrentRadius; // offset 0x1AAC, size 0x4, align 4
    CUtlVector< ParticleIndex_t > m_vParticleList; // offset 0x1AB0, size 0x18, align 8
};
