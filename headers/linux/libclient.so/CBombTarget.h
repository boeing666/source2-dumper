#pragma once

class CBombTarget : public C_BaseTrigger /*0x0*/  // sizeof 0x1020, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x101D]; // offset 0x0
    bool m_bBombPlantedHere; // offset 0x101D, size 0x1, align 1
    char _pad_101E[0x2]; // offset 0x101E
};
