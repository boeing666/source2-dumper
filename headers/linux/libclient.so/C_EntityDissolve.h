#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF40]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xF40, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xF44, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xF48, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xF4C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xF50, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xF54, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xF58, size 0x4, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xF5C, size 0x4, align 255 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xF60, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xF64, size 0xC, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xF70, size 0x4, align 4 | MNotSaved
    bool m_bCoreExplode; // offset 0xF74, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xF75, size 0x1, align 1 | MNotSaved
    char _pad_0F76[0xA]; // offset 0xF76
};
