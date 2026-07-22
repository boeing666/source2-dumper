#pragma once

class CDOTA_Ability_Spectre_Reality : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    int32 may_target_shadow_step; // offset 0x590, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x594, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x598, size 0xC, align 4
    VectorWS m_vIllusionLocation; // offset 0x5A4, size 0xC, align 4
    CHandle< CBaseEntity > m_hIllusion; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
