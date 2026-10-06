#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x4F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    Vector m_vOtherToDest; // offset 0x14C, size 0xC, align 4
    VectorWS m_vStart; // offset 0x158, size 0xC, align 4
    VectorWS m_vDest; // offset 0x164, size 0xC, align 4
    CHandle< CBaseEntity > m_hOther; // offset 0x170, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x174, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x180, size 0x1, align 1
    char _pad_0181[0x3]; // offset 0x181
    ParticleIndex_t m_nBeamIndex; // offset 0x184, size 0x4, align 255
    char _pad_0188[0x370]; // offset 0x188
};
