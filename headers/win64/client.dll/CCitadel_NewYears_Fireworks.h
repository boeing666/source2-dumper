#pragma once

class CCitadel_NewYears_Fireworks : public C_DynamicProp /*0x0*/  // sizeof 0x1130, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    uint32 m_unShowDurationSeconds; // offset 0x1050, size 0x4, align 4
    uint32 m_unShowDelaySeconds; // offset 0x1054, size 0x4, align 4
    float32 m_flFireworkIntervalMin; // offset 0x1058, size 0x4, align 4
    float32 m_flFireworkIntervalMax; // offset 0x105C, size 0x4, align 4
    CUtlString m_sFireworkParticle1; // offset 0x1060, size 0x8, align 8
    CUtlString m_sFireworkParticle2; // offset 0x1068, size 0x8, align 8
    CUtlString m_sFireworkParticle3; // offset 0x1070, size 0x8, align 8
    CUtlString m_sFireworkParticle4; // offset 0x1078, size 0x8, align 8
    CUtlString m_sFireworkParticle5; // offset 0x1080, size 0x8, align 8
    CUtlString m_sFireworkParticle6; // offset 0x1088, size 0x8, align 8
    CUtlString m_sFireworkParticle7; // offset 0x1090, size 0x8, align 8
    CUtlString m_sFireworkParticle8; // offset 0x1098, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundName; // offset 0x10A0, size 0x8, align 8
    float32 m_flStartSoundVerticalOffset; // offset 0x10A8, size 0x4, align 4
    char _pad_10AC[0x84]; // offset 0x10AC
};
