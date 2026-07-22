#pragma once

class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iCurJumpCount; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1A5C, size 0xC, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1A68, size 0x18, align 8
    float32 m_fProcChance; // offset 0x1A80, size 0x4, align 4
    int32 m_nCastRange; // offset 0x1A84, size 0x4, align 4
    int32 m_nBounceRadius; // offset 0x1A88, size 0x4, align 4
    int32 m_nDamageRadius; // offset 0x1A8C, size 0x4, align 4
    int32 m_nDamage; // offset 0x1A90, size 0x4, align 4
    int32 m_nMaxTargets; // offset 0x1A94, size 0x4, align 4
};
