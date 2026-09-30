#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x4E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x3]; // offset 0x131
    Vector m_vOtherToDest; // offset 0x134, size 0xC, align 4
    VectorWS m_vStart; // offset 0x140, size 0xC, align 4
    VectorWS m_vDest; // offset 0x14C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hOther; // offset 0x158, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x15C, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x3]; // offset 0x169
    ParticleIndex_t m_nBeamIndex; // offset 0x16C, size 0x4, align 255
    char _pad_0170[0x370]; // offset 0x170
};
