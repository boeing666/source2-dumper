#pragma once

class CFuncPlatRot : public CFuncPlat /*0x0*/  // sizeof 0xB18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB00]; // offset 0x0
    QAngle m_end; // offset 0xB00, size 0xC, align 4
    QAngle m_start; // offset 0xB0C, size 0xC, align 4
};
