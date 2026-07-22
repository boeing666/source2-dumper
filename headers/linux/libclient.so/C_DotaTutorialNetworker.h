#pragma once

class C_DotaTutorialNetworker : public C_BaseEntity /*0x0*/  // sizeof 0xF30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    int32 m_nTutorialState; // offset 0x76C, size 0x4, align 4
    int32 m_nTaskProgress; // offset 0x770, size 0x4, align 4
    int32 m_nTaskSteps; // offset 0x774, size 0x4, align 4
    int32 m_nTaskSecondsRemianing; // offset 0x778, size 0x4, align 4
    int32 m_nUIState; // offset 0x77C, size 0x4, align 4
    int32 m_nShopState; // offset 0x780, size 0x4, align 4
    VectorWS m_TargetLocation; // offset 0x784, size 0xC, align 4
    CHandle< C_BaseEntity > m_TargetEntity; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    C_UtlVectorEmbeddedNetworkVar< C_SpeechBubbleInfo > m_SpeechBubbles; // offset 0x798, size 0x578, align 8
    int32 m_nLocationID; // offset 0xD10, size 0x4, align 4
    char[256] m_GuideStr; // offset 0xD14, size 0x100, align 1
    char[256] m_QuickBuyStr; // offset 0xE14, size 0x100, align 1
    int32 m_nPreTutorialState; // offset 0xF14, size 0x4, align 4
    int32 m_nPreUIState; // offset 0xF18, size 0x4, align 4
    int32 m_nPreShopState; // offset 0xF1C, size 0x4, align 4
    VectorWS m_vecPrevTargetLocation; // offset 0xF20, size 0xC, align 4
    CHandle< C_BaseEntity > m_hPrevTargetEntity; // offset 0xF2C, size 0x4, align 4
};
