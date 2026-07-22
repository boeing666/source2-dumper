#pragma once

class CFuncPlatRot : public CFuncPlat /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    QAngle m_end; // offset 0x828, size 0xC, align 4
    QAngle m_start; // offset 0x834, size 0xC, align 4
};
