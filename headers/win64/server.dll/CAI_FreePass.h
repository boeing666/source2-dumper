#pragma once

class CAI_FreePass : public CAI_Component /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x50, size 0x4, align 4
    float32 m_FreePassTimeRemaining; // offset 0x54, size 0x4, align 4
    CAI_MoveMonitor m_FreePassMoveMonitor; // offset 0x58, size 0x10, align 255
    AI_FreePassParams_t m_Params; // offset 0x68, size 0x30, align 255
};
