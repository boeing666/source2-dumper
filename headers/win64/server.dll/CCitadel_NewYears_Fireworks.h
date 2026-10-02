#pragma once

class CCitadel_NewYears_Fireworks : public CDynamicProp /*0x0*/  // sizeof 0xE80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0xDA0, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0xDA4, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0xDA8, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0xDAC, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0xDB0, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0xDB8, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0xDC0, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0xDC8, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0xDD0, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0xDD8, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0xDE0, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0xDE8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0xDF0, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0xDF8, size 0x4, align 4
    char _pad_0DFC[0x84]; // offset 0xDFC
};
