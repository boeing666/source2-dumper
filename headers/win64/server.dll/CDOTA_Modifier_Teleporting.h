#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x1F30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fStartTime; // offset 0x1AF8, size 0x4, align 4
    char[260] m_iszPortalLoopAppear; // offset 0x1AFC, size 0x104, align 1
    char[260] m_iszPortalLoopDisappear; // offset 0x1C00, size 0x104, align 1
    char[260] m_iszHeroLoopAppear; // offset 0x1D04, size 0x104, align 1
    char[260] m_iszHeroLoopDisappear; // offset 0x1E08, size 0x104, align 1
    bool m_bSkipTeleportAnim; // offset 0x1F0C, size 0x1, align 1
    bool m_bPlayingCoopAnim; // offset 0x1F0D, size 0x1, align 1
    bool m_bIsPlayingTauntGesture; // offset 0x1F0E, size 0x1, align 1
    char _pad_1F0F[0x1]; // offset 0x1F0F
    float32 m_fChannelTime; // offset 0x1F10, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1F14, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1F20, size 0xC, align 4
    char _pad_1F2C[0x4]; // offset 0x1F2C
};
