#pragma once

class C_DOTA_MinibossSpawner : public C_PointEntity /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x5F0, size 0x4, align 4
    bool m_bIsRadiantMiniboss; // offset 0x5F4, size 0x1, align 1
    char _pad_05F5[0x3]; // offset 0x5F5
};
