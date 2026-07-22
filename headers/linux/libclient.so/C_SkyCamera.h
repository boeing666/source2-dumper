#pragma once

class C_SkyCamera : public C_BaseEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    sky3dparams_t m_skyboxData; // offset 0x770, size 0x90, align 8 | MNotSaved
    CUtlStringToken m_skyboxSlotToken; // offset 0x800, size 0x4, align 4
    bool m_bUseAngles; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    C_SkyCamera* m_pNext; // offset 0x808, size 0x8, align 8 | MNotSaved
};
