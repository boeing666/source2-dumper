#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0x789, size 0x1, align 1
    char _pad_078A[0x6]; // offset 0x78A
};
