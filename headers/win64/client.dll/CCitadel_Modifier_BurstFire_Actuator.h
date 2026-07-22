#pragma once

class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier /*0x0*/  // sizeof 0x470, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bLastShotInFlight; // offset 0xC0, size 0x1, align 1
    bool m_bBonusTracked; // offset 0xC1, size 0x1, align 1
    char _pad_00C2[0x2]; // offset 0xC2
    int32 m_nHitCounter; // offset 0xC4, size 0x4, align 4
    int32 m_nTotalBurstFireShots; // offset 0xC8, size 0x4, align 4
    int32 m_nInitialzedClipSize; // offset 0xCC, size 0x4, align 4
    int32 m_nBonusPitch; // offset 0xD0, size 0x4, align 4
    bool m_bInitialized; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x3]; // offset 0xD5
    int32 m_nIncreasedBurstShotCount; // offset 0xD8, size 0x4, align 4
    float32 m_flIntraBurstCycleTime; // offset 0xDC, size 0x4, align 4
    float32 m_flCycleTimePct; // offset 0xE0, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0xE4, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x384]; // offset 0xEC
};
