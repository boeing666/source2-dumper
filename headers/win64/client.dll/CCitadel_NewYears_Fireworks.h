#pragma once

class CCitadel_NewYears_Fireworks : public C_DynamicProp /*0x0*/  // sizeof 0x1190, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0x10B0, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0x10B4, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0x10B8, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0x10BC, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0x10C0, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0x10C8, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0x10D0, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0x10D8, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0x10E0, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0x10E8, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0x10F0, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0x10F8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0x1100, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0x1108, size 0x4, align 4
    char _pad_110C[0x84]; // offset 0x110C
};
