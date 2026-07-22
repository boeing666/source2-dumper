#pragma once

class CDOTA_Ability_Aghsfort_Elemental_Wisp_Tether : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x590, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x594, size 0xC, align 4
    bool m_bProjectileActive; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x3]; // offset 0x5A1
    int32 latch_distance; // offset 0x5A4, size 0x4, align 4
    int32 m_iProjectileIndex; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
};
