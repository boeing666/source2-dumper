#pragma once

class CDOTA_Ability_Tusk_WalrusKick : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nTargetFXIndex; // offset 0x6A8, size 0x4, align 255
    VectorWS m_vEndpoint; // offset 0x6AC, size 0xC, align 4
    float32 landing_radius; // offset 0x6B8, size 0x4, align 4
    float32 push_length; // offset 0x6BC, size 0x4, align 4
};
