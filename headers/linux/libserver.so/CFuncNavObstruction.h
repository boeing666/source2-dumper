#pragma once

class CFuncNavObstruction : public CBaseModelEntity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    bool m_bDisabled; // offset 0xA70, size 0x1, align 1
    bool m_bUseAsyncObstacleUpdate; // offset 0xA71, size 0x1, align 1
    char _pad_0A72[0x6]; // offset 0xA72
};
