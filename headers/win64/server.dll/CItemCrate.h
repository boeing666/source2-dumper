#pragma once

class CItemCrate : public CPhysicsProp /*0x0*/  // sizeof 0xDA0, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xD60, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CHandle< CBaseEntity > m_hSpawner; // offset 0xD80, size 0x4, align 4
    char _pad_0D84[0x8]; // offset 0xD84
    EObjectivePositions_t m_eObjectivePosition; // offset 0xD8C, size 0x4, align 4
    char _pad_0D90[0x4]; // offset 0xD90
    int32 m_eLootType; // offset 0xD94, size 0x4, align 4 | MNetworkEnable
    char _pad_0D98[0x8]; // offset 0xD98
};
