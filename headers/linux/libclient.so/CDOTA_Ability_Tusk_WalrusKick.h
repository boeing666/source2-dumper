#pragma once

class CDOTA_Ability_Tusk_WalrusKick : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nTargetFXIndex; // offset 0x824, size 0x4, align 255
    VectorWS m_vEndpoint; // offset 0x828, size 0xC, align 4
    float32 landing_radius; // offset 0x834, size 0x4, align 4
    float32 push_length; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
