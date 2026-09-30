#pragma once

class CNPCSpawnDestination : public CPointEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_ReuseDelay; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_RenameNPC; // offset 0x4B8, size 0x8, align 8
    GameTime_t m_TimeNextAvailable; // offset 0x4C0, size 0x4, align 255
    char _pad_04C4[0x4]; // offset 0x4C4
    CEntityIOOutput m_OnSpawnNPC; // offset 0x4C8, size 0x18, align 255
};
