#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x500, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    Vector m_vOtherToDest; // offset 0x154, size 0xC, align 4
    VectorWS m_vStart; // offset 0x160, size 0xC, align 4
    VectorWS m_vDest; // offset 0x16C, size 0xC, align 4
    CHandle< CBaseEntity > m_hOther; // offset 0x178, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x17C, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x188, size 0x1, align 1
    char _pad_0189[0x3]; // offset 0x189
    ParticleIndex_t m_nBeamIndex; // offset 0x18C, size 0x4, align 255
    char _pad_0190[0x370]; // offset 0x190
};
