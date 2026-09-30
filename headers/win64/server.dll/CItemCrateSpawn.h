#pragma once

class CItemCrateSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    ECrateLootType_t m_eLootType; // offset 0x4C0, size 0x4, align 4
    EObjectivePositions_t m_eObjectivePosition; // offset 0x4C4, size 0x4, align 4
    char _pad_04C8[0x8]; // offset 0x4C8
};
