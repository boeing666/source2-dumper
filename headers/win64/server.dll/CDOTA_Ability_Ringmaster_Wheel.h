#pragma once

class CDOTA_Ability_Ringmaster_Wheel : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    int32 min_range; // offset 0x58C, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x590, size 0x4, align 4
    float32 knockback_radius; // offset 0x594, size 0x4, align 4
    CountdownTimer m_PathTimer; // offset 0x598, size 0x18, align 8
    char _pad_05B0[0x18]; // offset 0x5B0
    CUtlVector< CHandle< CBaseEntity > > m_hPushedEntities; // offset 0x5C8, size 0x18, align 8
};
