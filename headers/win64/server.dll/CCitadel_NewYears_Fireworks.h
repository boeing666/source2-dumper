#pragma once

class CCitadel_NewYears_Fireworks : public CDynamicProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCD0]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0xCD0, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0xCD4, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0xCD8, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0xCDC, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0xCE0, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0xCE8, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0xCF0, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0xCF8, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0xD00, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0xD08, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0xD10, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0xD18, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0xD20, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0xD28, size 0x4, align 4
    char _pad_0D2C[0x84]; // offset 0xD2C
};
