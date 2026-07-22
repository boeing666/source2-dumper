#pragma once

class C_DOTA_Ability_DrowRanger_Multishot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x6A8, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x6B4, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x6B8, size 0x4, align 4
    float32 arrow_speed; // offset 0x6BC, size 0x4, align 4
    int32 arrow_spread; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets0; // offset 0x6C8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets1; // offset 0x6E0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets2; // offset 0x6F8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets3; // offset 0x710, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets4; // offset 0x728, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets5; // offset 0x740, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets6; // offset 0x758, size 0x18, align 8
};
