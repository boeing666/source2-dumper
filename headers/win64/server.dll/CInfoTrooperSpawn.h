#pragma once

class CInfoTrooperSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A4]; // offset 0x0
    int32 m_iLane; // offset 0x4A4, size 0x4, align 4
    bool m_bDisableZiplining; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x1F]; // offset 0x4A9
};
