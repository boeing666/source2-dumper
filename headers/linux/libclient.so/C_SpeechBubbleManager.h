#pragma once

class C_SpeechBubbleManager : public C_BaseEntity /*0x0*/  // sizeof 0x1598, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< C_SpeechBubbleInfo > m_SpeechBubbles; // offset 0x770, size 0x578, align 8
    char _pad_0CE8[0x840]; // offset 0xCE8
    uint32[4] m_nLastCountInQueue; // offset 0x1528, size 0x10, align 4
    char _pad_1538[0x60]; // offset 0x1538
};
