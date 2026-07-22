#pragma once

class CDOTA_Ability_DrowRanger_Multishot : public CDOTABaseAbility /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x58C, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x590, size 0x4, align 4
    float32 arrow_speed; // offset 0x594, size 0x4, align 4
    int32 arrow_spread; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets0; // offset 0x5A0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets1; // offset 0x5B8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets2; // offset 0x5D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets3; // offset 0x5E8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets4; // offset 0x600, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets5; // offset 0x618, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets6; // offset 0x630, size 0x18, align 8
};
