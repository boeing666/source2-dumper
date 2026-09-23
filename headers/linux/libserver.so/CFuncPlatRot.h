#pragma once

class CFuncPlatRot : public CFuncPlat /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    QAngle m_end; // offset 0xBD8, size 0xC, align 4
    QAngle m_start; // offset 0xBE4, size 0xC, align 4
};
