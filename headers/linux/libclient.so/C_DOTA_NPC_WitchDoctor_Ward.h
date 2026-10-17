#pragma once

class C_DOTA_NPC_WitchDoctor_Ward : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C3C]; // offset 0x0
    ParticleIndex_t m_nFXSkullIndex; // offset 0x1C3C, size 0x4, align 255
    int32 m_nTargetType; // offset 0x1C40, size 0x4, align 4
    int32 m_nTargetFlags; // offset 0x1C44, size 0x4, align 4
};
