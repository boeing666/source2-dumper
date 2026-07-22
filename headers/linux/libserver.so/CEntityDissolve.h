#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    float32 m_flFadeInStart; // offset 0xA4C, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0xA50, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0xA54, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0xA58, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0xA5C, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0xA60, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0xA64, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0xA68, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0xA6C, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0xA78, size 0x4, align 4
    char _pad_0A7C[0x4]; // offset 0xA7C
};
