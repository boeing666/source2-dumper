#pragma once

class CFuncPlatRot : public CFuncPlat /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    QAngle m_end; // offset 0x908, size 0xC, align 4
    QAngle m_start; // offset 0x914, size 0xC, align 4
};
