#pragma once

class CSurvivorsSpawnerDestructibles : public CSurvivorsSpawner /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    float32 m_flMinimumDistanceBetween; // offset 0x178, size 0x4, align 4
    float32 m_flDestroyDistance; // offset 0x17C, size 0x4, align 4
};
