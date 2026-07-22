#pragma once

class CDOTA_Ability_Aghsfort_Elemental_Wisp_Tether : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x86C, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x870, size 0xC, align 4
    bool m_bProjectileActive; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
    int32 latch_distance; // offset 0x880, size 0x4, align 4
    int32 m_iProjectileIndex; // offset 0x884, size 0x4, align 4
};
