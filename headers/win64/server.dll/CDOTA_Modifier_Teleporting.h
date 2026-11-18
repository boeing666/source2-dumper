#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x1F80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B48]; // offset 0x0
    float32 m_fStartTime; // offset 0x1B48, size 0x4, align 4
    char[260] m_iszPortalLoopAppear; // offset 0x1B4C, size 0x104, align 1
    char[260] m_iszPortalLoopDisappear; // offset 0x1C50, size 0x104, align 1
    char[260] m_iszHeroLoopAppear; // offset 0x1D54, size 0x104, align 1
    char[260] m_iszHeroLoopDisappear; // offset 0x1E58, size 0x104, align 1
    bool m_bSkipTeleportAnim; // offset 0x1F5C, size 0x1, align 1
    bool m_bPlayingCoopAnim; // offset 0x1F5D, size 0x1, align 1
    bool m_bIsPlayingTauntGesture; // offset 0x1F5E, size 0x1, align 1
    char _pad_1F5F[0x1]; // offset 0x1F5F
    float32 m_fChannelTime; // offset 0x1F60, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1F64, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1F70, size 0xC, align 4
    char _pad_1F7C[0x4]; // offset 0x1F7C
};
