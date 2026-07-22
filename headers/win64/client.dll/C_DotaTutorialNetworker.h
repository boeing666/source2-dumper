#pragma once

class C_DotaTutorialNetworker : public C_BaseEntity /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int32 m_nTutorialState; // offset 0x5F0, size 0x4, align 4
    int32 m_nTaskProgress; // offset 0x5F4, size 0x4, align 4
    int32 m_nTaskSteps; // offset 0x5F8, size 0x4, align 4
    int32 m_nTaskSecondsRemianing; // offset 0x5FC, size 0x4, align 4
    int32 m_nUIState; // offset 0x600, size 0x4, align 4
    int32 m_nShopState; // offset 0x604, size 0x4, align 4
    VectorWS m_TargetLocation; // offset 0x608, size 0xC, align 4
    CHandle< C_BaseEntity > m_TargetEntity; // offset 0x614, size 0x4, align 4
    C_UtlVectorEmbeddedNetworkVar< C_SpeechBubbleInfo > m_SpeechBubbles; // offset 0x618, size 0x578, align 8
    int32 m_nLocationID; // offset 0xB90, size 0x4, align 4
    char[256] m_GuideStr; // offset 0xB94, size 0x100, align 1
    char[256] m_QuickBuyStr; // offset 0xC94, size 0x100, align 1
    int32 m_nPreTutorialState; // offset 0xD94, size 0x4, align 4
    int32 m_nPreUIState; // offset 0xD98, size 0x4, align 4
    int32 m_nPreShopState; // offset 0xD9C, size 0x4, align 4
    VectorWS m_vecPrevTargetLocation; // offset 0xDA0, size 0xC, align 4
    CHandle< C_BaseEntity > m_hPrevTargetEntity; // offset 0xDAC, size 0x4, align 4
};
