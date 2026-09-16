#pragma once

class CModifier_HornetLeap : public CCitadelModifier /*0x0*/  // sizeof 0x1F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xE8]; // offset 0x0
    int32 m_iBonusClip; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x104]; // offset 0xEC
};
