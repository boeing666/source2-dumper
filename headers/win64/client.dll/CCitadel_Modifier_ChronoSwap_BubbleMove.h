#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x4E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    Vector m_vOtherToDest; // offset 0x13C, size 0xC, align 4
    VectorWS m_vStart; // offset 0x148, size 0xC, align 4
    VectorWS m_vDest; // offset 0x154, size 0xC, align 4
    CHandle< C_BaseEntity > m_hOther; // offset 0x160, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x164, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x170, size 0x1, align 1
    char _pad_0171[0x3]; // offset 0x171
    ParticleIndex_t m_nBeamIndex; // offset 0x174, size 0x4, align 255
    char _pad_0178[0x370]; // offset 0x178
};
