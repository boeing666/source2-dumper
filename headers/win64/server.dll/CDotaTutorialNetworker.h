#pragma once

class CDotaTutorialNetworker : public CBaseEntity /*0x0*/  // sizeof 0xC40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    int32 m_nTutorialState; // offset 0x498, size 0x4, align 4
    int32 m_nTaskProgress; // offset 0x49C, size 0x4, align 4
    int32 m_nTaskSteps; // offset 0x4A0, size 0x4, align 4
    int32 m_nTaskSecondsRemianing; // offset 0x4A4, size 0x4, align 4
    int32 m_nUIState; // offset 0x4A8, size 0x4, align 4
    int32 m_nShopState; // offset 0x4AC, size 0x4, align 4
    VectorWS m_TargetLocation; // offset 0x4B0, size 0xC, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlVectorEmbeddedNetworkVar< CSpeechBubbleInfo > m_SpeechBubbles; // offset 0x4C0, size 0x578, align 8
    int32 m_nLocationID; // offset 0xA38, size 0x4, align 4
    char[256] m_GuideStr; // offset 0xA3C, size 0x100, align 1
    char[256] m_QuickBuyStr; // offset 0xB3C, size 0x100, align 1
    char _pad_0C3C[0x4]; // offset 0xC3C
};
