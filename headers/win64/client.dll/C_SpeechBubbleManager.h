#pragma once

class C_SpeechBubbleManager : public C_BaseEntity /*0x0*/  // sizeof 0x1418, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< C_SpeechBubbleInfo > m_SpeechBubbles; // offset 0x5F0, size 0x578, align 8
    char _pad_0B68[0x840]; // offset 0xB68
    uint32[4] m_nLastCountInQueue; // offset 0x13A8, size 0x10, align 4
    char _pad_13B8[0x60]; // offset 0x13B8
};
