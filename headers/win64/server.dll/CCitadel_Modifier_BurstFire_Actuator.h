#pragma once

class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier /*0x0*/  // sizeof 0x648, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bLastShotInFlight; // offset 0x148, size 0x1, align 1
    bool m_bBonusTracked; // offset 0x149, size 0x1, align 1
    char _pad_014A[0x2]; // offset 0x14A
    int32 m_nHitCounter; // offset 0x14C, size 0x4, align 4
    int32 m_nTotalBurstFireShots; // offset 0x150, size 0x4, align 4
    int32 m_nInitialzedClipSize; // offset 0x154, size 0x4, align 4
    int32 m_nBonusPitch; // offset 0x158, size 0x4, align 4
    bool m_bInitialized; // offset 0x15C, size 0x1, align 1
    char _pad_015D[0x3]; // offset 0x15D
    int32 m_nIncreasedBurstShotCount; // offset 0x160, size 0x4, align 4
    float32 m_flIntraBurstCycleTime; // offset 0x164, size 0x4, align 4
    float32 m_flCycleTimePct; // offset 0x168, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0x16C, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0x170, size 0x4, align 4
    char _pad_0174[0x4D4]; // offset 0x174
};
