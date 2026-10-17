#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xB80, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xB84, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xB88, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xB8C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xB90, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xB94, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xB98, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xB9C, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xBA0, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xBA4, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xBB0, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xBB4, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xBB5, size 0x1, align 1 | MNotSaved
    char _pad_0BB6[0xA]; // offset 0xBB6
};
