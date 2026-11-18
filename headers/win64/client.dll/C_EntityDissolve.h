#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xBE0, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xBE4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xBF0, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xBF4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xBF8, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xBFC, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xC00, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xC04, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xC10, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xC14, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xC15, size 0x1, align 1 | MNotSaved
    char _pad_0C16[0xA]; // offset 0xC16
};
