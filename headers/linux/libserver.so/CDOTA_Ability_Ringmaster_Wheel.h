#pragma once

class CDOTA_Ability_Ringmaster_Wheel : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    int32 min_range; // offset 0x868, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x86C, size 0x4, align 4
    float32 knockback_radius; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
    CountdownTimer m_PathTimer; // offset 0x878, size 0x18, align 8
    char _pad_0890[0x18]; // offset 0x890
    CUtlVector< CHandle< CBaseEntity > > m_hPushedEntities; // offset 0x8A8, size 0x18, align 8
};
