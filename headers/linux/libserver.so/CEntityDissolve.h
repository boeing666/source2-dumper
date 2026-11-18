#pragma once

class CEntityDissolve : public CBaseModelEntity /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    float32 m_flFadeInStart; // offset 0xB9C, size 0x4, align 4
    float32 m_flFadeInLength; // offset 0xBA0, size 0x4, align 4
    float32 m_flFadeOutModelStart; // offset 0xBA4, size 0x4, align 4
    float32 m_flFadeOutModelLength; // offset 0xBA8, size 0x4, align 4
    float32 m_flFadeOutStart; // offset 0xBAC, size 0x4, align 4
    float32 m_flFadeOutLength; // offset 0xBB0, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0xBB4, size 0x4, align 255
    EntityDissolveType_t m_nDissolveType; // offset 0xBB8, size 0x4, align 4
    VectorWS m_vDissolverOrigin; // offset 0xBBC, size 0xC, align 4
    uint32 m_nMagnitude; // offset 0xBC8, size 0x4, align 4
    char _pad_0BCC[0x4]; // offset 0xBCC
};
