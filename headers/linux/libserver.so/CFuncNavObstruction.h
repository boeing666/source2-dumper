#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    bool m_bDisabled; // offset 0xA68, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0xA69, size 0x1, align 1
    char _pad_0A6A[0x6]; // offset 0xA6A
};
