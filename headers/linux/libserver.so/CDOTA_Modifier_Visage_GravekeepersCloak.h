#pragma once

class CDOTA_Modifier_Visage_GravekeepersCloak : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage_reduction; // offset 0x1A78, size 0x4, align 4
    int32 max_layers; // offset 0x1A7C, size 0x4, align 4
    float32 minimum_damage; // offset 0x1A80, size 0x4, align 4
    float32 minimum_damage_familiars; // offset 0x1A84, size 0x4, align 4
    int32 recovery_time; // offset 0x1A88, size 0x4, align 4
    float32 radius; // offset 0x1A8C, size 0x4, align 4
    float32 max_damage_reduction; // offset 0x1A90, size 0x4, align 4
    int32 armor; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t[4] m_nFXIndex; // offset 0x1A98, size 0x10, align 4
    ParticleIndex_t m_nFXIndexB; // offset 0x1AA8, size 0x4, align 255
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< CDOTA_Modifier_Visage_GravekeepersCloak_Stack* > m_vecStacks; // offset 0x1AB0, size 0x18, align 8
};
