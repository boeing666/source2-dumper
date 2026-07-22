#pragma once

class CSkyCamera : public CBaseEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    sky3dparams_t m_skyboxData; // offset 0x778, size 0x90, align 8 | MNotSaved
    CUtlStringToken m_skyboxSlotToken; // offset 0x808, size 0x4, align 4
    bool m_bUseAngles; // offset 0x80C, size 0x1, align 1
    char _pad_080D[0x3]; // offset 0x80D
    CSkyCamera* m_pNext; // offset 0x810, size 0x8, align 8 | MNotSaved
};
