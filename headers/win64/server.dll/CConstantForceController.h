#pragma once

class CConstantForceController  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0xC]; // offset 0x0
    Vector m_linear; // offset 0xC, size 0xC, align 4
    RotationVector m_angular; // offset 0x18, size 0xC, align 4
    Vector m_linearSave; // offset 0x24, size 0xC, align 4
    RotationVector m_angularSave; // offset 0x30, size 0xC, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
