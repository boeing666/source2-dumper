#pragma once

class CDOTA_Ability_Spectre_Reality : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    int32 may_target_shadow_step; // offset 0x86C, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x870, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x874, size 0xC, align 4
    VectorWS m_vIllusionLocation; // offset 0x880, size 0xC, align 4
    CHandle< CBaseEntity > m_hIllusion; // offset 0x88C, size 0x4, align 4
};
