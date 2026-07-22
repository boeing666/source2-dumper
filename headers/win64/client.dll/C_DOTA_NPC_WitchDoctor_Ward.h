#pragma once

class C_DOTA_NPC_WitchDoctor_Ward : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    ParticleIndex_t m_nFXSkullIndex; // offset 0x19B0, size 0x4, align 255
    int32 m_nTargetType; // offset 0x19B4, size 0x4, align 4
    int32 m_nTargetFlags; // offset 0x19B8, size 0x4, align 4
    char _pad_19BC[0x4]; // offset 0x19BC
};
