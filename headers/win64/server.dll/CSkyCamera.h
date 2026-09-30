#pragma once

class CSkyCamera : public CBaseEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    sky3dparams_t m_skyboxData; // offset 0x4B0, size 0x90, align 8 | MNotSaved
    CUtlStringToken m_skyboxSlotToken; // offset 0x540, size 0x4, align 4
    bool m_bUseAngles; // offset 0x544, size 0x1, align 1
    char _pad_0545[0x3]; // offset 0x545
    CSkyCamera* m_pNext; // offset 0x548, size 0x8, align 8 | MNotSaved
};
