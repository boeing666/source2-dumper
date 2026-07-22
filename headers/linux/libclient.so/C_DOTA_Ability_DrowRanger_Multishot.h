#pragma once

class C_DOTA_Ability_DrowRanger_Multishot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x824, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x830, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x834, size 0x4, align 4
    float32 arrow_speed; // offset 0x838, size 0x4, align 4
    int32 arrow_spread; // offset 0x83C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets0; // offset 0x840, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets1; // offset 0x858, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets2; // offset 0x870, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets3; // offset 0x888, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets4; // offset 0x8A0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets5; // offset 0x8B8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vHitTargets6; // offset 0x8D0, size 0x18, align 8
};
