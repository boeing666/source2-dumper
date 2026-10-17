#pragma once

class CDOTA_Modifier_Visage_GravekeepersCloak : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_reduction; // offset 0x1AA8, size 0x4, align 4
    int32 max_layers; // offset 0x1AAC, size 0x4, align 4
    float32 minimum_damage; // offset 0x1AB0, size 0x4, align 4
    float32 minimum_damage_familiars; // offset 0x1AB4, size 0x4, align 4
    int32 recovery_time; // offset 0x1AB8, size 0x4, align 4
    float32 radius; // offset 0x1ABC, size 0x4, align 4
    float32 max_damage_reduction; // offset 0x1AC0, size 0x4, align 4
    int32 armor; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t[4] m_nFXIndex; // offset 0x1AC8, size 0x10, align 4
    ParticleIndex_t m_nFXIndexB; // offset 0x1AD8, size 0x4, align 255
    char _pad_1ADC[0x4]; // offset 0x1ADC
    CUtlVector< CDOTA_Modifier_Visage_GravekeepersCloak_Stack* > m_vecStacks; // offset 0x1AE0, size 0x18, align 8
};
