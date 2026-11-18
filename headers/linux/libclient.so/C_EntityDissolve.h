#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD70]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0xD70, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0xD74, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0xD78, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0xD7C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0xD80, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0xD84, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0xD88, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0xD8C, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0xD90, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0xD94, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0xDA0, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0xDA4, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0xDA5, size 0x1, align 1 | MNotSaved
    char _pad_0DA6[0xA]; // offset 0xDA6
};
