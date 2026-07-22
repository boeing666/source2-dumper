#pragma once

class C_DOTA_MinibossSpawner : public C_PointEntity /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x76C, size 0x4, align 4
    bool m_bIsRadiantMiniboss; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x7]; // offset 0x771
};
