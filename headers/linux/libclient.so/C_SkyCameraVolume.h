#pragma once

class C_SkyCameraVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    Vector m_vBoxMins; // offset 0x798, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x7A4, size 0xC, align 4
    CHandle< C_SkyCameraVolumeTarget > m_hTarget; // offset 0x7B0, size 0x4, align 4
    int32 m_nPriority; // offset 0x7B4, size 0x4, align 4
    bool m_bIsEnabled; // offset 0x7B8, size 0x1, align 1
    bool m_bSkyboxBlurEffect; // offset 0x7B9, size 0x1, align 1
    char _pad_07BA[0x2]; // offset 0x7BA
    Vector m_vBlurOrigin; // offset 0x7BC, size 0xC, align 4
    bool m_bSkyboxReceivesWorldCsm; // offset 0x7C8, size 0x1, align 1
    bool m_bWorldReceivesSkyboxCsm; // offset 0x7C9, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x7CA, size 0x1, align 1
    char _pad_07CB[0x5]; // offset 0x7CB
    CUtlSymbolLarge m_iszTargetName; // offset 0x7D0, size 0x8, align 8
};
