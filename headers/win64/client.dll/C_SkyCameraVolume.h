#pragma once

class C_SkyCameraVolume : public C_BaseEntity /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    Vector m_vBoxMins; // offset 0x618, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x624, size 0xC, align 4
    CHandle< C_SkyCameraVolumeTarget > m_hTarget; // offset 0x630, size 0x4, align 4
    int32 m_nPriority; // offset 0x634, size 0x4, align 4
    bool m_bIsEnabled; // offset 0x638, size 0x1, align 1
    bool m_bSkyboxBlurEffect; // offset 0x639, size 0x1, align 1
    char _pad_063A[0x2]; // offset 0x63A
    Vector m_vBlurOrigin; // offset 0x63C, size 0xC, align 4
    bool m_bSkyboxReceivesWorldCsm; // offset 0x648, size 0x1, align 1
    bool m_bWorldReceivesSkyboxCsm; // offset 0x649, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x64A, size 0x1, align 1
    char _pad_064B[0x5]; // offset 0x64B
    CUtlSymbolLarge m_iszTargetName; // offset 0x650, size 0x8, align 8
};
