#pragma once

class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier /*0x0*/  // sizeof 0x638, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bLastShotInFlight; // offset 0x138, size 0x1, align 1
    bool m_bBonusTracked; // offset 0x139, size 0x1, align 1
    char _pad_013A[0x2]; // offset 0x13A
    int32 m_nHitCounter; // offset 0x13C, size 0x4, align 4
    int32 m_nTotalBurstFireShots; // offset 0x140, size 0x4, align 4
    int32 m_nInitialzedClipSize; // offset 0x144, size 0x4, align 4
    int32 m_nBonusPitch; // offset 0x148, size 0x4, align 4
    bool m_bInitialized; // offset 0x14C, size 0x1, align 1
    char _pad_014D[0x3]; // offset 0x14D
    int32 m_nIncreasedBurstShotCount; // offset 0x150, size 0x4, align 4
    float32 m_flIntraBurstCycleTime; // offset 0x154, size 0x4, align 4
    float32 m_flCycleTimePct; // offset 0x158, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0x15C, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x4D4]; // offset 0x164
};
