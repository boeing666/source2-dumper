#pragma once

class CDotaTutorialNetworker : public CBaseEntity /*0x0*/  // sizeof 0xF20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    int32 m_nTutorialState; // offset 0x778, size 0x4, align 4
    int32 m_nTaskProgress; // offset 0x77C, size 0x4, align 4
    int32 m_nTaskSteps; // offset 0x780, size 0x4, align 4
    int32 m_nTaskSecondsRemianing; // offset 0x784, size 0x4, align 4
    int32 m_nUIState; // offset 0x788, size 0x4, align 4
    int32 m_nShopState; // offset 0x78C, size 0x4, align 4
    VectorWS m_TargetLocation; // offset 0x790, size 0xC, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CUtlVectorEmbeddedNetworkVar< CSpeechBubbleInfo > m_SpeechBubbles; // offset 0x7A0, size 0x578, align 8
    int32 m_nLocationID; // offset 0xD18, size 0x4, align 4
    char[256] m_GuideStr; // offset 0xD1C, size 0x100, align 1
    char[256] m_QuickBuyStr; // offset 0xE1C, size 0x100, align 1
    char _pad_0F1C[0x4]; // offset 0xF1C
};
