#pragma once

class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    bool m_bFinished; // offset 0x86C, size 0x1, align 1
    bool m_bInterrupted; // offset 0x86D, size 0x1, align 1
    bool m_bPlayedChargeAnimation; // offset 0x86E, size 0x1, align 1
    char _pad_086F[0x1]; // offset 0x86F
    VectorWS m_vProjectileLocation; // offset 0x870, size 0xC, align 4
    VectorWS m_vTargetLocation; // offset 0x87C, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
    CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits; // offset 0x890, size 0x18, align 8
    CUtlVector< CDOTA_Tree* > m_hTrackingProjectileTrees; // offset 0x8A8, size 0x18, align 8
    int32 nFXIndex; // offset 0x8C0, size 0x4, align 4
    int32 m_iCurProjectileIndex; // offset 0x8C4, size 0x4, align 4
    int32 m_nBashIndex; // offset 0x8C8, size 0x4, align 4
    VectorWS m_vChargeStartPos; // offset 0x8CC, size 0xC, align 4
};
