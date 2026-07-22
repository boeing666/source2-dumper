#pragma once

class CCSPlayer_WeaponServices : public CPlayer_WeaponServices /*0x0*/  // sizeof 0x15D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_flNextAttack; // offset 0xD0, size 0x4, align 255
    uint32 m_nOldTotalShootPositionHistoryCount; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x298]; // offset 0xD8
    uint32 m_nOldTotalInputHistoryCount; // offset 0x370, size 0x4, align 4
    char _pad_0374[0x1214]; // offset 0x374
    C_NetworkUtlVectorBase< uint8 > m_networkAnimTiming; // offset 0x1588, size 0x18, align 8
    bool m_bBlockInspectUntilNextGraphUpdate; // offset 0x15A0, size 0x1, align 1
    char _pad_15A1[0x2F]; // offset 0x15A1
};
