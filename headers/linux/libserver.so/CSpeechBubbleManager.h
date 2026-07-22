#pragma once

class CSpeechBubbleManager : public CBaseEntity /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< CSpeechBubbleInfo > m_SpeechBubbles; // offset 0x778, size 0x578, align 8
    uint16 m_unBubbleCount; // offset 0xCF0, size 0x2, align 2
    char _pad_0CF2[0x6]; // offset 0xCF2
};
