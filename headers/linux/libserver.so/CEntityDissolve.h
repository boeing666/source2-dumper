#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    float32 m_flFadeInStart; // offset 0xB2C, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0xB30, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0xB34, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0xB38, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0xB3C, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0xB40, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0xB44, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0xB48, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0xB4C, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
};
