#pragma once

class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier /*0x0*/  // sizeof 0x4E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    ParticleIndex_t m_iIdolParticle; // offset 0x4D0, size 0x4, align 255
    int32 m_nGoldValue; // offset 0x4D4, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x4D8, size 0x4, align 4
    bool m_bRevealed; // offset 0x4DC, size 0x1, align 1
    char _pad_04DD[0x3]; // offset 0x4DD
};
