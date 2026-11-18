#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x5B70, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B48]; // offset 0x0
    float32 m_fStartTime; // offset 0x1B48, size 0x4, align 4
    char[4096] m_iszPortalLoopAppear; // offset 0x1B4C, size 0x1000, align 1
    char[4096] m_iszPortalLoopDisappear; // offset 0x2B4C, size 0x1000, align 1
    char[4096] m_iszHeroLoopAppear; // offset 0x3B4C, size 0x1000, align 1
    char[4096] m_iszHeroLoopDisappear; // offset 0x4B4C, size 0x1000, align 1
    bool m_bSkipTeleportAnim; // offset 0x5B4C, size 0x1, align 1
    bool m_bPlayingCoopAnim; // offset 0x5B4D, size 0x1, align 1
    bool m_bIsPlayingTauntGesture; // offset 0x5B4E, size 0x1, align 1
    char _pad_5B4F[0x1]; // offset 0x5B4F
    float32 m_fChannelTime; // offset 0x5B50, size 0x4, align 4
    VectorWS m_vStart; // offset 0x5B54, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x5B60, size 0xC, align 4
    char _pad_5B6C[0x4]; // offset 0x5B6C
};
