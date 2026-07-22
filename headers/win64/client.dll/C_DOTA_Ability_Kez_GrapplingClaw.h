#pragma once

class C_DOTA_Ability_Kez_GrapplingClaw : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x6B0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6B4, size 0x4, align 4
};
