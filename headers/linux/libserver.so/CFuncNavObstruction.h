#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB48]; // offset 0x0
    bool m_bDisabled; // offset 0xB48, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0xB49, size 0x1, align 1
    char _pad_0B4A[0x6]; // offset 0xB4A
};
