#pragma once

class CDOTA_Ability_Kez_GrapplingClaw : public CDOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x588]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x588, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x58C, size 0x4, align 4
};
