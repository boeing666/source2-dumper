#pragma once

class CDOTA_Ability_Tusk_WalrusKick : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nTargetFXIndex; // offset 0x85C, size 0x4, align 255
    VectorWS m_vEndpoint; // offset 0x860, size 0xC, align 4
    float32 landing_radius; // offset 0x86C, size 0x4, align 4
    float32 push_length; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
