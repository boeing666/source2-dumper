#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier /*0x0*/  // sizeof 0x4F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bOtherIsInFrontAtStart; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    Vector m_vOtherToDest; // offset 0x144, size 0xC, align 4
    VectorWS m_vStart; // offset 0x150, size 0xC, align 4
    VectorWS m_vDest; // offset 0x15C, size 0xC, align 4
    CHandle< CBaseEntity > m_hOther; // offset 0x168, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x16C, size 0xC, align 4
    bool m_bDoFinalTeleport; // offset 0x178, size 0x1, align 1
    char _pad_0179[0x3]; // offset 0x179
    ParticleIndex_t m_nBeamIndex; // offset 0x17C, size 0x4, align 255
    char _pad_0180[0x370]; // offset 0x180
};
