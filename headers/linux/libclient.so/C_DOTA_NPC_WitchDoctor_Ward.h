#pragma once

class C_DOTA_NPC_WitchDoctor_Ward : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B34]; // offset 0x0
    ParticleIndex_t m_nFXSkullIndex; // offset 0x1B34, size 0x4, align 255
    int32 m_nTargetType; // offset 0x1B38, size 0x4, align 4
    int32 m_nTargetFlags; // offset 0x1B3C, size 0x4, align 4
};
