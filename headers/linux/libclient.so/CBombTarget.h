#pragma once

class CBombTarget : public C_BaseTrigger /*0x0*/  // sizeof 0x1108, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1105]; // offset 0x0
    bool m_bBombPlantedHere; // offset 0x1105, size 0x1, align 1
    char _pad_1106[0x2]; // offset 0x1106
};
