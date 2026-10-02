#pragma once

class CItemCrate : public CPhysicsProp /*0x0*/  // sizeof 0xDF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xDB0, size 0x20, align 255
    CHandle< CBaseEntity > m_hSpawner; // offset 0xDD0, size 0x4, align 4
    char _pad_0DD4[0x4]; // offset 0xDD4
    EObjectivePositions_t m_eObjectivePosition; // offset 0xDD8, size 0x4, align 4
    char _pad_0DDC[0x4]; // offset 0xDDC
    int32 m_eLootType; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0xC]; // offset 0xDE4
};
