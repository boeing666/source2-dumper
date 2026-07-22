#pragma once

class CDOTA_Ability_DrowRanger_Multishot : public CDOTABaseAbility /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x868, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x86C, size 0x4, align 4
    float32 arrow_speed; // offset 0x870, size 0x4, align 4
    int32 arrow_spread; // offset 0x874, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets0; // offset 0x878, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets1; // offset 0x890, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets2; // offset 0x8A8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets3; // offset 0x8C0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets4; // offset 0x8D8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets5; // offset 0x8F0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets6; // offset 0x908, size 0x18, align 8
};
