#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xFB8, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xFBC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xFC0, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xFC8, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xFCC, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xFD0, size 0x4, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xFD4, size 0x4, align 255 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xFD8, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xFDC, size 0xC, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xFE8, size 0x4, align 4 | MNotSaved
    bool m_bCoreExplode; // offset 0xFEC, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xFED, size 0x1, align 1 | MNotSaved
    char _pad_0FEE[0xA]; // offset 0xFEE
};
