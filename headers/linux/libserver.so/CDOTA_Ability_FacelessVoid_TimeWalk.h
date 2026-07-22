#pragma once

class CDOTA_Ability_FacelessVoid_TimeWalk : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    CHandle< CDOTABaseAbility > m_hSourceAbilityForStolen; // offset 0x86C, size 0x4, align 4
    int32 speed; // offset 0x870, size 0x4, align 4
    int32 range; // offset 0x874, size 0x4, align 4
    float32 radius; // offset 0x878, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x87C, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x880, size 0xC, align 4
    VectorWS m_vStartLocation; // offset 0x88C, size 0xC, align 4
};
