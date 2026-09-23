#pragma once

class CSkyCameraVolume : public CBaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    Vector m_vBoxMins; // offset 0x7A0, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x7AC, size 0xC, align 4
    CHandle< CSkyCameraVolumeTarget > m_hTarget; // offset 0x7B8, size 0x4, align 4
    int32 m_nPriority; // offset 0x7BC, size 0x4, align 4
    bool m_bIsEnabled; // offset 0x7C0, size 0x1, align 1
    bool m_bSkyboxBlurEffect; // offset 0x7C1, size 0x1, align 1
    char _pad_07C2[0x2]; // offset 0x7C2
    Vector m_vBlurOrigin; // offset 0x7C4, size 0xC, align 4
    bool m_bSkyboxReceivesWorldCsm; // offset 0x7D0, size 0x1, align 1
    bool m_bWorldReceivesSkyboxCsm; // offset 0x7D1, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x7D2, size 0x1, align 1
    char _pad_07D3[0x5]; // offset 0x7D3
    CUtlSymbolLarge m_iszTargetName; // offset 0x7D8, size 0x8, align 8
};
