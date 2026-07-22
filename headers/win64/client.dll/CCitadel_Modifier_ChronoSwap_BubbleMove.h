#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x380, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    Vector m_vOtherToDest; // offset 0xC4, size 0xC, align 4
    VectorWS m_vStart; // offset 0xD0, size 0xC, align 4
    VectorWS m_vDest; // offset 0xDC, size 0xC, align 4
    CHandle< C_BaseEntity > m_hOther; // offset 0xE8, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0xEC, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0xF8, size 0x1, align 1
    char _pad_00F9[0x3]; // offset 0xF9
    ParticleIndex_t m_nBeamIndex; // offset 0xFC, size 0x4, align 255
    char _pad_0100[0x280]; // offset 0x100
};
