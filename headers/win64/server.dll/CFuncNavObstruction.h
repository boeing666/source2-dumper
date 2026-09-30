#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x890]; // offset 0x0
    bool m_bDisabled; // offset 0x890, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x6]; // offset 0x892
};
