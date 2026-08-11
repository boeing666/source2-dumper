#pragma once

class CDOTA_Modifier_Teleporting : public CDOTA_Buff /*0x0*/  // sizeof 0x1F00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC8]; // offset 0x0
    float32 m_fStartTime; // offset 0x1AC8, size 0x4, align 4
    char[260] m_iszPortalLoopAppear; // offset 0x1ACC, size 0x104, align 1
    char[260] m_iszPortalLoopDisappear; // offset 0x1BD0, size 0x104, align 1
    char[260] m_iszHeroLoopAppear; // offset 0x1CD4, size 0x104, align 1
    char[260] m_iszHeroLoopDisappear; // offset 0x1DD8, size 0x104, align 1
    bool m_bSkipTeleportAnim; // offset 0x1EDC, size 0x1, align 1
    bool m_bPlayingCoopAnim; // offset 0x1EDD, size 0x1, align 1
    bool m_bIsPlayingTauntGesture; // offset 0x1EDE, size 0x1, align 1
    char _pad_1EDF[0x1]; // offset 0x1EDF
    float32 m_fChannelTime; // offset 0x1EE0, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1EE4, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1EF0, size 0xC, align 4
    char _pad_1EFC[0x4]; // offset 0x1EFC
};
