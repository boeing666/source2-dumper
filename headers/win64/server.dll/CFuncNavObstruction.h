#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    bool m_bDisabled; // offset 0x8E0, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0x8E1, size 0x1, align 1
    char _pad_08E2[0x6]; // offset 0x8E2
};
