#pragma once

class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier /*0x0*/  // sizeof 0x4D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    ParticleIndex_t m_iIdolParticle; // offset 0x4C0, size 0x4, align 255
    int32 m_nGoldValue; // offset 0x4C4, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x4C8, size 0x4, align 4
    bool m_bRevealed; // offset 0x4CC, size 0x1, align 1
    char _pad_04CD[0x3]; // offset 0x4CD
};
