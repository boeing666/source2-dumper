#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x390, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    Vector m_vOtherToDest; // offset 0xD4, size 0xC, align 4
    VectorWS m_vStart; // offset 0xE0, size 0xC, align 4
    VectorWS m_vDest; // offset 0xEC, size 0xC, align 4
    CHandle< CBaseEntity > m_hOther; // offset 0xF8, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0xFC, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    ParticleIndex_t m_nBeamIndex; // offset 0x10C, size 0x4, align 255
    char _pad_0110[0x280]; // offset 0x110
};
