#pragma once

class CCitadel_NewYears_Fireworks : public C_DynamicProp /*0x0*/  // sizeof 0xFD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0xEF0, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0xEF4, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0xEF8, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0xEFC, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0xF00, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0xF08, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0xF10, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0xF18, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0xF20, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0xF28, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0xF30, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0xF38, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0xF40, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0xF48, size 0x4, align 4
    char _pad_0F4C[0x84]; // offset 0xF4C
};
