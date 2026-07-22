#pragma once

class CDOTABehaviorAttack  // sizeof 0xB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x5C]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x5C, size 0x4, align 4
    char _pad_0060[0x20]; // offset 0x60
    CountdownTimer m_backSwingTimer; // offset 0x80, size 0x18, align 8
    bool m_bCastAttack; // offset 0x98, size 0x1, align 1
    char _pad_0099[0x3]; // offset 0x99
    float32 m_flBackswingTime; // offset 0x9C, size 0x4, align 4
    float32 m_flAnimSpeed; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0xC]; // offset 0xA4
};
