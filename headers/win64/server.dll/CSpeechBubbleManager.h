#pragma once

class CSpeechBubbleManager : public CBaseEntity /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< CSpeechBubbleInfo > m_SpeechBubbles; // offset 0x498, size 0x578, align 8
    uint16 m_unBubbleCount; // offset 0xA10, size 0x2, align 2
    char _pad_0A12[0x6]; // offset 0xA12
};
