#pragma once

class CDOTA_Modifier_AghsFort_ShadowWaveEffectPotion : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_iCurJumpCount; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1AAC, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AB8, size 0x18, align 8
    float32 m_fProcChance; // offset 0x1AD0, size 0x4, align 4
    int32 m_nCastRange; // offset 0x1AD4, size 0x4, align 4
    int32 m_nBounceRadius; // offset 0x1AD8, size 0x4, align 4
    int32 m_nDamageRadius; // offset 0x1ADC, size 0x4, align 4
    int32 m_nDamage; // offset 0x1AE0, size 0x4, align 4
    int32 m_nMaxTargets; // offset 0x1AE4, size 0x4, align 4
};
