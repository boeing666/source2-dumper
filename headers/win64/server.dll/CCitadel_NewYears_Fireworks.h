#pragma once

class CCitadel_NewYears_Fireworks : public CDynamicProp /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD50]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0xD50, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0xD54, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0xD58, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0xD5C, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0xD60, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0xD68, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0xD70, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0xD78, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0xD80, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0xD88, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0xD90, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0xD98, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0xDA0, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0xDA8, size 0x4, align 4
    char _pad_0DAC[0x84]; // offset 0xDAC
};
