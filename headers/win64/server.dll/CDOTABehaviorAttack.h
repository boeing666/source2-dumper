#pragma once

class CDOTABehaviorAttack  // sizeof 0xB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x24]; // offset 0x64
    CountdownTimer m_backSwingTimer; // offset 0x88, size 0x18, align 8
    bool m_bCastAttack; // offset 0xA0, size 0x1, align 1
    char _pad_00A1[0x3]; // offset 0xA1
    float32 m_flBackswingTime; // offset 0xA4, size 0x4, align 4
    float32 m_flAnimSpeed; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0xC]; // offset 0xAC
};
