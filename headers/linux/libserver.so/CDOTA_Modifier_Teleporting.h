#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x5B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fStartTime; // offset 0x1AF8, size 0x4, align 4
    char[4096] m_iszPortalLoopAppear; // offset 0x1AFC, size 0x1000, align 1
    char[4096] m_iszPortalLoopDisappear; // offset 0x2AFC, size 0x1000, align 1
    char[4096] m_iszHeroLoopAppear; // offset 0x3AFC, size 0x1000, align 1
    char[4096] m_iszHeroLoopDisappear; // offset 0x4AFC, size 0x1000, align 1
    bool m_bSkipTeleportAnim; // offset 0x5AFC, size 0x1, align 1
    bool m_bPlayingCoopAnim; // offset 0x5AFD, size 0x1, align 1
    bool m_bIsPlayingTauntGesture; // offset 0x5AFE, size 0x1, align 1
    char _pad_5AFF[0x1]; // offset 0x5AFF
    float32 m_fChannelTime; // offset 0x5B00, size 0x4, align 4
    VectorWS m_vStart; // offset 0x5B04, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x5B10, size 0xC, align 4
    char _pad_5B1C[0x4]; // offset 0x5B1C
};
