#pragma once

class CDOTA_Ability_NianCharge : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    bool m_bChargeFinished; // offset 0x86C, size 0x1, align 1
    bool m_bPlayedChargeAnimation; // offset 0x86D, size 0x1, align 1
    bool m_bPinning; // offset 0x86E, size 0x1, align 1
    char _pad_086F[0x1]; // offset 0x86F
    GameTime_t m_flPinStartTime; // offset 0x870, size 0x4, align 255
    VectorWS m_vProjectileLocation; // offset 0x874, size 0xC, align 4
    VectorWS m_vTargetLocation; // offset 0x880, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x88C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits; // offset 0x890, size 0x18, align 8
    CUtlVector< CDOTA_Tree* > m_hTrackingProjectileTrees; // offset 0x8A8, size 0x18, align 8
    int32 nFXIndex; // offset 0x8C0, size 0x4, align 4
    int32 m_iCurProjectileIndex; // offset 0x8C4, size 0x4, align 4
};
