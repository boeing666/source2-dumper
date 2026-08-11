#pragma once

class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier /*0x0*/  // sizeof 0x480, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bLastShotInFlight; // offset 0xD0, size 0x1, align 1
    bool m_bBonusTracked; // offset 0xD1, size 0x1, align 1
    char _pad_00D2[0x2]; // offset 0xD2
    int32 m_nHitCounter; // offset 0xD4, size 0x4, align 4
    int32 m_nTotalBurstFireShots; // offset 0xD8, size 0x4, align 4
    int32 m_nInitialzedClipSize; // offset 0xDC, size 0x4, align 4
    int32 m_nBonusPitch; // offset 0xE0, size 0x4, align 4
    bool m_bInitialized; // offset 0xE4, size 0x1, align 1
    char _pad_00E5[0x3]; // offset 0xE5
    int32 m_nIncreasedBurstShotCount; // offset 0xE8, size 0x4, align 4
    float32 m_flIntraBurstCycleTime; // offset 0xEC, size 0x4, align 4
    float32 m_flCycleTimePct; // offset 0xF0, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0xF4, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0xF8, size 0x4, align 4
    char _pad_00FC[0x384]; // offset 0xFC
};
