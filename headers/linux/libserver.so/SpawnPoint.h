#pragma once

class SpawnPoint : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_iPriority; // offset 0x788, size 0x4, align 4
    bool m_bEnabled; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    int32 m_nType; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
};
