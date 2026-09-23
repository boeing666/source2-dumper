#pragma once

class C_EntityDissolve : public C_BaseModelEntity /*0x0*/  // sizeof 0x1068, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1028]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1028, size 0x4, align 255 | MNotSaved
    float32 m_flFadeInStart; // offset 0x102C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInLength; // offset 0x1030, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelStart; // offset 0x1034, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutModelLength; // offset 0x1038, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutStart; // offset 0x103C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutLength; // offset 0x1040, size 0x4, align 4 | MNotSaved
    EntityDissolveType_t m_nDissolveType; // offset 0x1044, size 0x4, align 4 | MNotSaved
    uint32 m_nMagnitude; // offset 0x1048, size 0x4, align 4 | MNotSaved
    VectorWS m_vDissolverOrigin; // offset 0x104C, size 0xC, align 4 | MNotSaved
    GameTime_t m_flNextSparkTime; // offset 0x1058, size 0x4, align 255 | MNotSaved
    bool m_bCoreExplode; // offset 0x105C, size 0x1, align 1 | MNotSaved
    bool m_bLinkedToServerEnt; // offset 0x105D, size 0x1, align 1 | MNotSaved
    char _pad_105E[0xA]; // offset 0x105E
};
