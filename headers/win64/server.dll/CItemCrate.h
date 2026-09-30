#pragma once

class CItemCrate : public CPhysicsProp /*0x0*/  // sizeof 0xDA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xD60, size 0x20, align 255
    CHandle< CBaseEntity > m_hSpawner; // offset 0xD80, size 0x4, align 4
    char _pad_0D84[0x4]; // offset 0xD84
    EObjectivePositions_t m_eObjectivePosition; // offset 0xD88, size 0x4, align 4
    char _pad_0D8C[0x4]; // offset 0xD8C
    int32 m_eLootType; // offset 0xD90, size 0x4, align 4
    char _pad_0D94[0xC]; // offset 0xD94
};
