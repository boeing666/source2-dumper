#pragma once

class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    bool m_bFinished; // offset 0x590, size 0x1, align 1
    bool m_bInterrupted; // offset 0x591, size 0x1, align 1
    bool m_bPlayedChargeAnimation; // offset 0x592, size 0x1, align 1
    char _pad_0593[0x1]; // offset 0x593
    VectorWS m_vProjectileLocation; // offset 0x594, size 0xC, align 4
    VectorWS m_vTargetLocation; // offset 0x5A0, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x5AC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits; // offset 0x5B0, size 0x18, align 8
    CUtlVector< CDOTA_Tree* > m_hTrackingProjectileTrees; // offset 0x5C8, size 0x18, align 8
    int32 nFXIndex; // offset 0x5E0, size 0x4, align 4
    int32 m_iCurProjectileIndex; // offset 0x5E4, size 0x4, align 4
    int32 m_nBashIndex; // offset 0x5E8, size 0x4, align 4
    VectorWS m_vChargeStartPos; // offset 0x5EC, size 0xC, align 4
};
