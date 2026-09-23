#pragma once

class CSkyCameraVolume : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    Vector m_vBoxMins; // offset 0x4C0, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4CC, size 0xC, align 4
    CHandle< CSkyCameraVolumeTarget > m_hTarget; // offset 0x4D8, size 0x4, align 4
    int32 m_nPriority; // offset 0x4DC, size 0x4, align 4
    bool m_bIsEnabled; // offset 0x4E0, size 0x1, align 1
    bool m_bSkyboxBlurEffect; // offset 0x4E1, size 0x1, align 1
    char _pad_04E2[0x2]; // offset 0x4E2
    Vector m_vBlurOrigin; // offset 0x4E4, size 0xC, align 4
    bool m_bSkyboxReceivesWorldCsm; // offset 0x4F0, size 0x1, align 1
    bool m_bWorldReceivesSkyboxCsm; // offset 0x4F1, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x4F2, size 0x1, align 1
    char _pad_04F3[0x5]; // offset 0x4F3
    CUtlSymbolLarge m_iszTargetName; // offset 0x4F8, size 0x8, align 8
};
